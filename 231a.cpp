#include <iostream>

using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya, number(0);
    cout<<"Enter the number of tasks and who can solve: ";
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout <<"They can solve: "<<number << endl;
    return 0;
}
