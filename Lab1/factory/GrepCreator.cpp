#include "GrepCreator.h"
#include "../blocks/GrepWorker.h"

Worker *GrepCreator::create(const std::list<std::string> &params) {
    return new GrepWorker(params);
}
