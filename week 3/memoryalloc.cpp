#include <iostream>
//why do memory allocartion: want to reserve space in the memory
//why do deallocation: want to free space in the memory

//Memory allocation has Automaitc(static) and Dynamic memory

//automaitc --> int x = 5;
//dynamically -->

//Automatic allocation:
//1. Dealloc. Automatically(with scope) --> end of scope or lifetime, automatically kills variable at end of scope
//2. Allocated in stack(LIFO). Stack carries all the static/automatic reservations. The heap carries all the dynamic reservations
//3. Must know allocation detais(ex. size, etc..) at compilation time (before running_

//Dynamic Allocation:
// 1. single variable
// int * p = new int;  returns pointer
//

//2. array variable
int main() {
    int x = 0; //static allocation/reservation
    if(....){
        int *p = &x; //carrries adress of x
        int y = 5;
    }// deallocation of p, and y

    return 0;
} //deallocation of x
