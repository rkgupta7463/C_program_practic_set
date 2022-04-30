// #include<stdio.h>
// #include<stdlib.h>

// void main()
// {
//    FILE *fp;
//    char ch="RD";
//   //  char str[20];

//    fp=fopen("rk.txt","r");
//   //  if(fp==NULL){
//   //   printf("File not exits");
//   //   return;
//   //  }
//   // while (! feof(fp))
//   while (ch=fgetc(fp)!=EOF)
//   {
//       // fgets(str,15,fp);
//       printf("%c",ch);
//       // fgetc("RD");

//   }
//   fclose(fp);
//   getch();

// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>

// void main()
// {
//   FILE *f;
//   char s;
//   f=fopen("NewRD.txt ","r");
//   while ((s=fgetc(f)) != EOF)
//   {
//     printf("%c",s);
//     /* code */
//   }
//   fclose(f);
//   getch();

// }

// ####reverse of the given number

// #include<stdio.h>

// int main()
// {
//   int rev=0,rem,n;
//   printf("Enter the number: ");
//   scanf("%d",&n);
//   while (n!=0)
//   {
//     rem=n%10;
//     rev=rev*10+rem;
//     n/=10;
//   }
//   printf("Reverse number is %d",rev);
// }

// ####file handling practices

// #include<stdio.h>
// // #include<stdlib.h>

// int main()
// {
//     FILE *fp=NULL;
//     fp = fopen("NewRD.txt","r");
//     char c;
//     while ((c=fgetc(fp))!=EOF)
//     {
//         printf("%c",c);
//     }
//     return 0;
// }

// ####file gets
// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     fp = fopen("NewRD.txt","r");
//     char c[15];
//     fgets(c, 12, fp);
//     printf("The string:  %s\n",c);
//     return 0;
// }

// ###file puts
// #include<stdio.h>

// int main()
// {
//     FILE *fp;
//     // char c;
//     fp=fopen("Rishu_guta.txt","w");
//     fputc('R',fp);
//     fputc('I',fp);
//     fputc('S',fp);
//     fputc('H',fp);
//     fputc('U',fp);
//     fputs("\nIt's my single character \nI am Rishu kumar gupta\nAnd i am from bihar ",fp);
//     return 0;
//     fclose(fp);
// }

// ###different mode of c programs
// #include<stdio.h>

// int main(){
//     FILE *fp;
//     char c[50];
//     int age[3];
//     char city[50];
//     char state[40];
//     fp= fopen("Rishu.txt","w+");//if is excute when i use mode otherwise not
//     // fputs("\nWelcome in my Fle\n Welcome to Bihar\n\nI am coming soon in bihar",fp);
//     fputs("Welcome to new file",fp);
//     printf("Enter the your name: ");
//     scanf("%s",c);
//     fprintf(fp,"\nName: %s\n",c);
//     printf("Enter the your Age: ");
//     scanf("%s",age);
//     fprintf(fp,"Age: %s\n",age);
//     printf("Enter the your city: ");
//     scanf("%s",city);
//     fprintf(fp,"City: %s\n",city);
//     printf("Enter the your State: ");
//     scanf("%s",state);
//     fprintf(fp,"State: %s\n",state);
//     fprintf(fp,"The size of file : %ld bytes",ftell(fp));
//     fclose(fp);
//     return 0;
// }

// ###here testing the differents function in file handling

// #include<stdio.h>

// int main()
// {
//     FILE *fp;
//     int i;
//     fp=fopen("Rishu_t.txt","r");
//     for (i = 0; i <= 20; i++)
//     {
//         printf("%c: %d\n",getc(fp),ftell(fp));
//         fseek(fp,ftell(fp),0);
//         if (i == 8)
//         {
//             rewind(fp);
//             /* code */
//         }

//         /* code */
//     }
//     return 0;

// }

// ####decsion program

// #include<stdio.h>

// struct Fileop
// {
//     int id;
//     char name[50];
//     char branch[20];
//     float math,scien,eng;
// };
// void main(){
//     int sum;

//     struct Fileop f;
//     printf("Enter the number information of student\n");
//     printf("--------------------------------\n");
//     printf("Enter ID number: ");
//     scanf("%d",&f.id);
//     printf("--------------------------------\n");
//     printf("Enter Name: ");
//     scanf("%s",f.name);
//     printf("--------------------------------\n");
//     printf("Enter Branch: ");
//     scanf("%s",f.branch);
//     printf("--------------------------------\n");
//     printf("Enter the subject\n");
//     printf("Enter Math: ");
//     scanf("%f",&f.math);
//     printf("Enter science: ");
//     scanf("%f",&f.scien);
//     printf("Enter English: ");
//     scanf("%f",&f.eng);
//     printf("--------------------------------\n");

//     printf("\nID NO:%d\nName:%s\nBranch:%s\nSubject:\t Math:%.2f\tScience:%.2f\tEnglish:%.2f\n",f.id,f.name,f.branch,f.math,f.scien,f.eng);
//     printf("----------------------------------\n");

// }

// ###sum of individual number

// #include<stdio.h>

// int main()
// {
//     int s=0,r,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while (n>0)
//     {
//         r=n%10;
//         s=s+r;
//         n/=10;
//         /* code */
//     }
//     printf("Sum of individual number is %d",s);
//     return 0;
// }

//###Some file opeation question
// #include <stdio.h>

// int main()
// {
//     FILE *fp;

