#include <string>
#include <vector>
using namespace std;
/*
 * Complete the 'twoArrays' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 *  3. INTEGER_ARRAY B
 */

string twoArrays(int k, vector<int> A, vector<int> B)
{
    int missing = 0; //what is the integer quantity that i need to compleet
    //the sum
    for (int i = 0; i < A.size(); i++)
    { //the missing values for the permutation to be possible is equal the
        //the amount needed "k" minus what i have "A[i]"
        missing += k - A[i];
    }
    int canComplete = 0; //this is the amount i can complete with the values
    //in the second array
    for (int i = 0; i < A.size(); i++)
    { //update a running sum of all values in the second array
        canComplete += B[i];
    }
    if (missing < 0) //if this number is negative, it means i can only complete one, but not the rest
        missing = -missing;
    if (missing <= canComplete) //if i can complete more than what im missing
        return "YES";
    return "NO";
}