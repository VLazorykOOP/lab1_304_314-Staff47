/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 
int main()
{
    int n, pos=0, neg=0, zero = 0;


    cout << "n="; cin >> n;
 
    int *a = new int[n];    
    
    cout << "Введіть " << n << " число:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0) 
        pos++;
        else if (a[i] < 0) 
        neg++;
        else
            ++zero;
    }
        cout << "Додатних: " << pos << "\nВід'ємних: " << neg << "\n";
        cout << "Нульових: " << zero << endl;
        return 0;
        
    }
    
