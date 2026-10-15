#include <stdio.h>

static int all_files;    // static 추가
extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}