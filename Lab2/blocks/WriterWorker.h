#ifndef LAB1_WRITERWORKER_H
#define LAB1_WRITERWORKER_H

#include "Worker.h"

class WriterWorker : public Worker {
public:
    std::list<std::string> execute(std::list<std::string> &text, const std::list<std::string> &params) override;
};

#endif
