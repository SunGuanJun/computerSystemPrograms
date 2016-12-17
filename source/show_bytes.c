#include <stdio.h>

typedef unsigned char *byte_pointer;

/**
���룺start��һ���ֽ����е���ʼ��ַ
len���ֽ����еĳ���
���������ֽ����е��ֽڱ�ʾ������������
*/
void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i=0; i<len; i++)
        printf("%.2x", start[i]);   //��ʽ����������������������������ֵ�ʮ�����Ƹ�ʽ���
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
