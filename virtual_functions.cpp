// Online C compiler to run C program online
#include <stdio.h>

// pass by reference in C;

void add (int* a){
	 *(a) = *(a)+5;
}

// Does not work in C!!, inly i C++
// int add2 (int& a){
// 	return a = a+5;
// }

int main() {
    // Write C code here
    int x  = 0;
    int *y = malloc(1*sizeof(int));
    
    *y = 0;
    
    add(&x);
    // printf("%d\n",add(&x));
    printf("x = %d\n",x);
    
// Does not work in C!!, inly i C++ 
    // printf("%d\n",add2(x);
    // printf("%d\n",x);
    
    add(y);
    // printf("%d\n",add(y));
    printf("y = %d\n",*(y));
    
    return 0;
}
