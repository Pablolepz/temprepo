#include <stdio.h>
#include <iostream>

using namespace std;

int calcTwoInts(ints x, ints y)
{
   return x + y;
}



double calcAdd(double a, double b)
{
    return a + b;
}


int calcAddInt(int a, int b)
{
    return a + b;
}

int main(){

    std::cout << "test" << std::endl;
    std::cout << "new_line" << std::endl;
    int x = 0;


    //unit testing

    //calcAdd()
    int result = calcAddInt(4, 5);

    if (result == 9)
    {
        cout << "calcAdd pass" << endl;
    }
    else
    {
        cout << "calcAdd fail" << endl;
        return 1;
    }

        //calcAdd() double
    double result2 = calcAdd(4.0, 6.0);

    if (result2 == 10.0)
    {
        cout << "calcAdd pass" << endl;
    }
    else
    {
        cout << "calcAdd fail" << endl;
        return 1;
    }


    return 0;
}
