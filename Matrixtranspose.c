#include<stdio.h> 
 void main() 
 { 
    
     int i,j,firstrow,firstcolumn; 
     printf("enter the rows and colums of matrix\n"); 
     scanf("%d%d",&firstrow,&firstcolumn); 
     
    int a[firstrow][firstcolumn],c[firstrow][firstcolumn]; 
    
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
     
     
     printf("the matrix is\n"); 
     for(i=0; i<firstrow; i++) 
     { 
         for(j=0; j<firstcolumn; j++) 
         { 
printf("%d\t",a[i][j]); 
         } 
         printf("\n"); 
     } 
     printf("\n"); 
   printf("the matrix transpose is\n"); 
     for(i=0; i<firstrow; i++) 
     { 
         for(j=0; j<firstcolumn; j++) 
         { 
             
          

             printf("%d \t",a[j][i]); 

         } 
         printf("\n"); 
     } 
}
