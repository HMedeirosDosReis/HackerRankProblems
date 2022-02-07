/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
#include <vector>
using namespace std;
int migratoryBirds(vector<int> arr)
{
    vector<int> frequency;
    for (int i = 0; i < 6; i++)
        frequency.push_back(0);
    for (int i = 0; i < arr.size(); i++)
        frequency[arr[i]]++;
    int max = 0;
    int index = 0;
    for (int i = 0; i < frequency.size(); i++)
        if (frequency[i] > max)
        {
            max = frequency[i];
            index = i;
        }
    return index;
}