/************************************************
** Author: Andrea Hayes
** Date:
** Purpose:
** Input:
** Processing:
** Output:
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int i, n=0;

    cout << "Enter desired size. (Up to 20): ";
    cin >> i;

    if (i < 1 || i >20)
    {
        cout << "Your entry is too big or too small. Size must be between 1 and 20.";
    }
    for (int n=0; n<i; n++) 
    {
        for (int c=0;c<i-n-1;c++)
        {
            cout << " ";
        }
        for (int c = 0; c<n; c++)
        {
            cout << "*";
        }
        
        cout << n+1;
        
        for (int c = 0; c<n; c++)
        {
            cout << "*";
        }
        
        cout << endl;
        
    }


    return 0;
}
