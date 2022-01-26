#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int sumDiagonal1 = 0;
    int sumDiagonal2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sumDiagonal1 += arr[i][i];
        sumDiagonal2 += arr[i][arr.size() - i - 1];
    }
    int difference = sumDiagonal1 - sumDiagonal2;
    if (difference < 0)
        difference = -difference;
    return difference;
}