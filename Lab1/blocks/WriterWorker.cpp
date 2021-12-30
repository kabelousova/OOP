
#include <fstream>
#include "WriterWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"

std::list<std::string> WriterWorker::execute(std::list<std::string> &text) {
    std::ofstream out(file_name);

    for (const auto &word: text) {
        out.write(&word[0], word.size());
        out.write("\n", 1);
    }

    return {};
}

WriterWorker::WriterWorker(const std::list<std::string> &params) {
    if (params.empty())
        throw WrongNumberOfArgsException();

    this->file_name = *params.begin();
}

