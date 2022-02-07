/*
 * Complete the 'maximumPerimeterTriangle' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY sticks as parameter.
 */
#include <vector>
#include <algorithm>
using namespace std;
vector<int> maximumPerimeterTriangle(vector<int> sticks)
{
    sort(sticks.begin(), sticks.end());
    reverse(sticks.begin(), sticks.end());
    for (int i = 0; i < sticks.size() - 2; ++i)
    {
        if (sticks[i + 2] + sticks[i + 1] <= sticks[i])
            ;
        else
        {
            vector<int> ans;
            ans.push_back(sticks[i + 2]);
            ans.push_back(sticks[i + 1]);
            ans.push_back(sticks[i]);
            return ans;
        }
    }
    vector<int> ans;
    ans.push_back(-1);
    return ans;
}