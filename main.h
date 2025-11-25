#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct _printf - Structure assiociating the keyword with the function to use
 * @key: conversion specifier keyword
 * @ptr: function pointer that will point towards the appropriate conversion
 */
typedef struct _printf
{
	char key;
	int (*ptr)(va_list);
} print_struct;

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
int conversion(char letter, va_list args, int *ptr);
#endif
