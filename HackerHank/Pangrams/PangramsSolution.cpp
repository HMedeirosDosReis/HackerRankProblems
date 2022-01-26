#include <string>
#include <algorithm>
using namespace std;
string pangrams(string s)
{
    std::for_each(s.begin(), s.end(), [](char &i)
                  { i = ::tolower(i); });

    char letters[26];
    int frequency[26];
    bool containAll = 1;
    for (int i = 0; i < 26; i++)
        letters[i] = 'a' + i;
    if (s.size() < 26)
        return "not pangram";
    for (int i = 0; i < 26; i++)
        frequency[i] = 0;
    for (int i = 0; i < s.size(); i++)
        frequency[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        if (frequency[i] == 0)
            containAll = 0;
    if (containAll)
        return "pangram";
    return "not pangram";
}