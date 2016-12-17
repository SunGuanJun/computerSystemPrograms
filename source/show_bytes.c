#include <stdio.h>

typedef unsigned char *byte_pointer;

/**
输入：start：一个字节序列的起始地址
len：字节序列的长度
输出：这个字节序列的字节表示，无视其类型
*/
void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i=0; i<len; i++)
        printf("%.2x", start[i]);   //格式化输出，整数必须用至少两个数字的十六进制格式输出
    printf("\n");
}


void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_chars(const char * s)
{
    show_bytes((byte_pointer) s, strlen(s));
}
