#include <Data.hpp>

Data::Data() {}

Data::Data(const Data& other) {*this = other;}

Data &Data::operator=(const Data&){return (*this);}

Data::~Data(){}

void Data::convert(const string& source)
{

}
