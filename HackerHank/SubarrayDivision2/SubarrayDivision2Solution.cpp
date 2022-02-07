#include <vector>
using namespace std;

/*
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m)
{
    int ways = 0;                      //holds what the answer will be
    for (int i = 0; i < s.size(); i++) //loop thorugh the whole array
    {
        int integersInSquare = 0;       //what is the amount is those squares
        for (int j = i; j < i + m; j++) //get the "piece" of the array that matters
            integersInSquare += s[j];   //update a running sum
        if (integersInSquare == d)      //if it is the same as the day of the birthday
            ways++;                     //add one to the solution
    }
    return ways;
}