#include "WriterCreator.h"
#include "../blocks/WriterWorker.h"

Worker *WriterCreator::create(const std::list<std::string> &params) {
    return new WriterWorker(params);
}
