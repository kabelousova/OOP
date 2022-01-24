#include <fstream>
#include "ReaderWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"


std::list<std::string> ReaderWorker::execute(std::list<std::string> &text) {
    std::list<std::string> read_lines;
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

ReaderWorker::ReaderWorker(const std::list<std::string> &params) {
    if (params.empty())
        throw WrongNumberOfArgsException("Should 1 argument");

    this->file_name = *params.begin();
}
