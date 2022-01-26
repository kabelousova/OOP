#include "GrepWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"

std::list<std::string> GrepWorker::execute(std::list<std::string> &text, const std::list<std::string> &params) {
    std::list<std::string> selected;

    if (params.empty())
        throw WrongNumberOfArgsException("Cannot to execute GrepWorker. Should 1 argument, get 0.");

    std::string word = *params.begin();

    for (auto &s: text) {
        if (s.find(word) != -1) {
            selected.push_back(s);
        }
    }

    return selected;
}
