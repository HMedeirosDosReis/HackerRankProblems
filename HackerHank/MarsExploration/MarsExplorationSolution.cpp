#include <string>
using namespace std;

int marsExploration(string s)
{
    int lettersChanged;
    for (int i = 0; i < s.size(); i += 3)
    {
        if ('S' != s[i])
            lettersChanged++;
        if ('O' != s[i + 1])
            lettersChanged++;
        if ('S' != s[i + 2])
            lettersChanged++;
    }
    return lettersChanged;
}