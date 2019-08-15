#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#define N 4 

void transpose(int A[][N], int B[][N]) 
{ 
    int i, j; 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) 
            B[i][j] = A[j][i]; 
}  

int main()
{
    int Testmat[5][4] = { {5, -2, 2, 7},
                          {1, 0, 0, 3},
                          {-3, 1, 5, 0}, 
                          {3, -1, -9, 4}};
    
    cout << sizeof(Testmat)/sizeof(Testmat[0])<<"\n";
    cout << sizeof(Testmat[0])/sizeof(int)<<"\n";
    cout << sizeof(int) << "\n";
    cout << Testmat[4][0];

    return 0;
} 