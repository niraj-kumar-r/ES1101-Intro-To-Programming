#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
using namespace std;

struct courseInfo
{
    int courseId;
    char courseName[101];
};

struct studentInfo
{
    int studentId;
    char studentName[101];
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
    int t = 1;
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

        struct studentInfo student[m];

        for (int i = 0; i < m; i++)
        {
            cin >> student[i].studentId >> student[i].studentName;
        }

        int l = 1;
        cin >> l;

        struct record Marks[l];

        for (int i = 0; i < l; i++)
        {
            cin >> Marks[i].studentId >> Marks[i].courseId >> Marks[i].marks;
        }

        char reqCourseName[101];
        cin >> reqCourseName;

        int reqCourseId = 0;

        for (int i = 0; i < n; i++)
        {
            if (strcmp(reqCourseName, Courses[i].courseName) == 0)
            {
                reqCourseId = Courses[i].courseId;
                break;
            }
        }

        int maxMarks = INT_MIN, maxMarksFreq = 0;

        for (int i = 0; i < l; i++)
        {
            if (reqCourseId == Marks[i].courseId)
            {
                if (Marks[i].marks > maxMarks)
                {
                    maxMarks = Marks[i].marks;
                    maxMarksFreq = 1;
                }

                else if (Marks[i].marks == maxMarks)
                {
                    maxMarksFreq++;
                }
            }
        }

        int tomprList[maxMarksFreq];
        int tomprListIndex = 0;

        for (int i = 0; i < l; i++)
        {
            if (reqCourseId == Marks[i].courseId)
            {
                if (Marks[i].marks == maxMarks)
                {
                    tomprList[tomprListIndex] = Marks[i].studentId;
                }
            }
        }

        for (int i = 0; i < maxMarksFreq; i++)
        {
            int reqStudentId = tomprList[i];

            for (int j = 0; j < m; j++)
            {
                if (student[j].studentId == reqStudentId)
                {
                    cout << student[j].studentName << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}
