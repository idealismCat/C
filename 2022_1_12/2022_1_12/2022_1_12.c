#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// getchar() �� �÷� �� ����
//int main()
//{
//	char password[20] = { 0 };
//	printf("�������룺\n");
//	scanf("%s", password);// scanf ���� �ո���߻س� ��ζ�� ��ȡ����
//	printf("��ȷ������: Y/N  \n");
//
//	// ����������
//	// getchar(); // �����ʹ����� scanf û�õ� \n
//
//	// �����������Ķ���ַ�
//	int temp = 0;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar(); // ע�� getchar �ķ���ֵ �� int ��
//
//	// getchar �� scanf ����ֱ�ӴӼ��������ݣ����Ǵӻ�������������
//	// ���̼�����Ϣ�����س�ʱ�����������뺯��ȥ ������ �� ���ݡ�
//	//ע�⣺����scanf���� �س���getchar������ �س� \n
//
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else if (ch == 'N')
//		printf("ȷ��ʧ��\n");
//
//	return 0;
//}

// for ѭ��
//int main()
//{
//	// ѭ���� ���� �������֣���ʼ�����жϲ��֡���������
//	// while ���� 3 ������ �ȽϷ�ɢ
//	// for ��Լ���
//	// for(��ʼ��;�ж�;����)  ��ʼ������ֻ��ִ��һ��
//
//	int i = 0;
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	/*if (i == 5) // ��ӡ 1��4
//	//		break;*/
//
//	//	if (i == 5) // ����5 ��ӡ ������
//	//		continue;
//
//	//	printf("%d ", i);
//	//}
//	// break �� continue �� for ѭ����
//
//	// ע�⣺��Ҫ�����forѭ���� �޸� ѭ������,��ֹ����һЩ���벻���Ľ��
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//		// i = 5; // ��Ϊ�� forѭ���� �����޸��� ѭ����������������ѭ��
//	}
//
//	return 0;
//}

// ���� for ѭ�� ����ѭ��������д�� ��������ҿ���д��
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) // ����ҿ� ���� �� д��
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;) // for ѭ���� ���ⲿ�ֶ�����ʡ��
//	// �жϲ��� �� ʡ�� ����ζ�� ��Ϊ��
//	{
//		printf("heheh\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++) // ���ڵĻ������ӡ 9 �Σ��������ȥ�� j = 0�Ļ������ӡ 3 ��
//		{
//			printf("hahah\n");
//		}
//	}
//
//	return 0;
//}
// for ѭ������ ������ѭ����������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++) // j = 0 �� �٣�j = 1 �� ��
//		// �����ζ�ţ�һ����һ�ζ���ִ�У�һ������ѭ�� ��Ϊһֱ����
//		j++;
//	return 0;
//}

// do while ѭ��
// �����ʽ:
//do
//ѭ�����;
//while (����ʽ);
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}