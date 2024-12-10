#include<stdio.h>
int main()
{
printf("\t\t\t\t\t **BIO DATA**\n");
char name[30];
printf("----->ENTER YOUR NAME:");
scanf("%s",name);
char add[100];
printf("----->YOUR ADDRESS:");
scanf("%s",add);
char college[20];
printf("----->COLLEGE NAME:");
scanf("%s",college);
int hsc;
printf("----->YOUR HSC MARK:");
scanf("%d",&hsc);
float sslc;
printf("----->YOUR SSLC MARK:");
scanf("%d",&sslc);
long int number;
printf("----->YOUR NUMBER:");
scanf("%ld",&number);
char skills[60];
printf("----->YOUR SKILLS:");
scanf("%s",skills);
char certifications[60];
printf("----->YOUR CERTIFICATIONS:");
scanf("%s",certifications);
char projects[60];
printf("----->YOUR PROJECTS:");
scanf("%s",projects);
char hobbies[60];
printf("----->YOUR HOBBIES:");
scanf("%s",hobbies);
printf("\t\t\t\t\t **THANK YOU**");
return 0;
}
