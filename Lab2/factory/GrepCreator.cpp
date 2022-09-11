#include "GrepCreator.h"

Worker &GrepCreator::getWorker() {
    return _worker;
}

GrepCreator::GrepCreator() {
    _worker = GrepWorker();
}
