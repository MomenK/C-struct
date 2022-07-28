// use arrow to deference a pointer, while use . to reference an object.


#include <stdio.h>

int main() {
    
  typedef struct {
    int member;
} my_type;

my_type   foo;
my_type * bar = malloc(2 * sizeof(my_type));
int       val;

foo.member = 1;
val = foo.member;
printf("%d\n", val);

bar[0].member = 2;
val = bar[0].member;
printf("%d\n", val);

(*(bar+0)).member = 3;
val = (*(bar+0)).member;
printf("%d\n", val);

(bar+1)->member = 4;
val = (bar+1)->member;
printf("%d\n", val);

    return 0;
}
