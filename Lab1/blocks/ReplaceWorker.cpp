
#include "ReplaceWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"

std::list<std::string> ReplaceWorker::execute(std::list<std::string> &text) {
    for (auto &s: text) {
        for (int i = 0; s.find(word_to_replace, i) != -1;) {
            int skip = s.find(word_to_replace, i) + word_for_replace.size();
            s.replace(s.find(word_to_replace, i), word_to_replace.size(), word_for_replace);
            i = skip;
        }
    }

    return text;
}

ReplaceWorker::ReplaceWorker(const std::list<std::string> &params) {
    if (params.size() < 2)
        throw WrongNumberOfArgsException();

    this->word_to_replace = *params.begin();
    this->word_for_replace = *std::next(params.begin());
}
