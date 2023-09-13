#include <iostream>

using namespace std;

int findMaxElement(int array[][10], int rows, int columns)
{
    int maxElement = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (array[i][j] > maxElement)
            {
                maxElement = array[i][j];
            }
        }
    }

    return maxElement;
}

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    int array[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> array[i][j];
        }
    }

    int maxElement = findMaxElement(array, rows, columns);

    cout << maxElement << endl;

    return 0;
}
