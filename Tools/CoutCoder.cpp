#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 2000
char s[MAX];
char s2[MAX];
int main()
{
	cout << "此程序可以将代码转为cout语句，运行生成的语句即可代码，可用于代码生成器。输入文件名时一定要加后缀" << endl;
	char ifile[64];
	char ofile[64];
	cout << "需要读取的文件名称: ";
	cin >> ifile;
	cout << "需要写入的文件名称: ";
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
		for (int i = 0; i < MAX; i++)//此处需修改：若引号外出现"\"，会出现错误
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
	cout << "按任意键继续……" << endl;
	_getch();
	return 0;
}
