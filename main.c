#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i = 10;   // 슬라이드엔 초기화가 없어서 10으로 지정
    printf("함수 호출전 i=%d\n", i);
    inc(i);
    printf("함수 호출후 i=%d\n", i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}