#include <stdio.h>
int main()
{
    int a, b = 10, c;
    char c1;
    double g = 1.13;
    scanf("%c%d%d", &c1, &a, &c);
    printf("Your integers are: %d %d %d\n" , a , b , c);
    printf("Your double is: %.2lf\n", g);
    printf("Your character is: %c\n" , c1);
    return 0;
}