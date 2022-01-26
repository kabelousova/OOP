#ifndef LAB1_REPLACECREATOR_H
#define LAB1_REPLACECREATOR_H


#include "Creator.h"
#include "../blocks/ReplaceWorker.h"

class ReplaceCreator : public Creator {
private:
    ReplaceWorker _worker;
public:
    Worker &getWorker() override;

    ReplaceCreator();
};


#endif