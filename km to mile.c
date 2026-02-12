#include<stdio.h>
int main()
{
float mile, km;
int choice;
printf("choose conversion:\n");
printf("1.mile to kilometer\n");
printf("2. kilometer to mile\n");
printf("enter your choice (1 or 2)");
scanf ("%d", &choice);
if (choice==1)
{
    printf("enter distance in mile");
    scanf("%f", &mile);
    km= mile* 1.609;
    printf("distance in kilomers=%.2f\n", km);
}
else 
{
    printf("enter distance in kilometers");
    scanf("%f", &km);
    mile= km*0.621;
    printf("distance in mile=%.2f\n", mile);
}
return 0;
}
