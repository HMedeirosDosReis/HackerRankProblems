/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */
#include <vector>
using namespace std;
int sockMerchant(int n, vector<int> ar)
{
    vector<int> freq;
    for (int i = 0; i < 101; i++)
        freq.push_back(0);
    for (int i = 0; i < n; i++)
        freq[ar[i]]++;

    int ans = 0;
    for (int i = 0; i < 101; i++)
        ans += freq[i] / 2;
    return ans;
}