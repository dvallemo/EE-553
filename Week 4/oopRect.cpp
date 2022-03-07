#include <iostream>

struct Rect
{
    float length;
    float width;
};

void print(Rect r)
{
    std::cout << "length: " << r.length <<" width:" <<r.width << std::endl;

}

float area(Rect r){
    return r.width*r.length;
}


int main() {
    //create an instance of the r object
    //set the lenght of that instance to 5
    //set the width of that instance to 50
    //use the print funciton to print out  the instance member variables
    //print out the area result of the area function
    //Do the same thing with a difference insctance and name the memeber variables  6 and width = 60

    Rect r1;
    r1.length=5;
    r1.width = 50;

    print(r1);//instnace goes instide the in[ut when clling object fucntions
   // std::cout << "\n";
    std::cout << "Area: " <<area(r1) << std::endl;

    Rect r2;
    r2.length=6;
    r2.width=60;

    print(r2);
    //std::cout <<"\n";
    std::cout << "Area: "<< area(r2) << std::endl;


    return 0;
}
