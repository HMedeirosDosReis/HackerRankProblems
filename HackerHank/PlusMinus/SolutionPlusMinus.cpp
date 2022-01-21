#include <vector>
#include <iostream>

using namespace std;

void plusMinus(vector<int> arr)
{
    float neg = 0, zeros = 0, pos = 0, total = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;

        else
            zeros++;
        total++;
    }
    cout << pos / total << endl;
    cout << neg / total << endl;
    cout << zeros / total << endl;
}