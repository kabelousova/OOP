#include "ReaderCreator.h"

Worker &ReaderCreator::getWorker() {
    return _worker;
}

ReaderCreator::ReaderCreator() {
    _worker = ReaderWorker();
}
