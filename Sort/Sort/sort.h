#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//以下排序皆为升序

//冒泡排序
void bubble_sort(int* arr, int size);

//直接插入排序
void insert_sort(int* arr, int size);

//希尔排序
void shell_sort(int* arr, int size);

//直接选择排序
void select_sort(int* arr, int size);

//堆排序
void heap_sort(int* arr, int size);

//快速排序
void quick_sort(int* arr, int size);

//归并排序
void merge_sort(int* arr, int size);

//计数排序
void count_sort(int* arr, int size);
