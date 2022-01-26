#include <fstream>
#include "ReaderWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"


std::list<std::string> ReaderWorker::execute(std::list<std::string> &text, const std::list<std::string> &params) {
    std::list<std::string> read_lines;

    if (params.empty())
        throw WrongNumberOfArgsException("Cannot to execute ReaderWorker. Should 1 argument, get 0.");

    std::string file_name = *params.begin();
    std::ifstream in(file_name);//открываем файл для чтения

    if (in.is_open()) {
        while (!in.eof()) {
            std::string tmp;
            getline(in, tmp);

            read_lines.push_back(tmp);
        }
    }

    in.close();
    return read_lines;
}
