#ifndef _BSTRING_H__
#define _BSTRING_H__

#include "btype.h"
#include <string.h>

/**
 * @author laoc
 * @version 1.0
 * �������Ҫ����������ַ����Ĳ���
 *
 */

 // ��ȡ�ַ����ĳ���
int lengths(char *str);

/*
 * ��ȡ�ַ�����λ��indexλ�õ��ַ�
 */
char charAt(char *str, int index);

//����ָ�����������ַ�(Unicode �����)
int codeCharAt(char *str, int index);

//����ָ������֮ǰ���ַ���Unicode ����㣩
int codeCharBefore(char *str, int index);

/**
 * �����ֵ�˳��Ƚ�str1��str2
 * return   0 - ���
 *          1 - str1 > str2
 *          2 - str1 < str2
 */
int compareTo(char *str1, char *str2);

char* concats(char *dest, const char *src);

int contains(char *str, char *s);

#endif // __BSTRING_H__
