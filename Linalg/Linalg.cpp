#include <iostream>
#include <string>
using namespace std;




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