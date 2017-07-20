#ifndef _BSTRING_H__
#define _BSTRING_H__

#include "btype.h"
#include <string.h>

/**
 * @author laoc
 * @version 1.0
 * 这个库主要是用于针对字符串的操作
 *
 */

 // 获取字符串的长度
int lengths(char *str);

/*
 * 获取字符串中位于index位置的字符
 */
char charAt(char *str, int index);

//返回指定索引处的字符(Unicode 代码点)
int codeCharAt(char *str, int index);

//返回指定索引之前的字符（Unicode 代码点）
int codeCharBefore(char *str, int index);

/**
 * 按照字典顺序比较str1和str2
 * return   0 - 相等
 *          1 - str1 > str2
 *          2 - str1 < str2
 */
int compareTo(char *str1, char *str2);

char* concats(char *dest, const char *src);

int contains(char *str, char *s);

#endif // __BSTRING_H__
