#include "ReaderCreator.h"
#include "../blocks/ReaderWorker.h"

Worker *ReaderCreator::create(const std::list<std::string> &params) {
    return new ReaderWorker(params);
}
