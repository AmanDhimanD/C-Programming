#include <stdio.h>
int main()
{
    struct ref
    {
        char *name;
        int age;
        struct ref *link;

    };
    struct ref s1, s2, s3;
    struct ref *start = &s1;
    s1.name = "Aman";
    s1.age = 12;
    s1.link = &s2;
    s2.name = "Dhiman";
    s2.age = 32;
    s2.link = &s3;
    s3.name = "Rayne";
    s3.age = 23;
    s3.link = NULL;
    while (start != NULL)
    {
        printf("\nName = %s", start->name);
        printf("\nAge = %d", start->age);
        start = start->link;
    }

    return 0;
}