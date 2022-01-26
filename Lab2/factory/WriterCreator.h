#ifndef LAB1_WRITERCREATOR_H
#define LAB1_WRITERCREATOR_H


#include "Creator.h"
#include "../blocks/WriterWorker.h"

class WriterCreator : public Creator {
private:
    WriterWorker _worker;
public:
    Worker &getWorker() override;

    WriterCreator();
};


#endif