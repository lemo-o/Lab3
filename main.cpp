/*
Ben Hall
Section 05
9/14
*/
#include <iostream>
using namespace std;
double tro,uble;
int temp;
bool loopkiller = false;
int main()
{
    cout << "First number:\n";
    cin >> tro;
    cout << "Second number:\n";
    cin >> uble;
    cout << "1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division:\n";
    cin >> temp;
    if(temp < 1 || temp > 4)
    {
        while(loopkiller == 0)
        {
            cout << "1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division:\n";
            cin >> temp;
            if(temp >= 1  && temp <= 4)
            {
                loopkiller = 1;
            }
        }
    }
    //addition
    if(temp == 1)
    {
        cout << (tro+uble) << endl;
    }
    //subtraction
    else if(temp == 2)
    {
        cout << (tro-uble) << endl;
    }
    //multiplication
    else if(temp == 3)
    {
        cout << (tro*uble) << endl;
    }
    //undefined
    else if(uble == 0)
    {
        cout << "undefined"<< endl;
    }
    //division
    else if(temp == 4)
    {
        cout << (tro/uble) << endl;
    }
}