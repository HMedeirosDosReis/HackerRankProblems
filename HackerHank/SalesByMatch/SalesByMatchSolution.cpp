/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */
#include <algorithm>
#include <vector>
using namespace std;
int sockMerchant(int n, vector<int> ar)
{
    vector<int> values;
    for (int i = 0; i < ar.size(); i++)
    {
        if (find(values.begin(), values.end(), ar[i]) != values.end())
            ;
        else
            values.push_back(ar[i]);
    }
    vector<int> indexes = values;
    for (int i = 0; i < indexes.size(); i++)
        indexes[i] = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = 0; j < values.size(); j++)
            if (ar[i] == values[j])
                indexes[j]++;
    }
    int pairs = 0;
    for (int i = 0; i < indexes.size(); i++)
        pairs += indexes[i] / 2;

    return pairs;
}