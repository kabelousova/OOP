#ifndef LAB1_WRITERCREATOR_H
#define LAB1_WRITERCREATOR_H


#include "Creator.h"

class WriterCreator : public Creator{
public:
    Worker *create(const std::list<std::string> &params) override;
};


#endif