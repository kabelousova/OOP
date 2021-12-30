#include "SortWorker.h"

std::list<std::string> SortWorker::execute(std::list<std::string> &text) {
    text.sort();

    return text;
}

