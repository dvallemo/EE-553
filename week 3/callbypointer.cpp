#include <iostream>
using namespace std;
//pass by refernce, points to the location of the data in memory, not a copy of that data
void inc(int &x)  //will print 6
{
    x = x + 1;
}
//pass by pointer or reference when:
//1. more than 1 output
//2. Large input size(structs)

//passing by value/copy
void inc1(int x)  //will print 5, it will print a copy
{
    x = x + 1;
}

//passing by pointer
void incp(int *p)
{
    *p = *p + 1;
}

//self divide example
//divides 2 numbers if denominator is not 0, otherwise it returns false
bool SafeDivide(int x, int y, float &result)
{
    if (y =! 0)
    {
        result = float(x/y);
        return true;
    }
        return false;
}
//break gets you out of the most inner loop in nested loop, if just loop it gets out of the loop
int main() {

    int y = 5;
    int z = 5;
    int w = 5;
    int a, b;
    float c;
    inc(y);
    inc1(z);
    incp(&w);
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << w << std::endl;

    std::cout << "Please enter 2 numbers: "<< std::endl;
    std::cin >> a;
    std::cout << "\n";
    std::cin >> b;

    bool s = SafeDivide(a, b, c);
    if (s == true)
    {
        std::cout << "Successful Result: " << c << std::endl;
    }
    else
        std::cout << "Not successful" << std::endl;
    return 0;
}
