#include<stdio.h>
int main(){
    int a = (int)8.5/2; 
    int b = 11/2;
    float c = 11/2;
    float d = 11/2.0;
    float e = 11.0/2.0;
    float f = 11/(float)2;
    
    printf("a=%d, b=%d, c=%f, d=%f, e=%f, f=%f \n", a, b, c, d, e, f);
    return 0;
}