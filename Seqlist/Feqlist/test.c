#define _CRT_SECURE_NO_WARNINGS 1
#include "Seqlist.h"

int main()
{
	//����������˳���
	sl score;
	sl_init(&score);
	//β������ 73��90��95��87��100��80
	sl_push_back(&score, 73);
	sl_push_back(&score, 90);
	sl_push_back(&score, 95);
	sl_push_back(&score, 87);
	sl_push_back(&score, 100);
	sl_push_back(&score, 80);
	//��ӡ˳���
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", score.arr[i]);
	}
	//��������90
	printf("\n90��������±�Ϊ%d��λ��\n",sl_find(&score, 90));
	//����˳��� ��ֹ�ڴ�й¶
	sl_destroy(&score);
	return 0;
}