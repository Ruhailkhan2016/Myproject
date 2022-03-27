#include <stdio.h>
#include <string.h>

union student
{
    int roll_no;
    char name[20];
    char course[30];
    char branch[50];
    float percentage;
};

int main()
{
    union student record;

    for (int i = 0; i < 2; i++)
    {

    printf("\n\nEnter Student Details :\n");

    printf("\n====================================\n");

    record.roll_no = 9079;
    printf("Student Roll No. is   : %d\n", record.roll_no);

    strcpy(record.name, "Ruhail Khan");
    printf("Student name is       : %s\n", record.name);

    strcpy(record.course, "B.Tech");
    printf("Course is             : %s\n", record.course);

    strcpy(record.branch, "CSE");
    printf("Branch is             : %s\n", record.branch);

    record.percentage = 72.50;
    printf("Percentage is         : %f\n", record.percentage);

    printf("====================================\n");

    }
}