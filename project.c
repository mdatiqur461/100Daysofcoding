// A program to make meritlist.
#include<stdio.h> // header file
typedef struct
{
int roll;
char name[20];
float cgpa;
}
student;

void main()//main function
{
student s[1000];
int i,roll,name,n;//local valu

no:
printf("Enter Student No: ");// built in function
scanf("%d" ,&n);// built in function

if (n<=0) // if condition
{
printf("\nEnter Student Number Min 1\n ");// built in function
  goto no;// goto Statment
}
for(i=0;i<n;i++)//for loop
{
    label:
        printf("Enter %d. Student roll number : ",i+1);// built in function
       scanf ("%d",&s[i].roll);// built in function

        if(s[i].roll<=0)
        {
            printf("Enter the roll Min 1\n ");// built in function
            goto label;// goto Statment
            }

        printf("Enter %d. Student name: ",i+1);// built in function
        scanf("%s",s[i].name);// built in function

       label1:
        printf("Enter %d. StudentEnter CGPA: ",i+1);// built in function
        scanf("%f",&s[i].cgpa);// built in function

         if(s[i].cgpa>4 || s[i].cgpa<0)
        {
            printf("Pless Enter the cgpa out of '4' almost posative\n ");// built in function
            goto label1;// goto Statment
            }
        printf("\n");// built in function
    }

student temp;
int j;
for(i=0;i<n-1;i++)
          {
            for(j=i+1;j<n;j++)
            {
                if(s[i].cgpa<s[j].cgpa)
                {
                  temp=s[i];
                  s[i]=s[j];
                  s[j]=temp;
                }
            }
          }
printf("Roll\tName\tCGPA\n");// built in function
i=0;
while(i<n) // while loop
{
  printf("%d\t%s\t%.2f\n", s[i].roll,s[i].name,s[i].cgpa);// built in function

  i++;
}

}
