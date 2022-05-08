#include<iostream>
#include<stdio.h>
#include<random>
#include<stdlib.h>
#include<conio.h>
#include<time.h> 
using namespace std;
long long a;
void out();
int main()
{
	cout << "此程序用于快速生成具有防误触的恶意程序及其解锁密钥，使用时将密钥和恶意程序置于同一目录内才能进入下一步确认" << endl;
	FILE* coni;
	FILE* cono;
	FILE* flag;
	freopen_s(&flag, "KEY.key", "r", stdin);
	if (flag != NULL)
	{
		fclose(stdin);
		freopen_s(&coni, "CON", "r", stdin);
		cout << "文件 KEY.key 已存在，请先删除该文件" << endl;
		while (true)
		{
			cout << "是否立即删除? (Y/N)";
			char del;
			cin >> del;
			if (del == 'Y')
			{
				system("del KEY.key");
				cout << "已经删除" << endl;
				break;
			}
			else if (del == 'N')
			{
				return 0;
			}
		}
	}
	freopen_s(&flag, "template.cpp", "r", stdin);
	if (flag != NULL)
	{
		fclose(stdin);
		freopen_s(&coni, "CON", "r", stdin);
		cout << "文件 template.cpp 已存在，请先删除该文件" << endl;
		cin.clear();
		while (true)
		{
			cout << "是否立即删除? (Y/N)";
			char del;
			cin >> del;
			if (del == 'Y')
			{
				system("del template.cpp");
				cout << "已经删除" << endl;
				break;
			}
			else if (del == 'N')
			{
				return 0;
			}
		}
	}
	FILE* keyf;
	FILE* cppf;
	freopen_s(&keyf, "KEY.key", "w", stdout);
	srand(time(0));
	a = static_cast<long long>(rand()) * 114514;
	cout << a;
	fclose(stdout);
	freopen_s(&cppf, "template.cpp", "w", stdout);
	out();
	fclose(stdout);
	freopen_s(&cono, "CON", "w", stdout);
	cout << "随机钥匙为: " << a << endl;
	cout << "密钥已生成，储存在KEY.key中" << endl;
	cout << "C++代码模板已生成，储存在template.cpp中，您可以自行修改文件名" << endl;
	cout << "按任意键结束……" << endl;
	_getch();
}
void out()
{
	cout << "#include<iostream>" << endl;
	cout << "#include<stdio.h>" << endl;
	cout << "#include<stdlib.h>" << endl;
	cout << "#include<time.h>" << endl;
	cout << "#include<conio.h>" << endl;
	cout << "using namespace std;" << endl;
	cout << "#define keyn " << a << endl;
	cout << "FILE* cono;" << endl;
	cout << "FILE* coni;" << endl;
	cout << "bool key()//此函数用于进行确认，如果需要生成无需确认的程序，return 1即可" << endl;
	cout << "{" << endl;
	cout << "	cout << \"您运行了此程序。再次声明此程序是恶意程序，会对您的计算机造成极大的损害\" << endl;" << endl;
	cout << "	cout << \"为了确保您已做好准备，接下来将进行验证\" << endl;" << endl;
	cout << "	FILE* keyf;" << endl;
	cout << "	freopen_s(&keyf, \"KEY.key\", \"r\", stdin);" << endl;
	cout << "	if (keyf == NULL)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"找不到KEY.key\" << endl;" << endl;
	cout << "		cout << \"为防止误触，确保您的安全，您必须将此恶意程序对应的KEY.key与此恶意程序置于同一目录内\" << endl;" << endl;
	cout << "		fclose(stdin);" << endl;
	cout << "		freopen_s(&coni, \"CON\", \"r\", stdin);" << endl;
	cout << "		cout << \"取消运行\" << endl;" << endl;
	cout << "		return 0;" << endl;
	cout << "	}" << endl;
	cout << "	long long key;" << endl;
	cout << "	cin >> key;" << endl;
	cout << "	if (key != keyn)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"密钥不统一\" << endl;" << endl;
	cout << "		cout << \"为防止误触，确保您的安全，您必须将此恶意程序对应的KEY.key与此恶意程序置于同一目录内\" << endl;" << endl;
	cout << "		fclose(stdin);" << endl;
	cout << "		freopen_s(&coni, \"CON\", \"r\", stdin);" << endl;
	cout << "		cout << \"取消运行\" << endl;" << endl;
	cout << "		return 0;" << endl;
	cout << "	}" << endl;
	cout << "	fclose(stdin);" << endl;
	cout << "	freopen_s(&coni, \"CON\", \"r\", stdin);" << endl;
	cout << "	system(\"del KEY.key\");" << endl;
	cout << "	cout << \"为了防止您以后误触，已将KEY.key删除\" << endl;" << endl;
	cout << "	while (true)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"您确定要运行此程序吗? (Y/N)\";" << endl;
	cout << "		char ans;" << endl;
	cout << "		cin.clear();" << endl;
	cout << "		cin >> ans;" << endl;
	cout << "		if (ans == 'N')" << endl;
	cout << "		{" << endl;
	cout << "			cout << \"取消运行\" << endl;" << endl;
	cout << "			return 0;" << endl;
	cout << "		}" << endl;
	cout << "		else if (ans == 'Y')" << endl;
	cout << "		{" << endl;
	cout << "			break;" << endl;
	cout << "		}" << endl;
	cout << "	}" << endl;
	cout << "	cout << \"再次强调，此程序真的很危险，您必须确保在虚拟机上运行它，且虚拟机可能会被破坏\" << endl;" << endl;
	cout << "	cout << \"接下来进行最后的确认：\" << endl;" << endl;
	cout << "	cout << \"请您输入: \" << keyn << \"    \";" << endl;
	cout << "	long long anskey;" << endl;
	cout << "	cin >> anskey;" << endl;
	cout << "	if (anskey == keyn)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"开始运行\" << endl;" << endl;
	cout << "		return 1;" << endl;
	cout << "	}" << endl;
	cout << "	cout << \"输入错误\" << endl;" << endl;
	cout << "	cout << \"取消运行\" << endl;" << endl;
	cout << "	return 0;" << endl;
	cout << "}" << endl;
	cout << "int main()" << endl;
	cout << "{" << endl;
	cout << "	if (!key())" << endl;
	cout << "	{" << endl;
	cout << "	    char a;" << endl;
	cout << "	    cin >> a;" << endl;
	cout << "		return 0;" << endl;
	cout << "	}" << endl;
	cout << "	//接下来恶意程序替换cout" << endl;
	cout << "	cout << \"运行程序……\";" << endl;
	cout << "" << endl;
	cout << "	_getch();" << endl;
	cout << "	return 0;" << endl;
	cout << "}" << endl;
	cout << "" << endl;
}
