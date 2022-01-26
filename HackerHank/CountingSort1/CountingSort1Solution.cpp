#include <vector>
using namespace std;

vector<int> countingSort(vector<int> arr)
{
    vector<int> result(100);
    for (int i = 0; i < result.size(); i++)
        result[i] = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        result[arr[i]]++;
    }
    return result;
}
