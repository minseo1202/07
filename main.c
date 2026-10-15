#include <stdio.h>

int main(void)
{
    int flag = 1;
    int y = 0; //y를 while문 안에 쓰면 y범위가 while문 안에서만 유효하기 때문에 while문 밖에서 y를 사용하려면 y를 while문 밖에서 선언해야 한다.

    while (flag != 0)
    {
        y = 3;
        flag = 0;
    }
    y = 4;            
    printf("y = %d\n", y);
    return 0;
}