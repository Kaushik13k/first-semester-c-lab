/*stucture of student records*/
#include<stdio.h>

struct Student
{
	int rollno;
	char name[30];
	float marks;
};


main()
{
	struct Student S[100];
	int n,i;
	float sum, avg;
	
	printf("Enter the number of students:");
	scanf("%d", &n);
	
	printf("Enter the details:\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter student %d:\n", i+1);
		printf("Enter name: ");
		scanf("%s", &S[i].name);
		printf("Enter rollno: ");
		scanf("%d", &S[i].rollno);
		printf("Enter marks: ");
		scanf("%f", &S[i].marks);
	}
	
	for(i=0;i<n;i++)
	{
		sum += S[i].marks;
	}
	
	avg = sum/n;
	
	printf("Average = %f\n\n ", avg);
	printf("Details of students who scored above average:\n");
	printf("Rollno\tName\tMarks\n");
	for(i=0;i<n;i++)
	{
		if(S[i].marks>avg)
		{
			printf("%d\t%s\t%f \n", S[i].rollno, S[i].name, S[i].marks);
		}
	}
	
	printf("Details of students who scored below or equal to average:\n");
	printf("Rollno\tName\tMarks\n");
	for(i=0;i<n;i++)
	{
		if(S[i].marks<=avg)
		{
			printf("%d\t%s\t%f \n", S[i].rollno, S[i].name, S[i].marks);
		}
	}
}