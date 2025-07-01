#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int Roll;
    char name[20];
    char dep[20];
    char course[20];
    int year;
} Student;
void check(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {

            printf("Departments are different.\n");
            return; // Exit the function after printing
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Departments are the same.\n");
    }
    else
    {

        printf("Departments are different.\n");
    }
}

int main()
{
    Student a, b;

    a.Roll = 6;
    strcpy(a.name, "Shubham");
    strcpy(a.course, "BCA");
    strcpy(a.dep, "IT");
    a.year = 2024;

    b.Roll = 50;
    strcpy(b.name, "Rohan");
    strcpy(b.course, "BCA");
    strcpy(b.dep, "IT");
    b.year = 2024;

    // Compare the departments of student a and student b
    check(a.dep, b.dep);

    return 0;
}
