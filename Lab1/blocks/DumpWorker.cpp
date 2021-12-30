
#include <fstream>
#include "DumpWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"

std::list<std::string> DumpWorker::execute(std::list<std::string> &text) {
    std::ofstream out(file_name);

    for (const auto &word: text) {
        out.write(&word[0], word.size());
        out.write(" ", 1);
    }

    return text;
}

DumpWorker::DumpWorker(const std::list<std::string> &params) {
    if (params.empty())
        throw WrongNumberOfArgsException();

    this->file_name = *params.begin();
}

