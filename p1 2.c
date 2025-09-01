#include <stdio.h>
#include <string.h>
#include<ctype.h>

struct student{
    char n[100],f[100];
    int r,m1,m2,m3,class;

    
}s[10];
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(){
    
    printf("============================================== STUDENT INFORMATIONS ==============================================\n");
    printf("\n");
    int i;
    for ( i = 0 ; i < 4; i++ ) {
        printf("enter the student [%d] name = ",i+1);
        fgets(s[i].n, sizeof(s[i].n), stdin); 
        s[i].n[strcspn(s[i].n, "\n")] = '\0';
        fflush(stdin);
       
        printf("enter the stdudent [%d] father name = ",i+1);
        fgets(s[i].f, sizeof(s[i].f), stdin);
        s[i].f[strcspn(s[i].f, "\n")] = '\0';// for new line string 

        printf("enter the studet [%d] roll no = ", i+1);
        scanf("%d", &s[i].r);

        printf("enter the student [%d] class = ", i+1);
        scanf("%d",&s[i].class);

        printf("enter the marks in physics =");
        scanf("%d",&s[i].m1);

        printf("enter the marks in chemistry = ");
        scanf("%d",&s[i].m2);

        printf("enter the marks in maths = ");
        scanf("%d", &s[i].m3);
        clearInputBuffer(); 
        printf("\n");
    }
    printf("\n");
    printf("=====================================>>>>>> INFORMATION  <<<<<<<<<==============================================\n");
    printf("\n");

    for ( i = 0; i < 2; i++)
    {
        printf(" NAME = %s\n", s[i].n);
        printf(" FATHER NAME = %s\n", s[i].f);
        printf(" ROLL NO.= %d\n",s[i].r);
        printf("CLASS = %d\n", s[i].class);
        printf("MARKS IN PHYSICS = %d\n ", s[i].m1);
        printf("MARKS IN MATHS = %d\n",s[i].m2);
        printf("MARKS IN CHEMISTRY = %d\n", s[i].m3);
        int t = s[i].m1 + s[i].m2 + s[i].m3;
        printf(" [%s] total is = %d\n",s[i].n,t);
        int p = (t*100)/300;
        printf(" [%s] percenatge is = %d\n",s[i].n , p);
        printf("\n");

    }
printf("\n");
printf("====================================================PASSING MARKS===================================================\n");
printf("\n");
    
       for ( i = 0; i < 4; i++)
       {
        
    if (s[i].m1 < 33)
    {
        printf(" YO ARE FAILED IN  PHYSICS\n ");

        printf("NAME = %s\n", s[i].n);

        printf("CLASS = %d\n",s[i].class);

        printf("ROLL NO. = %d\n", s[i].r);

        printf("MARKS IN PHYSICS = %d\n", s[i].m1);
    }
    printf("\n");

      if(s[i].m2 < 33)
       {
         printf(" YO ARE FAILED IN  MATHS \n ");
       
        printf("NAME = %s\n", s[i].n);

        printf("CLASS = %d\n",s[i].class);

        printf("ROLL NO. = %d\n", s[i].r);

        printf("MARKS IN PHYSICS = %d\n", s[i].m2);
       }
    printf("\n");


    if (s[i].m3 < 33)
    {
        printf(" YO ARE FAILED IN  CHEMISTRY\n ");
    
        printf("NAME = %s\n", s[i].n);

        printf("CLASS = %d\n",s[i].class);

        printf("ROLL NO. = %d\n", s[i].r);

        printf("MARKS IN PHYSICS = %d\n", s[i].m3);
    }
}
printf("\n");
printf("=========================>>>>>>>           GRADE        <<<<<<<===================================================\n");
for ( i = 0; i < 4; i++)
{
    int t = s[i].m1 + s[i].m2 + s[i].m3;
    int p = (t * 100) / 300;

    printf(" NAME = %s\n", s[i].n);
    printf(" FATHER NAME = %s\n", s[i].f);
    printf(" ROLL NO.= %d\n",s[i].r);
    printf(" CLASS = %d\n", s[i].class);
    printf(" TOTAL = %d\n", t);
    printf(" PERCENTAGE = %d\n", p);

    if (p >= 90)
        printf(" GRADE = A\n");
    else if (p >= 80)
        printf(" GRADE = B\n");
    else if (p >= 70)
        printf(" GRADE = C\n");
    else if (p >= 60)
        printf(" GRADE = D\n");
    else if (p >= 50)
        printf(" GRADE = E\n");
    else if (p >= 33)
        printf(" GRADE = PASS CLASS\n");
    else
        printf(" GRADE = FAIL\n");

    printf("\n");
}
 printf("=================================================================================================================\n");
    printf("                               PROGRAM EXECUTED SUCCESSFULLY\n");
    printf("=================================================================================================================\n");
return 0;
}
