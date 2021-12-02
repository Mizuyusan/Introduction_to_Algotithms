//
// Created by Shizumu on 2021/11/26.
//
#include <stdio.h>

void insertion_sort(int a[], int lena)
{
    int key;
    for(int j = 1; j < lena; j ++){
        key = a[j];
        int i = j - 1;
        while(i >= 0 && a[i] < key){
            a[i + 1] = a[i];
            i -= 1;
        }
        a[i + 1] = key;
    }
}


int main(void)
{
    int lena;
    scanf("%d", &lena);
    int a[lena];
    for(int i = 0 ; i < lena; i ++){
        scanf("%d", &a[i]);
    }
    insertion_sort(a, lena);
    for(int i = 0 ; i < lena; i ++){
        printf("%d ", a[i]);
    }

    return 0;
}
