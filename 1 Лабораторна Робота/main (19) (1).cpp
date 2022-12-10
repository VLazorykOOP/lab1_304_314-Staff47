/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib> 
using namespace std;
#define RAND(Min,Max) (rand()%((Max)-(Min)+1)+(Min))

int main() {
    srand(time(0));
int size = RAND(5, 100);
int *arr = new int[size];
for (int i = 0; i < size; i++) {
arr[i] = RAND(-50, -1);
cout << arr[i] << ':' << i << endl;
}
cout << endl;
int index = RAND(0, size);
int fin = arr[0];
for (int i = index; i < size; i++) {
if (arr[i] > fin) {
fin = arr[i];
}
}

cout << "Maximum negative integer in arr is" << fin;
}