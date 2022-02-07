/**********PREVIOUS CODE************
string strings_xor(string s, string t) {

    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] = t[i])
            res = '0';
        else
            res = '1';
    }

    return res;
}
*/
#include <string>
using namespace std;
string strings_xor(string s, string t)
{

    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i]) //added a equal sign
            res += '0';   //should be a runnning string, not changing its whole value
        else
            res += '1'; //should be a runnning string, not changing its whole value
    }

    return res;
}