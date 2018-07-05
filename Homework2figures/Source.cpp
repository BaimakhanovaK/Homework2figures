#include <iostream>

using namespace std;

void main() {

	setlocale(LC_ALL, "Rus");

	int a = 0;
	cout << "Введите номер задания:";
	cin >> a;

	if (a == 1)
	{
		cout << "Вывести на экран фигуры заполненные звездочками. Диалог с пользователем реализовать при помощи меню."<<endl;

		int b = 0;
		cout << "Введите номер подзадания: ";
		cin >> b;

		int n = 0;
		cout << "Введите число n: ";
		cin >> n;

		switch (b)
		{
		case 1:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i <= j)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 2:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i >= j)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 3:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i <= j && (i + j) <= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 4:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i >= j && (i + j) >= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 5:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i + j) >= (n - 1) && i >= j || (i + j) <= (n - 1) && i <= j)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 6:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i + j) >= (n - 1) && i <= j || (i + j) <= (n - 1) && i >= j)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 7:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i + j) <= (n - 1) && i >= j)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 8:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i + j) >= (n - 1) && i <= j)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 9:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i + j) <= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 10:

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i + j) >= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		}
	}
	else if (a == 2)
	{
		cout << "Вывести на экран ромб из звездочек"<<endl;

		int n=0;
		cout << "Введите число n: ";
		cin >> n;

		int centr = n / 2;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i <= centr)
				{
					if (j >= centr - i && j <= centr + i)
						cout << "*";
					else
						cout << " ";
				}
				else
				{
					if (j >= centr + i - n + 1 && j <= centr - i + n - 1)
						cout << "*";
					else
						cout << " ";
				}
			}
			cout << endl;
		}
	}
}