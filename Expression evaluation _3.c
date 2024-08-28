 #include<stdio.h>
 int main() {
    int a=5;
    int b=7;
    int c=4;
    int d=8;
    int e=9;

    e-=a+ (++c/d)*(e&8)-(d|b);
    a*=a=b?(c*d) && e : (c*d)%b;

    printf("%d %d",e,a);


   return 0;
 }
