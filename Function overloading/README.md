# Function Overloading

An overloaded function must have:
1. Different type of parameters
2. Different number of parameters
3. Different sequence of parameters

Examples:
1. void print();
2. void print(int a);
3. void print(float a);
4. void print (int a, int b);
5. void print(int a, double b);
6. void print(double a, int b);

Why use it:
Allows you to print or return different values according to what the user inputs. If the user inputs and intiger then print(int a); can be implimented, but if the user inputs a float, then print(float a); can be inplimented. The two functions have the same functionality
