#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
//��һ(�Դ�)
//�����ǰ�����,�ҵ������ͺ�ǰ������ż������.
//void exchange(int arr[10]);
//
//int main()
//{
//	int arr[10] = { 5,6,8,9,2,3,5,7,8,2};
//	exchange(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void exchange(int arr[10])
//{
//	assert(arr);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (((arr[i] % 2) != 0)&&(i != 0))
//		{
//			int k = i;
//			for (k = i; k > 0; k--)
//			{
//				if ((arr[k - 1] % 2) == 0)
//				{
//					int a = arr[k];
//					arr[k] = arr[k - 1];
//					arr[k - 1] = a;
//				}
//				else
//					break;
//			}
//		}
//	}
//
//}

//����(��)
//�趨leftΪ����,rightΪ����.
//1.����[left,right]��Ч
//2.left����,right����.left����ż����right������������.
void exchange(int arr[10]);

int main()
{
	int arr[10] = { 4,6,7,8,3,4,5,2,3,2};
	exchange(&arr);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
    	printf("%d ", arr[i]);
	}
    return 0;
}

void exchange(int* arr1)
{
	int left = 0;
	int right = 9;
	while (left < right)
	{
		while ((arr1[left] % 2) != 0)
		{
			left++;
		}
		while ((arr1[right] % 2) == 0)
		{
			right--;
		}
		
		if (left < right)//!!!!��Ҫ!!!!
		{
			int c = arr1[left];
			arr1[left] = arr1[right];
			arr1[right] = c;
		}
	}
}