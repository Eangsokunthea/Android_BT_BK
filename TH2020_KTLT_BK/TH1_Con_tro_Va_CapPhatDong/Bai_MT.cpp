#include <stdio.h>
#include <conio.h>
#include <malloc.h>
 
struct mt {
       int **a;
       int dong, cot;
       }  ;
 
void taomatran(mt &A)
{
      int i,j;
      A.a = new int* [A.dong];
      for ( i=0; i<A.dong; i++)
      A.a[i] = new int [A.cot];
}
 
void nhapmatran(mt &A, char ch)
{
      for( int i=0;i<A.dong;i++)
      {
           for( int j=0;j<A.cot;j++)
           {
                printf("\n %c[%d][%d] = ",ch,i,j);
                scanf("%d", &A.a[i][j]);  
           }
     }
}
 
void xuatmatran(mt &A)
{
     int i,j;
     for( i=0;i<A.dong;i++)
     {
          printf("\n");
          for( j=0;j<A.cot;j++)
          printf(" %d ",A.a[i][j]);  
     }
}  
 
void giaiphong(mt &A)
{
     for (int j=0; j<A.dong;j++)      
     delete []A.a[j];
     delete []A.a;
}
 
mt operator + ( const mt &A, const mt &B)
{
       mt C;
       taomatran(C);
       C.dong=A.dong;
       C.cot=A.cot;
       for(int i=0;i<A.dong;i++)
       {
               for(int j=0;j<A.cot;j++)
               C.a[i][j]=A.a[i][j]+B.a[i][j];
       }
        return C;
}
 
mt operator * ( const mt &A, const mt &B)
{
            mt D;
            taomatran(D);
            D.dong=A.dong;
            D.cot=A.cot;
            for(int i=0;i<A.dong;i++)
            {
                    for(int j=0;j<A.cot;j++)
                    {
                         D.a[i][j]=0;
                         for(int k=0;k<A.cot;k++)
                         D.a[i][j]+=A.a[i][k]*B.a[k][j];
                    }
            }
            return D;
}
 
 
int main()
{
      int x;
      mt A,B;
      printf("\n so dong la : ");
      scanf("%d", &A.dong);
      printf("\n so cot la : ");
      scanf("%d",&A.cot);
      B.dong=A.dong;
      B.cot=A.cot;
      taomatran(A);
      taomatran(B);
      nhapmatran(A,'A');
      nhapmatran(B,'B');  
      printf("\n chon 1 la cong ma tran, 2 la nhan ma tran : ");
      scanf("%d", &x);
      switch(x)
      {        
               case 1 :
               {
                    mt C;
                    printf("\n Ma tran tong la : ");
                    C=A+B;
                    xuatmatran(C);
                    giaiphong(C);
                    break;
               }
               case 2 :
               {
                    mt D;
                    printf("\n Ma tran tich la : ");            
                    D=A*B;
                    xuatmatran(D);
                    giaiphong(D);
                    break;
               }
             
         
            }
       giaiphong(A);
           giaiphong(B);
      getch();
      return 0;
}
