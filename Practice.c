#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{   
    struct Student s1 = {1, "Rushi", 95.0f};

    
    printf("Hello, Rushi\n");
    printf("ID: %d\n", s1.id);
    return 0;
} 