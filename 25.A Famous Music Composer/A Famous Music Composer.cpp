/*
2018/3/26
��Ŀ25
A Famous Music Composer
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
Mr. B is a famous music composer. One of his most famous work was his set of preludes. These 24 pieces span the 24 musical keys (there are musically distinct 12 scale notes, and each may use major or minor tonality). The 12 distinct scale notes are:
A    	A#=Bb 	B      	 C     	 C#=Db	D      	D#=Eb 	E      	F      	 F#=Gb	 G     	 G#=Ab

Five of the notes have two alternate names, as is indicated above with equals sign. Thus, there are 17 possible names of scale notes, but only 12 musically distinct notes. When using one of these as the keynote for a musical key, we can further distinguish between major and minor tonalities. This gives 34 possible keys, of which 24 are musically distinct.
In naming his preludes, Mr. B used all the keys except the following 10, which were named instead by their alternate names:
Ab minor	 A# major	A# minor 	C# major 	Db minor
D# major	 D# minor	Gb major 	Gb minor 	G# major
Write a program that, given the name of a key, give an alternate name if it has one, or report the key name is unique.
����
Each test case is described by one line having the format "note tonality", where "note" is one of the 17 names for the scale notes given above, and "tonality" is either "major" or "minor" (quotes for clarify).
���
For each case output the required answer, following the format of the sample.
��������
Ab minor
D# major
G minor
�������
Case 1: G# minor
Case 2: Eb major
Case 3: UNIQUE
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[3], b[6];//�����ַ���a��b
	int i = 1;
	while (cin >> a >> b)
	{
		int flag = 0;//flag���ڿ����Ƿ��ж�
		if (a[1] == 0) { cout << "Case " << i << ": " << "UNIQUE" << endl; continue; }//��ֻ��һλ�����UNIQUE
		if (a[0] == 'A') 
		{
			if (a[1] == '#') { a[0] = 'B'; a[1] = 'b'; }
			else { a[0] = 'G'; a[1] = '#'; }
			flag = 1;
		}
		if (a[0] == 'C'&& flag == 0)
		{
			if (a[1] == '#') { a[0] = 'D'; a[1] = 'B'; }
			flag = 1;
		}
		if (a[0] == 'D' && flag == 0) 
		{
			if (a[1] == '#') { a[0] = 'E'; a[1] = 'b'; }
			else { a[0] = 'C'; a[1] = '#'; }
			flag = 1;
		}
		if (a[0] == 'F' && flag == '0') 
		{
			if (a[1] == '#') { a[0] = 'G'; a[1] = 'b'; }
			flag = 1;
		}
		if (a[0] == 'G'&& flag == '0')
		{
			if (a[1] == '#') { a[0] = 'A'; a[1] = 'b';}
		}
		cout << "Case " << i << ": " << a << " " << b << endl;//������
		i++;
	}
}