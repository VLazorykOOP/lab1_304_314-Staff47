/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int i;
    int min=1;
    int max=10;
    int N=rand() % (max - min + 1) + min;
    cout << "Довжина масиву: ";
    cout << N;
    int* A=new int[N];
    cout << "\nПерший масив: ";
    for (i=0; i < N; i++) {
        A[i]=rand() % (max - min + 1) + min;
    }
    for (i=0; i < N; i++) {
       cout << A[i] << " ";
    }
    int* B=new int[N];
    cout << "\nДругий масив: ";
    for (i=0; i < N; i++) {
        B[i]=rand() % (max - min + 1) + min;
    }
    for (i=0; i < N; i++) {
    cout << B[i] << " ";
    
        
    }
    int* C=new int[N];
    for (i=0; i < N; i++) {
        C[i]=A[i]*B[i];
    }
    
    cout << "\nОтриманий масив: ";
    for (i=0; i < N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    
    }