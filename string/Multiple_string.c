#include <stdio.h>
#include <string.h>
int main()
{
    char name_emloypee[6][20] = {"mohan", "sohan", "ram", "Sita", "Geeta"};
    int i;
    char yourname[20];
    printf("Enter your name:->> ");
    scanf("%s", &yourname);
    for (i = 0; i <= 5; i++)             
    {
        // printf("%s\n",yourname);
        if (strcmp(&name_emloypee[i][0],yourname)==0)
        {   
            strupr(name_emloypee[i]);
            printf("Welcome Mr. %s .",name_emloypee);
            return 0;
        }
    }
            printf("Sorry,employee not found");

    return 0;
}