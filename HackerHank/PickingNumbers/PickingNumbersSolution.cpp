#include <vector>
using namespace std;
int pickingNumbers(vector<int> a) 
{
    vector<int> freq;
    for(int i=0;i<101;i++)
        freq.push_back(0);
    for(int i=0;i<a.size();i++)
        freq[a[i]]++;
    int max=0;
    //sort(freq.begin(),freq.end());
    for (int i = 1; i <= 100; i++) 
    {
            int count = freq[i] + freq[i - 1];
            if (count > max) {
                max = count;
            }
    }
    return max;
}