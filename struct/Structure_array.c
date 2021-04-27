#include<stdio.h>
struct books
{
    char name[30];
    float price;
    int pages;
};
int main(){
    struct books b1={"Maths",1000.0,600};
    struct books b2={"Chemistry",599.0,1000};
    struct books b3={"physics",999.0,590};

    printf("Data -->> %s %f %d\n",b1.name,b1.price,b1.pages);
    printf("Data -->> %s %f %d\n",b2.name,b2.price,b2.pages);
    printf("Data -->> %s %f %d\n",b3.name,b3.price,b3.pages);
      
    return 0;
}