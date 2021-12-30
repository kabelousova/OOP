#include "SortCreator.h"
#include "../blocks/SortWorker.h"

Worker *SortCreator::create(const std::list<std::string> &params) {
    return new SortWorker();
}
