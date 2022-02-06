#include <iostream>
#include <cmath>
#include "functionSum.h"
#include "functionPrime.h"

using namespace std; // if not used, must write std::cout or std::endl



int main() {
    float a, b;
    a = sumReciprocalNormal(100);
    b = sumReciprocalRev(1);
    std::cout << sumUpTo(3) << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';

    std::cout << a - b << '\n';

    //float sum1;// compute the sum 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/100 =5.18....
    //float sum2;// compute the sum 1/100 + 1/99 + 1/98 + ... + 1/1 = 5.18
    // use function you made
    //cout << sum1 << '\n';
    //cout << sum2 << '\n';
    //cout << (sum1 - sum2) << '\n';

    // inclusive: 1*1 + 2*2 + 3*3 + 4*4 + 5*5
    // inclusive: 1*1 + 2*2 + 3*3 + 4*4 + 5*5 +6*6 + 7*7

    std::cout << sumMysteryNormal(100) << '\n';
    std::cout << sumMysteryRev(1) << '\n';
    // mystery1sum
    // be careful! if you calculate as int this will not work. use float!
    // compute 1.0/(1*1) + 1.0/(2.0*2.0) + 1/(3*3) + ... + 1/(n*n)  n-> infinity
    //float mystery1; //

    // mystery2sum
    // compute  1/(n*n) + 1/((n-1)*(n-1)) +  1/((n-2)*(n-2)) + ...
    //float mystery2; //

    isPrime(19);
    cout << '\n';
//    isPrime(81);// trial divide, 81%3 == 0 therefore not prime
//    cout << '\n';
//    isPrime(57) ; // 57 % 2, 57% 3, 57%4
//    cout << '\n';

}
