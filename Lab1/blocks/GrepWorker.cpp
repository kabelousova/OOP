
#include "GrepWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"

std::list<std::string> GrepWorker::execute(std::list<std::string> &text) {
    std::list<std::string> selected;

    for (auto &s: text) {
        if (s.find(word) != -1) {
            selected.push_back(s);
        }
    }

    return selected;
}

GrepWorker::GrepWorker(const std::list<std::string> &params) {
    if (params.empty())
        throw WrongNumberOfArgsException();

    this->word = *params.begin();
}

