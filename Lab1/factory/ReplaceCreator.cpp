#include "ReplaceCreator.h"
#include "../blocks/ReplaceWorker.h"

Worker *ReplaceCreator::create(const std::list<std::string> &params) {
    return new ReplaceWorker(params);
}