//     int EMP_ID;
//     char EMP_name[50];
//     char EMP_DES[20];
//     float Slr;

//     fp = fopen("Empty.txt","W+");
//    if (fp==NULL)
//     {
//         printf("This file is not exits\n");
//         /* code */
//         return 1;
//     }
//     printf("Enter the EMP ID: ");
//     scanf("%d",&EMP_ID);
//     fprintf(fp,"EMP ID: %d",EMP_ID);
//     printf("Enter the EMP name: ");
//     scanf("%s",EMP_name);
//     fprintf(fp,"EMP Name: %s",EMP_name);

//     printf("Enter the EMP DESIG: ");
//     scanf("%s",EMP_DES);
//     fprintf(fp,"EMP DESIG: %s",EMP_DES);

//     printf("Enter the EMP SLR: ");
//     scanf("%f",&Slr);
//     fprintf(fp,"EMP Salary: %.2f", Slr);

//     return 0;
    
// }

// #include<stdio.h>

// int main()
// {
//   FILE *fp;
//     int EMP_ID;
//     char EMP_name[50];
//     char EMP_DES[20];
//     float Slr;

//   fp = fopen("Empty.txt","w+");
//   if (fp==NULL)
//   {
//       printf("File is not exits");
//       return 1;
//   }
//   printf("Enter the id: ");
//   scanf("%d",&EMP_ID);
//   fprintf(fp,"ID: %d\n",EMP_ID);
//   printf("Enter the Name: ");
//   scanf("%s",EMP_name);
//   fprintf(fp,"Name: %s\n",EMP_name);
//   printf("Enter the EMP DESIG: ");
//   scanf("%s",EMP_DES);
//   fprintf(fp,"Name: %s\n",EMP_DES);

//   printf("Enter the salary: ");
//   scanf("%f",&Slr);
//   fprintf(fp,"ID: %.2f\n",Slr);

//   return 0;
// }

// ###pascal trigal
// #include<stdio.h>

// int main()
// {
//     int i,j,n,k=0;
//     printf("Enter the rows number: ");
//     scanf("%d",&n);

//     for (i = 1; i <= n; i++,k=0)
//     {
//         for (j = 1; j <= n-i; j++,k=0)
//         {
//             printf(" ");
//         }
//         while (k!=2*i-1)
//         {
//             printf("* ");
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
    
// }

// #include<stdio.h>

// int main(){
//     int a['m']['n'],b['p']['q'],c['i']['j'], m,n,p,q,i,j,k;

//     printf("Enter the row and columns NO of first martrix: ");
//     scanf("%d%d",&m,&n);

//     printf("Enter the row and columns NO of second martrix: ");
//     scanf("%d%d",&p,&q);

//     if (m!=q)
//     {
//         printf("You can't multiple");
//         /* code */
//     }

//     else
//     printf("Input of 1st martix: \n");
//     for (i=1; i <= m; i++)
//     for(j=1; j <= n; j++)
//     scanf("%d",&a[i][j]);
//     printf("Input of 2nd martix: \n");
//     for (i=1; i <= p; i++)
//     for(j=1; j <= q; j++)
//     scanf("%d",&b[i][j]);

//     for (i=1; i <= m; i++){
//     for(j=1; j <= n; j++){
//     c[i][j]=0;

//     for(k=1; k<= n; k++)
//     c[i][j]=c[i][j]+a[i][k]*b[k][j];
//     printf("%d",c[i][j]);
//     }
//     printf("\n");
//     }   
// }

// ####read and display
// #include<stdio.h>

// int main()
// {
//     FILE *fp;
//     char c;
//     char name[50];
//     long int lenght;
//     fp = fopen("Rishu_g.txt","r");

//     while (1)
//     {
//         c=fgetc(fp);
//         if(c==EOF)
//         break;
//         printf("%c",c);        /* code */
//         lenght = ftell(fp);
//     }
//         printf("Size of file in bytes: %d\n",lenght);
    
//     fclose(fp);
//     return 0;
// }

// ####sum individual digits

// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int s=0,r,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     while (n>10)
//     {
//         r=n%10;
//         s=s+r;
//         n/=10;
//         /* code */
//     }
//     printf("Sum of individiual digits: %d",s);
//     return 0;
    
// }

#include<stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int lenght;
    char prof[50];
    char branch[50];
    int id;

    fp=fopen("Empty1.txt","w+");
    if (fp==NULL)
    {
        printf("File is not exits\n");
        return 1;
    }
    

    fputs("Welcome!!!\n",fp);

    printf("Enter the ID: ");
    scanf("%d",&id);

    printf("Enter the name: ");
    scanf("%s",name);

    printf("Enter the Profession: ");
    scanf("%s",prof);

    printf("Enter the Branch: ");
    scanf("%s",branch);

    fprintf(fp,"\nID: %d\t Name: %s\t Profession: %s\t Branch: %s\n",id,name,prof,branch);
    lenght=ftell(fp);
    
    // while (name==fgetc(fp) !=EOF)
    // {
    //     printf("%s",name);
    //     /* code */
    // }
    fp=fopen("Empty1.txt","r");
    fseek(fp,0,SEEK_END);

    // fprintf(fp,"\nSize of file: %d\n",lenght);
    
    fclose(fp);
    printf("Size of file: %d\n",lenght);
    fprintf(fp,"Size of file: %d\n",lenght);
    // getch();
}