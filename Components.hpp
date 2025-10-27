#pragma once
#include <tuple>

class Componenet
{
public:
    bool exists {false};
};

class CTransform : public Componenet
{

};

class CShape : public Componenet
{

};

enum ComponentTag
{
    tranform,
    shape
};

using ComponenetTuple = std::tuple<CTransform, CShape>;
