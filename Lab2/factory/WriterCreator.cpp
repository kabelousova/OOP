#include "WriterCreator.h"

Worker &WriterCreator::getWorker() {
    return _worker;
}

WriterCreator::WriterCreator() {
    _worker = WriterWorker();
}
