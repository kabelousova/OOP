#ifndef LAB1_GREPCREATOR_H
#define LAB1_GREPCREATOR_H


#include "Creator.h"
#include "../blocks/GrepWorker.h"

class GrepCreator : public Creator {
private:
    GrepWorker _worker;
public:
    Worker &getWorker() override;

    GrepCreator();
};


#endif
