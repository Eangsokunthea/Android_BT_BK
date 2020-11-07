#include <stdio.h>
#include <stdlib.h>

void NhapMaTran(int **a, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}
void XuatMaTran(int **a, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
void Tong(int **a, int **b, int **c, int n){

   int i,j;

   for(i = 0; i<n ; i++)

   for(j = 0; j<n ; j++)

      c[i][j] = a[i][j]+b[i][j];

}
void Tich(int **a, int **b, int **c, int n)

{

    int i,j,k;

   for(i = 0; i<n ; i++)

   for(k = 0; k<n ; k++)

   {

      c[i][k] = 0;

      for(j = 0; j<n ; j++)

         c[i][k] = c[i][k] + a[i][j]*b[j][k];

   }

}

int main()
{
    int **a = NULL, n;
    int **b = NULL;
    int **c = NULL;
    int i;
    printf("Nhap vao cap n = ");
    scanf("%d", &n);
    // C?p phát m?ng các con tr? c?p 1
    a = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        // C?p phát cho t?ng con tr? c?p 1
        a[i] = (int *)malloc(n * sizeof(int));
    }
    
	printf("Nhap vao ma tran A\n");
    NhapMaTran(a, n);
    
    b = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        // C?p phát cho t?ng con tr? c?p 1
        b[i] = (int *)malloc(n * sizeof(int));
    }
    
    printf("Nhap vao ma tran B\n");
	NhapMaTran(b,n);
	
	printf("Ma tran A vua nhap\n");
    XuatMaTran(a, n);
    
    printf("Ma tran B vua nhap\n");
    XuatMaTran(b, n);
    
    c = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        // C?p phát cho t?ng con tr? c?p 1
        c[i] = (int *)malloc(n * sizeof(int));
    }
    
    printf("\nMa tran C=A+B\n");
	Tong(a,b,c,n);
	XuatMaTran(c,n);

   printf("\nMa tran C=A*B\n");
   Tich(a,b,c,n);
   XuatMaTran(c,n);
 
    // gi?i phóng t?ng hàng
    for (i = 0; i < n; i++)
    {
        free(a[i]);
        free(b[i]);
        free(c[i]);
    }
    // giai phong con tr? qu?n lý các dòng
    free(a);
    free(b);
    free(c);
    return 0;
}
