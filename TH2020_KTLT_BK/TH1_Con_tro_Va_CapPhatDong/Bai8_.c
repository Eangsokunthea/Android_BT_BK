/*#include<stdio.h>
#include<conio.h>
main()
{ 
    int a[50][50];
    int i,j,m,n;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[50][50];
    int i,j,m,n;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
//hien thi ma tran vua nhap duoi dang bang
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
// tinh tong pt tren hang chan cua mang
    float s=0;
    for(i=0;i<n;i=i+2)
    {
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("\nTong pt tren hang chan cua mang la: %5f",s);
/* tim max tren cot 1 cua mang
    int max;
    max=a[0][0];
    for(i=1;i<n;i++)
    {
        if(a[i][0]>max)
        {
            max=a[i][0];
        }
    }
    printf("\nGia tri max tren cot 1 cua mang la %5d",max);*/
    getch();
}
/*#include <stdio.h>
#include <stdlib.h>

void allocate_mem(int **mt, int m, int n){
    //#Allocate memory for the matrix
    mt = (int **)malloc(m * sizeof(int *));
    for (int i=0; i<m; i< i++)
        mt[i] = (int *)malloc(n * sizeof(int));
}


void input(int **mt, int m, int n){
    //#Input elements of the matrix
    // int count = 0;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
        //  mt[i][j] = ++count; 
            scanf("%d", *(*(mt+i)+j));
}

void output(int **mt, int m, int n){
    //# Print all elements of the matrix
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j)
            printf("%d ", *(*(mt+i)+j));
        printf("\n");
    }
}

int process(int **mt, int m, int n){
    int tong = 0;
      for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
         if(a[i][j]%2==0)
            tong += a[i][j];  
    return tong;
}

void free_mem(int **mt, int m, int n){
    //# Free memory
    
    /*****************
    # YOUR CODE HERE #
    *****************
}

int main(){
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
     printf("The sum of all even elements is %d", process(mt, m, n));
     free_mem(mt, m, n);
    return 0;
}
*/
 
