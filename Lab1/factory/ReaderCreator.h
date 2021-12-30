#ifndef LAB1_READERCREATOR_H
#define LAB1_READERCREATOR_H


#include "Creator.h"

class ReaderCreator : public Creator{
public:
    Worker *create(const std::list<std::string> &params) override;
};


#endif //LAB1_READERCREATOR_H
