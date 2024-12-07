#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::clog;
using std::endl;

class Base
{
public:
    virtual ~Base(){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};
