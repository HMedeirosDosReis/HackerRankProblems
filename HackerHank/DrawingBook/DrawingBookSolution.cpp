#include <algorithm>
using namespace std;
int pageCount(int n, int p)
{
    int turnsNeeded = p / 2;
    int ifEven = 0;
    if (n % 2 == 0)
        ifEven = (n - p + 1) / 2;
    else
        ifEven = (n - p) / 2;

    return min(turnsNeeded, ifEven);
}
