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
	cout << "�˳������ڿ������ɾ��з��󴥵Ķ�������������Կ��ʹ��ʱ����Կ�Ͷ����������ͬһĿ¼�ڲ��ܽ�����һ��ȷ��" << endl;
	FILE* coni;
	FILE* cono;
	FILE* flag;
	freopen_s(&flag, "KEY.key", "r", stdin);
	if (flag != NULL)
	{
		fclose(stdin);
		freopen_s(&coni, "CON", "r", stdin);
		cout << "�ļ� KEY.key �Ѵ��ڣ�����ɾ�����ļ�" << endl;
		while (true)
		{
			cout << "�Ƿ�����ɾ��? (Y/N)";
			char del;
			cin >> del;
			if (del == 'Y')
			{
				system("del KEY.key");
				cout << "�Ѿ�ɾ��" << endl;
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
		cout << "�ļ� template.cpp �Ѵ��ڣ�����ɾ�����ļ�" << endl;
		cin.clear();
		while (true)
		{
			cout << "�Ƿ�����ɾ��? (Y/N)";
			char del;
			cin >> del;
			if (del == 'Y')
			{
				system("del template.cpp");
				cout << "�Ѿ�ɾ��" << endl;
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
	a = 1887415157;//�����Ҫ�޸�Ϊ�����Կ���޸Ĵ˴����� 
	cout << a;
	fclose(stdout);
	freopen_s(&cppf, "template.cpp", "w", stdout);
	out();
	fclose(stdout);
	freopen_s(&cono, "CON", "w", stdout);
	cout << "���Կ��Ϊ: " << a << endl;
	cout << "KEY.key������" << endl;
	cout << "C++����ģ�������ɣ�������template.cpp�У������������޸��ļ���" << endl;
	cout << "���������������" << endl;
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
	cout << "bool key()//�˺������ڽ���ȷ�ϣ������Ҫ��������ȷ�ϵĳ���return 1����" << endl;
	cout << "{" << endl;
	cout << "	cout << \"�������˴˳����ٴ������˳����Ƕ�����򣬻�����ļ������ɼ������\" << endl;" << endl;
	cout << "	cout << \"Ϊ��ȷ����������׼������������������֤\" << endl;" << endl;
	cout << "	FILE* keyf;" << endl;
	cout << "	freopen_s(&keyf, \"KEY.key\", \"r\", stdin);" << endl;
	cout << "	if (keyf == NULL)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"�Ҳ���KEY.key\" << endl;" << endl;
	cout << "		cout << \"Ϊ��ֹ�󴥣�ȷ�����İ�ȫ�������뽫�˶�������Ӧ��KEY.key��˶����������ͬһĿ¼��\" << endl;" << endl;
	cout << "		fclose(stdin);" << endl;
	cout << "		freopen_s(&coni, \"CON\", \"r\", stdin);" << endl;
	cout << "		cout << \"ȡ������\" << endl;" << endl;
	cout << "		return 0;" << endl;
	cout << "	}" << endl;
	cout << "	long long key;" << endl;
	cout << "	cin >> key;" << endl;
	cout << "	if (key != keyn)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"��Կ��ͳһ\" << endl;" << endl;
	cout << "		cout << \"Ϊ��ֹ�󴥣�ȷ�����İ�ȫ�������뽫�˶�������Ӧ��KEY.key��˶����������ͬһĿ¼��\" << endl;" << endl;
	cout << "		fclose(stdin);" << endl;
	cout << "		freopen_s(&coni, \"CON\", \"r\", stdin);" << endl;
	cout << "		cout << \"ȡ������\" << endl;" << endl;
	cout << "		return 0;" << endl;
	cout << "	}" << endl;
	cout << "	fclose(stdin);" << endl;
	cout << "	freopen_s(&coni, \"CON\", \"r\", stdin);" << endl;
	cout << "	system(\"del KEY.key\");" << endl;
	cout << "	cout << \"Ϊ�˷�ֹ���Ժ��󴥣��ѽ�KEY.keyɾ��\" << endl;" << endl;
	cout << "	while (true)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"��ȷ��Ҫ���д˳�����? (Y/N)\";" << endl;
	cout << "		char ans;" << endl;
	cout << "		cin.clear();" << endl;
	cout << "		cin >> ans;" << endl;
	cout << "		if (ans == 'N')" << endl;
	cout << "		{" << endl;
	cout << "			cout << \"ȡ������\" << endl;" << endl;
	cout << "			return 0;" << endl;
	cout << "		}" << endl;
	cout << "		else if (ans == 'Y')" << endl;
	cout << "		{" << endl;
	cout << "			break;" << endl;
	cout << "		}" << endl;
	cout << "	}" << endl;
	cout << "	cout << \"�ٴ�ǿ�����˳�����ĺ�Σ�գ�������ȷ��������������������ұ�֤������ѱ���\" << endl;" << endl;
	cout << "	cout << \"��������������ȷ�ϣ�\" << endl;" << endl;
	cout << "	cout << \"��������: \" << keyn << \"    \";" << endl;
	cout << "	long long anskey;" << endl;
	cout << "	cin >> anskey;" << endl;
	cout << "	if (anskey == keyn)" << endl;
	cout << "	{" << endl;
	cout << "		cout << \"��ʼ����\" << endl;" << endl;
	cout << "		return 1;" << endl;
	cout << "	}" << endl;
	cout << "	cout << \"�������\" << endl;" << endl;
	cout << "	cout << \"ȡ������\" << endl;" << endl;
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
	cout << "	//��������������滻cout" << endl;
	cout << "	cout << \"���г��򡭡�\";" << endl;
	cout << "" << endl;
	cout << "	_getch();" << endl;
	cout << "	return 0;" << endl;
	cout << "}" << endl;
	cout << "" << endl;
}
