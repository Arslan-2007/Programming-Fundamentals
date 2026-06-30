#include <iostream>
using namespace std;
bool checking(int matrix[3][3]){
    bool check=true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    check = false;
                    
                }
            }
            else
            {
                
                  if (matrix[i][j] != 0)
                    {
                        check = false;
                        
                    }
                
            }
        }
    }
    return check;
}
int main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position[" << i << "][" << j << "]:";
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    bool check=checking(matrix);
    if (check)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else if (!check)
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
}