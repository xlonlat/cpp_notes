
#include <iostream>

class MulitInt
{
public :
    int     m;
    int     n;

    MulitInt() { m = n = 0; }

    MulitInt(int x, int y) : m(x), n(y) {}

    // 支持了+号运算符
    MulitInt operator +(MulitInt val) const
    {
        return MulitInt(m + val.m, n + val.n);
    }

    void Add(int x)
    {
        m += x;
        n += x;
    }

    void Add(int x, int y)
    {
        m += x;
        n += y;
    }
};


int main()
{
    //////////////////////////////////////////////////////////
    // 测试运算符重载
    MulitInt mi1(1, 2);
    MulitInt mi2(3, 4);
    MulitInt res = mi1 + mi2;

    //////////////////////////////////////////////////////////
    // 测试函数重载
    MulitInt mi3;
    mi3.Add(1);
    mi3.Add(2, 3);

    int i;
    std::cin >> i;
}
