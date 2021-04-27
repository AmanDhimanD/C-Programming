#include <stdio.h>
struct data
{
    int id;
    char  name;
    int age;
};
int main()
{
    struct data emp1, emp2;
    printf("Enter id, name, age:->>\n");
    scanf("%d %c %d", &emp1.id, &emp1.name, &emp1.age);
    printf("\nID is %d\tName is %c\tAge is %d.", emp1.id, emp1.name, emp1.age);
    scanf("%d %c %d", &emp2.id, &emp2.name, &emp2.age);
    printf("\nID is %d\tName is %c\tAge is %d.", emp2.id, emp2.name, emp2.age);
    return 0;
}