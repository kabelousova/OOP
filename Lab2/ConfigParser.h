#ifndef LAB1_CONFIGPARSER_H
#define LAB1_CONFIGPARSER_H

#include <string>
#include <list>
#include <map>
#include <fstream>

class ConfigParser {
private:
    std::ifstream config_file;
    std::list<unsigned int> block_flow;
    std::map<unsigned int, std::pair<std::string, std::list<std::string>>> block_config;

    void read_file();

public:
    ConfigParser(const std::string &file_name);

    const std::list<unsigned int> &get_block_flow() const;

    const std::pair<std::string, std::list<std::string>> &get_block_info(unsigned int block_num) const;
};

#endif
