#include <iostream>
using namespace std;

class Complex{ //defines complex class
private:
    int real, img; //defines the member varaibles
public:
    Complex() = default; //sets a default consturctor which has all member varaibles set to zero
    
    Complex(int r, int i){ //constructor parametrizes the memeber variables
        real = r;
        img = i;
    }

    void print(){ //method that prints out the real and img compnenet of the complex number sum
        cout << real << " + " << img << "j" << endl;

    }
    //operator overloading syntax
    Complex operator +(Complex c)
    {
        Complex temp; //sets a temporary object to return the complex of complex type
        temp.real = real + c.real; //adds teh real components together of all c instances
        temp.img = img + c.img;

        return temp;

    }
};

int main() {
    Complex c1(5,4); //sets first complex number instance to 5+4j
    Complex c2(2, 5);
    Complex c3(1, 1);
    Complex c4; //object to store all the instances in 

    c4 = c1 + c2 +c3;
    c4.print();

    return 0;
}
