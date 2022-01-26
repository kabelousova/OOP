#ifndef LAB1_DUMPWORKER_H
#define LAB1_DUMPWORKER_H

#include "Worker.h"

class DumpWorker : public Worker {
public:
    std::list<std::string> execute(std::list<std::string> &text, const std::list<std::string> &params) override;
};


#endif
