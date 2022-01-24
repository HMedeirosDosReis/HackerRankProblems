#include <vector>
using namespace std;

int lonelyinteger(vector<int> a)
{
    int result = 0;

    for (int i = 0; i < a.size(); i++)
    {
        result = result ^ a[i];
    }

    return result;
}