#ifndef LAB1_CREATOR_H
#define LAB1_CREATOR_H


#include "../blocks/Worker.h"

class Creator {
public:
    virtual Worker *create(const std::list<std::string> &params) = 0;
};


#endif //LAB1_CREATOR_H
