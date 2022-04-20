
#include <iostream>

class Base
{
public:
    virtual void Print(int x) const
    {
        std::cout << x << std::endl;
    }
};

class Balabala : public Base
{
public:
    // 编译不通过！基类根本没有这个函数。
    //virtual void Printf(int x) override
    //{
    //    std::cout << "Balabala:" << x << std::endl;
    //}

    // 编译不通过!函数名一致但参数不一致。
    //virtual void Printf(int x, int y) override
    //{
    //    std::cout << x << "-" << y << std::endl;
    //}

    // 编译不通过！常量性不一致。（人话：基类加了const修饰）
    //virtual void Print(int x)  override
    //{
    //    std::cout << "Balabala:" << x << std::endl;
    //}

    // 说白了加了override就是要求你对于基类的虚函数声明一定要保持一致，当然基类也要有同名函数，然后再考虑如何重新实现，就是重写或覆盖。
    virtual void Print(int x) const override
    {
    std::cout << "Balabala:" << x * 2 << std::endl;
    }

};

int main()
{
    Balabala bala;
    bala.Print(1);

    int i;
    std::cin >> i;
}
