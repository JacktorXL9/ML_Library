#include <string>
#include <iostream>
#include <vector>

using namespace std;

void reflxx(int n, vector<vector<int>>& board)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            cout << board[i][j]  << "  ";
            }
        cout << endl; //printing the matrix to the screen
    }
}

int main()
{
    int n;
    string refl;
    cin>>n;
    vector<vector<int>> board(n, vector<int>(n));
     //creates a n*n matrix or a 2d array.

        for(int i=0; i<n; i++)    //This loops on the rows.
    {
        for(int j=0; j<n; j++) //This loops on the columns
            cin>>board[i][j];
    }
    reflxx(n , board);

return 0;
}