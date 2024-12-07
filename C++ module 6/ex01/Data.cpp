#include <Data.hpp>

Data::Data() : nbr(0) {}

Data::Data(const int nbr) : nbr(nbr) {}

Data::Data(const Data& other) {*this = other;}

Data &Data::operator=(const Data& other)
{
    if (this != &other)
        this->nbr = other.nbr;
    return (*this);
}

Data::~Data(){}

