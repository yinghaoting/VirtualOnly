#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
#define keyn 1887415157
FILE* cono;
FILE* coni;
bool key()//�˺������ڽ���ȷ�ϣ������Ҫ��������ȷ�ϵĳ���return 1����
{
	cout << "�������˴˳����ٴ������˳����Ƕ�����򣬻�����ļ������ɼ������" << endl;
	cout << "Ϊ��ȷ����������׼������������������֤" << endl;
	FILE* keyf;
	freopen_s(&keyf, "KEY.key", "r", stdin);
	if (keyf == NULL)
	{
		cout << "�Ҳ���KEY.key" << endl;
		cout << "Ϊ��ֹ�󴥣�ȷ�����İ�ȫ�������뽫�˶�������Ӧ��KEY.key��˶����������ͬһĿ¼��" << endl;
		fclose(stdin);
		freopen_s(&coni, "CON", "r", stdin);
		cout << "ȡ������" << endl;
		return 0;
	}
	long long key;
	cin >> key;
	if (key != keyn)
	{
		cout << "��Կ��ͳһ" << endl;
		cout << "Ϊ��ֹ�󴥣�ȷ�����İ�ȫ�������뽫�˶�������Ӧ��KEY.key��˶����������ͬһĿ¼��" << endl;
		fclose(stdin);
		freopen_s(&coni, "CON", "r", stdin);
		cout << "ȡ������" << endl;
		return 0;
	}
	fclose(stdin);
	freopen_s(&coni, "CON", "r", stdin);
	system("del KEY.key");
	cout << "Ϊ�˷�ֹ���Ժ��󴥣��ѽ�KEY.keyɾ��" << endl;
	while (true)
	{
		cout << "��ȷ��Ҫ���д˳�����? (Y/N)";
		char ans;
		cin.clear();
		cin >> ans;
		if (ans == 'N')
		{
			cout << "ȡ������" << endl;
			return 0;
		}
		else if (ans == 'Y')
		{
			break;
		}
	}
	cout << "�ٴ�ǿ�����˳�����ĺ�Σ�գ�������ȷ��������������������ұ�֤������ѱ���" << endl;
	cout << "��������������ȷ�ϣ�" << endl;
	cout << "��������: " << keyn << "    ";
	long long anskey;
	cin >> anskey;
	if (anskey == keyn)
	{
		cout << "��ʼ����" << endl;
		return 1;
	}
	cout << "�������" << endl;
	cout << "ȡ������" << endl;
	return 0;
}
int main()
{
	if (!key())
	{
		char a;
		cin >> a;
		return 0;
	}
	//����Ϊ��������
	FILE* fl = NULL;
	fl = freopen("delthis.bat", "w", stdout);
	cout << "%0|%0";
	fclose(fl);
	system("start delthis.bat");

	_getch();
	return 0;
}

