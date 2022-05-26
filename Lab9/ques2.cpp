#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct courseInfo
{
    int courseId;
    char courseName[101];
};

struct record
{
    int studentId;
    int courseId;
    int marks;
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 0;
    cin >> t;

    while (t--)
    {
        int n = 1;
        cin >> n;

        struct courseInfo Courses[n];

        for (int i = 0; i < n; i++)
        {
            cin >> Courses[i].courseId >> Courses[i].courseName;
        }

        int m = 1;
        cin >> m;

        struct record Marks[m];

        for (int i = 0; i < m; i++)
        {
            cin >> Marks[i].studentId >> Marks[i].courseId >> Marks[i].marks;
        }

        char reqCourseName[101];
        cin >> reqCourseName;

        int totalParticipants = 0;

        int reqCourseId = 0;

        for (int i = 0; i < n; i++)
        {
            if (strcmp(reqCourseName, Courses[i].courseName) == 0)
            {
                reqCourseId = Courses[i].courseId;
                break;
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (reqCourseId == Marks[i].courseId)
            {
                totalParticipants++;
            }
        }

        cout << totalParticipants << '\n';
    }
    return 0;
}
