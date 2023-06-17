// #include<stdio.h>
// int main()
// {
//     int n,a;
//     printf("enter the number :");
//     scanf("%d",&n);
    

//     while(n!=0)
//     {
//         a=n%10;
//         printf("%d",a);
//         n=n/10;
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);

    for (int i = 0; i < n ; i++)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    return 0;
}