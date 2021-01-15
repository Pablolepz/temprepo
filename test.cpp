#include <stdio.h>
#include <iostream>

using namespace std;

int calcAdd(int a, int b)
{
    return a + b;
}

int main(){

    std::cout << "test" << std::endl;
    int x = 0;


    //unit testing

    //calcAdd()
    int result = calcAdd(4, 5);

    if (result == 9)
    {
        cout << "calcAdd pass" << endl;
        return 0;
    }
    else
    {
        cout << "calcAdd fail" << endl;
        return 1;
    }
    
    return 0;
}