#ifndef LAB1_READERWORKER_H
#define LAB1_READERWORKER_H

#include "Worker.h"

class ReaderWorker : public Worker {
public:
    std::list<std::string> execute(std::list<std::string> &text, const std::list<std::string> &params) override;
};

#endif
