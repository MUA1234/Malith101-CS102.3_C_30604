#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter Your Name\n");
    scanf("%s",&name);

    int birthyear,age;
    printf("Enter Your Birth Year\n");
    scanf("%d",&birthyear);
    age=2023-birthyear;

    printf("%s\n",name);
    printf("%d",age);

    return 0;
}
