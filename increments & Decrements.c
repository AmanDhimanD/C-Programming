#include <stdio.h>
int main(int argc, char const *argv[])
 {
    int x, y, z;
    
    z = 3;
    //post increments 
    x = z--;  /* assign 3 to x, then decrement z to 2 */
    printf("x=%d \n", x);
    printf("z=%d \n", z);
    
    y = 3;
    //pre increments
    x = ++y;  /* increment y to 4, then assign 4 to x */
    
    printf("x=%d \n", x);
    
    printf("y=%d \n", y);

    return 0;
}