#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���������Ϊ����

//ð������
void bubble_sort(int* arr, int size);

//ֱ�Ӳ�������
void insert_sort(int* arr, int size);

//ϣ������
void shell_sort(int* arr, int size);

//ֱ��ѡ������
void select_sort(int* arr, int size);

//������
void heap_sort(int* arr, int size);

//��������
void quick_sort(int* arr, int size);

//�鲢����
void merge_sort(int* arr, int size);

//��������
void count_sort(int* arr, int size);
