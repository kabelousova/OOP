#include "ReplaceCreator.h"

Worker &ReplaceCreator::getWorker() {
    return _worker;
}

ReplaceCreator::ReplaceCreator() {
    _worker = ReplaceWorker();
}
