double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;
    for (int i = 0; i < size; i++) {
        printf("%d ", *(a+i));
        if (max < (a+i)) max = (a+i);
    }
    
    printf("\n haha = %d\n", max);
    return max;
}
