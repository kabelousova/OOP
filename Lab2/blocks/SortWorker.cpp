#include "SortWorker.h"

std::list<std::string> SortWorker::execute(std::list<std::string> &text, const std::list<std::string> &params) {
    text.sort();

    return text;
}

