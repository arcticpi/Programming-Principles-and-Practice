#include <iostream>

class BaseClass
{
public:
    BaseClass()
    {
        std::cout << "base class constructor" << std::endl;
    }

    virtual ~BaseClass()
    {
        std::cout << "base class destructor" << std::endl;
    }

    virtual void method()
    {
        std::cout << "base class method" << std::endl;
    }
};

class ChildClass : public BaseClass
{
public:
    ChildClass()
    {
        std::cout << "child class constructor" << std::endl;
    }

    ~ChildClass()
    {
        std::cout << "child class destructor" << std::endl;
    }

    void method()
    {
        std::cout << "child class method" << std::endl;
    }
};

int main()
{
    BaseClass *pBaseObj = new BaseClass;
    pBaseObj->method();
    delete pBaseObj;

    BaseClass *pChildObj = new ChildClass;  // both base and child class constructors are called
    pChildObj->method();                    // without the virtual keyword, the base class method would be called
    delete pChildObj;                       // with the virtual keyword, both base and child class destructors are called
                                            // without the virtual keyword, just the base class destructor would be called
    return 0;
}