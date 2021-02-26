#include<stdio.h>

struct employee
{
   int age,phone_number,salary;
   char name[30];
}emp[100];
void main()
{
   int i,n;
   printf("Enter the no.of.employees :\n");
   scanf("%d",&n);
   printf("Enter employee information as Name , Age , Phone_Number , Salary\n");
   for(i=0;i<n;i++)
   {
      scanf("%s %d %d %d", &emp[i].name,&emp[i].age,&emp[i].phone_number,&emp[i].salary);
   }
   printf("\nName\t\t\tAge\t\t\tPhone_Number\t\t\tSalary\n");
   for(i=0;i<n;i++)
   {
      printf("%s\t\t\t%d\t\t\t%d\t\t\t\t%d\n",emp[i].name,emp[i].age,emp[i].phone_number,emp[i].salary);
   }
}
