#include <iostream>
#include <Windows.h>

using namespace std;

char* perevirka(char* lit_r, const char* para, const char* para1, char* d, char* t, int j, int k, int l, int i);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char lit_r[50] = "QhkiQQSuySQQsdQSdsSQsdQQQSSSq";
	cout << "Сфомований літерний рядок: " << endl << endl << lit_r << endl << endl;
	char para[] = "SQ";
	char para1[] = "QS";

	char* d = new char[strlen(lit_r) / 2 * 3 + 1];
	char* t = d;
	cout << "Модифікований літерний рядок: " << endl << endl;
	cout << perevirka(lit_r, para, para1, d, d, 0, 0, 0, 0) << endl;

	return 0;
}

char* perevirka(char* lit_r, const char* para, const char* para1, char* d, char* t, int j, int k, int l, int i)
{
	j = 0;
	k = i;
	l = 0;
	while (para[j] != '\0')
	{
		if (((lit_r[k] == para[j]) || (lit_r[k] == para1[j])) && lit_r[k] != '\0')
		{
			if (j == 1)
				l++;
			j++;
			k++;
		}
		else
			break;
	}
	if (para[j] == '\0' && (lit_r[k - 1] != lit_r[k - 2]))
	{
		*t++ = '*';*t++ = '*';*t++ = '*';
		i = k - 1;
	}
	else
	{
		if (l == 1)
		{
			*t++ = lit_r[k - 2];
			i = k - 2;
		}
	}
	if (j == 0)
	{
		*t++ = lit_r[k];
		i = k;
	}
	if (j == 1)
	{
		*t++ = lit_r[k - 1];
		*t++ = lit_r[k];
		i = k;
	}
	if (lit_r[i] != '\0')
		return perevirka(lit_r, para, para1, d, t, j, k, l, i + 1);
	else
		*t = '\0';
	return d;
}