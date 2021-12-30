#include "DumpCreator.h"
#include "../blocks/DumpWorker.h"

Worker *DumpCreator::create(const std::list<std::string> &params) {
    return new DumpWorker(params);
}
