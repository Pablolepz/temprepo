#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool hasduplic(std::vector<int> input)
{
    std::set<int> tmpSet;
    set<int>::iterator itr;
    for(int c = 0; c < input.size(); c++)
    {
        tmpSet.insert(input.at(c));
        for (itr = tmpSet.begin(); itr != tmpSet.end(); ++itr) 
        {
            cout << *itr << ",";
        }
    }
    return true;
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
    
    //unduplic test
    std::vector<int> inputVec = {1,4,4,5,6};

    hasduplic(inputVec);
    
    return 0;
}