#ifndef LAB1_DUMPWORKER_H
#define LAB1_DUMPWORKER_H

#include "Worker.h"

class DumpWorker : public Worker {
private:
    std::string file_name;
public:
    DumpWorker(const std::list<std::string> &params);

    std::list<std::string> execute(std::list<std::string> &text) override;
};


#endif
