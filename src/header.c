#include<stdio.h>
#include"../include/header.h"

float** sgs_clib_2d_float_array(size_t size_of_array){
    float floatArr[size_of_array][size_of_array]; 
    float k=1;
    for (int i = 0; i < size_of_array; i++) {
            for (int j = 0; j < size_of_array; j++) {
                floatArr[i][j]=k;
                k++;
            }
        }

    float *ptr= &floatArr[0][0];
    size_t num=size_of_array*size_of_array;
    for (size_t i = 0; i < num; i++)
    {
        printf("%u \n",ptr+i);
    }
    return 0;
}