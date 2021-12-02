//
// Created by Shizumu on 2021/11/26.
//
/*
 * FIND INDEX(A, v)
 *  index = NIL
 *  for i = 1 to A.length
 *      if A[i] == v
 *          index = i
 *          break
 *  return index
 *
 */

#include <stdio.h>

int find_index(int a[], int lena, int v)
{
    int ret = -1;
    for(int i = 0; i < lena; i ++){
        if(a[i] == v){
            ret = i;
            break;
        }
    }

    return ret;
}


int main(void)
{
    int lena, v;
    scanf("%d", &lena);
    int a[lena];
    for(int i = 0 ; i < lena; i ++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &v);
    printf("%d", find_index(a, lena, v));

    return 0;
}