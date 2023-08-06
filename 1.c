#include<stdio.h>
int main()
{
 int arr[10], i, num, pos;
    printf("Enter any 10 Numbers: ");
    for(i=0; i<10; i++)
    scanf("%d", &arr[i]);
    printf("Enter a number to Search: ");
    scanf("%d", &num);
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            pos=i;
            break;
        }
    }
    printf("\nFound at Index No.%d", pos);
    getch();
    return 0;
}
