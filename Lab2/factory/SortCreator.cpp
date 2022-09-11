#include "SortCreator.h"

Worker &SortCreator::getWorker() {
    return _worker;
}

SortCreator::SortCreator() {
    _worker = SortWorker();
}
