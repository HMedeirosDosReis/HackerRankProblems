#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= 38 && grades[i] % 5 >= 3)
        {
            while (grades[i] % 5 != 0)
            {
                grades[i]++;
            }
        }
    }
    return grades;
}