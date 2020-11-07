/*#include<stdio.h>
void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    for (int i=0; i<=(l+r)/2; ++i) {
        tmp = arr[l+i];
        arr[l+i] = arr[r-i];
        arr[r-i] = tmp;
    }
    // print
    printf("\nRevertArray: \n");
    for (int i=0; i<=r; ++i) {
        printf("%d ", arr[i]);
    }
}
void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    for (int i=l; i<=(l+r)/2; ++i) {
        tmp = *(arr+(l+i));
        *(arr+l+i) = *(arr+r-i);
        *(arr+r-i) = tmp;
    }
    printf("\nRevertArray pointer: \n");
    for (int i=0; i<=r; ++i) {
        printf("%d ", *(arr+i));
    }
}
*/
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int l = s.length();
   	if(s[0] == '0'){
        cout << "\nSo ban nhap khong hop le!";
        return 0;
    }
    for(int i = 0; i < l; i++){
        if(s[i] > '9' || s[i] < '0'){
            cout << "\nSo ban nhap khong hop le!";
            return 0;
        }
    }
    
    while(s[l-1] == '0') --l;
    
    for(int i = l-1; i >= 0; --i){
        cout << s[i];
    }
}
 
