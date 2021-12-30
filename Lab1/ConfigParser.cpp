#include <fstream>
#include <regex>
#include "ConfigParser.h"
#include "execeptions/WrongConfigFileException.h"

ConfigParser::ConfigParser(const std::string &file_name) {
    config_file.open(file_name);

    read_file();
}

void ConfigParser::read_file() {
    std::string line;

    getline(config_file, line);

    if (line.rfind("desc") != 0) {
        throw WrongConfigFileException();
    }

    while (line.rfind("csed") != 0 && !config_file.eof()) {
        getline(config_file, line);
        char *end;
        unsigned long index = strtoul(line.data(), &end, 10);
        end += 3;

        std::string block_name;
        int pos = end - line.data();
        unsigned long end_block_name = line.find(' ', pos);

        if (std::string::npos == end_block_name) {
            block_name = std::string(line.begin() + (end - line.data()), line.end());
            block_config[index] = {block_name, {}};
        } else {
            block_name = std::string(line.begin() + (end - line.data()),
                                     line.begin() + end_block_name);
            std::list<std::string> block_params;

            std::regex rgx("\\s+");
            std::sregex_token_iterator iter(line.begin() + end_block_name + 1,
                                            line.end(),
                                            rgx,
                                            -1);
            std::sregex_token_iterator end_iter;

            for (; iter != end_iter; ++iter)
                block_params.push_back(*iter);

            block_config[index] = {block_name, block_params};
        }
    }

    if (config_file.eof()) {
        throw WrongConfigFileException();
    }


    getline(config_file, line);

    std::string::iterator end_pos = std::remove(line.begin(), line.end(), ' ');
    line.erase(end_pos, line.end());

    std::regex rgx("->");
    std::sregex_token_iterator iter(line.begin(),
                                    line.end(),
                                    rgx,
                                    -1);
    std::sregex_token_iterator end_iter;

    for (; iter != end_iter; ++iter)
        block_flow.push_back(std::stoi(*iter));
}

const std::list<unsigned int> &ConfigParser::get_block_flow() const {
    return block_flow;
}

const std::pair<std::string, std::list<std::string>> &ConfigParser::get_block_info(unsigned int block_num) const {
    return block_config.at(block_num);
}
