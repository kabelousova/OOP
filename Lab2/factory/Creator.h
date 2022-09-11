#ifndef LAB1_CREATOR_H
#define LAB1_CREATOR_H


#include "../blocks/Worker.h"

class Creator {
public:
    virtual Worker &getWorker() = 0;
};


#endif
