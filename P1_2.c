#include <stdio.h>
struct student
{
    int marks[5];
    float total;
    float per;
};

int main()
{
    int n,i,j,temp;
    printf("Enter The Number Of Student : ");
    scanf("%d",&n);

    struct student s[n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].marks[j]);
            temp += s[i].marks[j];
        }
        s[i].total=temp;
        s[i].per = s[i].total/5;
    }
    printf("\nSTUDENT DETAILS");
    for(i=0;i<n;i++)
    {
        printf("\nSTUDENT %d\n",i+1);
        for(j=0;j<5;j++)
        {
            printf("Subject %d = %d\n",j+1,s[i].marks[j]);
        }
        printf("Total = %f\n",s[i].total);
        printf("Percentage = %f\n",s[i].per);
    }
    return 0;
}
