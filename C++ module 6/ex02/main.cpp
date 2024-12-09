#include <Base.hpp>

Base * generate(void)
{
    static int i;
    Base *ptr;
    switch (i)
    {
    case 0:
        ptr = new(A);
        break;
    case 1:
        ptr = new(B);
        break;
    case 2:
        ptr = new(C);
        i = -1;
        break;
    }
    ++i;
    return ptr;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        cout << "Pointer  " << " A" << endl;
    else if (dynamic_cast<B*>(p))
        cout << "Pointer  " << " B" << endl;
    else if (dynamic_cast<C*>(p))
        cout << "Pointer  " << " C" << endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        cout << "Reference  " << " A" << endl;
        return;
    }
    catch(...){}
    try
    {
        (void)dynamic_cast<B&>(p);
        cout << "Reference  " << " B" << endl;
        return;
    }
    catch(...){}
    try
    {
        (void)dynamic_cast<C&>(p);
        cout << "Reference  " << " C" << endl;
        return;
    }
    catch(...){}
}

int main()
{
    for (int i = 0; i < 15; i++)
    {
        Base *ptr = generate();
        identify(ptr);
        identify(*ptr);
        delete ptr;
    }
}
