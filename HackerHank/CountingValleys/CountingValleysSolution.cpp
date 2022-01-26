#include <string>
using namespace std;
int countingValleys(int steps, string path)
{
    int intPath = 0;
    int walksOnValley = 0;
    bool inValey = 0;
    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'U')
            intPath++;
        else if (path[i] == 'D')
            intPath--;
        if (intPath < 0)
        {
            if (intPath == -1 && path[i + 1] == 'U')
                walksOnValley++;
        }
    }
    return walksOnValley;
}