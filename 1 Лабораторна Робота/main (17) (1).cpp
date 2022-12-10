/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int N,i;
    cout << "Введіть розмір масиву: ";
    cin >> N;
    int* A=new int[N];
    cout << "Введіть перший масив: ";
    for (i=0; i < N; i++) {
        cin >> A[i];
    }
    int* B=new int[N];
    cout << "Введіть другий масив: ";
    for (i=0; i < N; i++) {
        cin >> B[i];
    }
    int* C=new int[N];
    for (i=0; i < N; i++) {
        C[i]=A[i]*B[i];
    }
    cout << "Отриманий масив: ";
    for (i=0; i < N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    return 0;
}