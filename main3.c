#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i;
    printf("함수 호출전i=%d\n", i);
    inc(i);
    printf("함수 호출후i=%d\n", i);
    return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}