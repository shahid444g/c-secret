#include<stdio.h> 
 void main() 
 { 
    
     int i,j,firstrow,firstcolumn,secondrow,secondcolumn,p,sum; 
     printf("enter the rows and colums of first matrix\n"); 
     scanf("%d%d",&firstrow,&firstcolumn); 
     printf("enter the rows and colums of second matrix\n"); 
     scanf("%d%d",&secondrow,&secondcolumn); 
    int a[firstrow][firstcolumn],b[secondrow][secondcolumn],c[firstrow][secondcolumn]; 
     if(firstcolumn!=secondrow) 
     { 
         printf("matrix multiplication is not possible\n"); 
         printf("column of first matrix is not eqal to row of second matrix"); 
       exit(1);
     } 
     printf("\n"); 
     printf("enter the firstmatrix\n"); 
     for(i=0; i<firstrow; i++) 
     { 
         for(j=0; j<firstcolumn; j++) 
         { 
             scanf("%d",&a[i][j]); 
         } 
        
     } 
     printf("\n"); 
     printf("enter the second matrix\n"); 
     for(i=0; i<secondrow; i++) 
     { 
         for(j=0; j<secondcolumn; j++) 
         { 
             scanf("%d",&b[i][j]); 
           
         } 
       
     } 
     printf("\n"); 
     printf("the first matrix is\n"); 
     for(i=0; i<firstrow; i++) 
     { 
         for(j=0; j<firstcolumn; j++) 
         { 
             printf("%d\t",a[i][j]); 
         } 
         printf("\n"); 
     } 
     printf("\n"); 
     printf("the second matrix is\n"); 
     for(i=0; i<secondrow; i++) 
     { 
         for(j=0; j<secondcolumn; j++) 
         { 
             printf("%d\t",b[i][j]); 
         } 
         printf("\n"); 
     } 
     
     for(i=0; i<firstrow; i++) 
     { 
         for(j=0; j<secondcolumn; j++) 
         { 
             for(p=0; p<firstcolumn; p++) 
             { 
                 
         sum+=a[i][p]*b[p][j]; 
                   
             } 
           c[i][j]=sum; 
           sum=0;
         } 
         printf("\n"); 
     } 
     printf("\n"); 
     printf("the matrix multiplication is\n"); 
     for(i=0; i<firstrow; i++) 
     { 
         for(j=0; j<secondcolumn; j++) 
         { 
             printf("%d\t",c[i][j]); 
         } 
         printf("\n"); 
     } 
}
