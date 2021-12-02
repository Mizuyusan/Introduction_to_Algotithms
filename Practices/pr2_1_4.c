//
// Created by Shizumu on 2021/11/26.
//
/*
 * BINARY ADD(A, B, sum)
 *  carry = 0
 *  i = A.length
 *  for i downto 0
 *      sum[i + 1] = A[i] + B[i] + carry
 *      if sum[i + 1] == 2
 *          sum[i + 1] = 0
 *          carry = 1
 *      elseif sum[i + 1] == 3:
 *          sum[i + 1] = 1
 *          carry = 1
 *      else
 *          carry = 0
 *  i = i - 1
 *  sum[i] = carry
 */

#include <stdio.h>
#define N 8

void binary_add(const int a[], const int b[], int sum[])
{
    int carry = 0;
    int i;
    for(i = N - 1 ; i >= 0; i --){
        sum[i + 1] = a[i] + b[i] + carry;
        if(sum[i + 1] == 2){
            sum[i + 1] = 0;
            carry = 1;
        }else if(sum[i + 1] == 3){
            sum[i + 1] = 1;
            carry = 1;
        }else{
            carry = 0;
        }
    }
    sum[i + 1] = carry;
}


int main(void)
{
    int a[N], b[N], sum[N + 1];
    for(int i = 0 ; i < N; i ++){
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i < N; i ++){
        scanf("%d", &b[i]);
    }
    binary_add(a, b ,sum);
    for(int i = 0 ; i < N + 1; i ++){
        printf("%d ", sum[i]);
    }

    return 0;
}