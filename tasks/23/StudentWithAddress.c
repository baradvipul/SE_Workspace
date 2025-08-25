#include <stdio.h>

// Define address structure
struct address
{
    char city[50];
    int zip;
};

// Define student structure
struct Student
{
    char name[50];
    int age;
    struct address add;
};

int main()
{
    // Initialize student structure correctly
    struct Student s1 = {"John Doe", 20, {"New York", 10001}};

    // Display student information
    printf("\nName: %s", s1.name);
    printf("\nAge: %d", s1.age);
    printf("\nCity: %s", s1.add.city);
    printf("\nZIP: %d", s1.add.zip);

    return 0;
}
