#include "DumpCreator.h"

Worker &DumpCreator::getWorker() {
    return _worker;
}

DumpCreator::DumpCreator() {
    _worker = DumpWorker();
}
