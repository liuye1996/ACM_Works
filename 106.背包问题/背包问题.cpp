/*
2018/3/26
��Ŀ106
��������
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�3
����
�����кܶ���Ʒ�������ǿ��Էָ�ģ�������֪������ÿ����Ʒ�ĵ�λ�����ļ�ֵv������w��1<=v,w<=10�����������һ�������������ɵ�����Ϊm��10<=m<=20��,����Ҫ���ľ��ǰ���Ʒװ�������ʹ���������Ʒ�ļ�ֵ�ܺ����
����
��һ������һ��������n��1<=n<=5��,��ʾ��n��������ݣ�
�����n�������ݣ�ÿ��������ݵĵ�һ��������������s��m��1<=s<=10��;s��ʾ��s����Ʒ����������s��ÿ��������������v��w��
���
���ÿ����������б����ڵ���Ʒ�ļ�ֵ�ͣ�ÿ�����ռһ�С�
��������
1
3 15
5 10
2 8
3 9
�������
65
*/

#include<iostream>
#include<algorithm>
using namespace std;
class items
{
public:int v; int w;//vΪ��λ�����ļ�ֵ��wΪ����
};
bool cmp(items a,items b)//��������cmp
{
	return a.v > b.v;
}

int main()
{
	int n, s, m;//n�����ݣ�s����Ʒ��m��������
	items item[11];
	int i, sum, w_sum, v_sum;//i����ѭ��,sun����
	cin >> n;
	while (n--) 
	{
		sum = w_sum = v_sum = 0;
		cin >> s >> m;
		for (i = 0; i < s; i++)
		{
			cin >> item[i].v >> item[i].w;
			w_sum += item[i].w;
			v_sum += item[i].w * item[i].v;
		}
		if (w_sum < m) { cout << v_sum << endl; continue; }//�ж��Ƿ�����������ȫ����������Ʒ
		sort(item, item + s, cmp);//��item��������
		for (i = 0; i < s; i++) 
		{
			if (m > item[i].w) //װ����
			{
				sum += item[i].w * item[i].v;
				m -= item[i].w;
				continue;
			}
			if (m < item[i].w)//ֻ��װ�²���
			{
				sum += item[i].v * m;
				break;
			}
		}
		cout << sum << endl;
	}
	system("pause");
}