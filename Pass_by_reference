// Online C compiler to run C program online
#include <stdio.h>

// pass by reference in C;

int add (int* a){
	return *(a) = *(a)+5;
}

// Does not work in C!!, inly in C++
// int add2 (int& a){
// 	return a = a+5;
// }

int main() {
    // Write C code here
    int x  = 0;
    int *y = malloc(1*sizeof(int));
    
    *y = 0;

    printf("%d\n",add(&x));
    printf("%d\n",x);
    
// Does not work in C!!, inly i C++ 
    // printf("%d\n",add2(x);
    // printf("%d\n",x);
    
    
    printf("%d\n",add(y));
    printf("%d\n",*(y));
    
    return 0;
}
