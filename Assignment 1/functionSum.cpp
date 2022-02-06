#include "functionSum.h"

using namespace std;

/*
Problem1:
=========

Write C++ code that sum the numbers from 1 to 100

Problem2:
=========

a. Write C++ code that sum reciprocals (1/1 + 1/2 + … + 1/99 + 1/100)
b. Write C++ code that sum reciprocals (1/100 + 1/99 + ... 1/2 + 1/1)

compare a and b

Problem3:
=========
a. Write C++ code that sum multiplication reciprocals (1/1*1 + 1/2*2 + … ) \
b. Write C++ code that sum reciprocals (1/100*100 + 1/99*99 + ... )

*/


int sumUpTo(int x) 
{ //int x is the input of the user, summing from 1 to x, if x=100 then from 1 to 100
  int sum = 0;
  for (int i = 1; i < x; i++)
    {
      sum +=i;
      
    }
    return sum;
}

float sumReciprocalNormal(int x) 
{
   float sum = 0;
   float i;
   for (i = 1; i <= x; i++)
   {
       sum += 1/i;
   }
   return sum;
}

float sumReciprocalRev(int x) 
{
    int sum = 0;
    float i;
    for (i = 100; i <= x; i--)
    {
        sum += 1/i;
    }
    return sum;    
}

float sumMysteryNormal(int x){
    float sum = 0;
    float i;
    for (i = 1; i <= x; i++)
    {
        sum += 1/(i*i);
    }
    return sum;
}

float sumMysteryRev(int x) {
    float sum = 0;
    float i;
    for (i = 100; i>=x; i--)
    {
        sum += 1/(i*i);
    }
    return sum;
}

