
#ifndef LAB1_WRITERWORKER_H
#define LAB1_WRITERWORKER_H

#include "Worker.h"

class WriterWorker : public Worker {
private:
    std::string file_name;
public:
    std::list<std::string> execute(std::list<std::string> &text) override;

    WriterWorker(const std::list<std::string> &params);
};

#endif
