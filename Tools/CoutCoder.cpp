#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 2000
char s[MAX];
char s2[MAX];
int main()
{
	cout << "�˳�����Խ�����תΪcout��䣬�������ɵ���伴�ɴ��룬�����ڴ����������������ļ���ʱһ��Ҫ�Ӻ�׺" << endl;
	char ifile[64];
	char ofile[64];
	cout << "��Ҫ��ȡ���ļ�����: ";
	cin >> ifile;
	cout << "��Ҫд����ļ�����: ";
	cin >> ofile;
	FILE* input;
	FILE* output;
	freopen_s(&input, ifile, "r", stdin);
	freopen_s(&output, ofile, "w", stdout);
	while (!cin.eof())
	{
		cout << "\tcout << \"";
		cin.getline(s, MAX);
		int cnt = 0;
		for (int i = 0; i < MAX; i++)//�˴����޸ģ������������"\"������ִ���
		{
			if (s[i] == '\"')
			{
				s2[cnt] = '\\';
				cnt++;
			}
			s2[cnt] = s[i];
			cnt++;
		}
		cout << s2 << "\" << endl;" << endl;
	}
	fclose(stdin);
	fclose(stdout);
	freopen_s(&output, "CON", "w", stdout);
	cout << "���������������" << endl;
	_getch();
	return 0;
}
