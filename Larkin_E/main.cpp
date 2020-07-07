#include <iostream>
#include <iomanip>

using namespace std;

class W
{
	int A[10];
	int B;
public:
	W(int mas[10])
	{
		for (int i = 0; i < 10; i++)
		{
			A[i] = mas[i];
		}
	}

	int K()
	{
		int k = 0;
		for (int i = 0; i < 10; i++)
		{
			if (A[i] < B)
			{
				k++;
			}
		}
		return k;
	}

	void out()
	{
		cout << "A: ";
		for (int i = 0; i < 10; i++)
		{
			cout << A[i] << " ";
		}
		cout << "\n";
	}
};

W* in()
{
	int mas[10];
	for (int i = 0; i < 10; ++i)
	{
		cin >> mas[i];
	}
	return new W(mas);
}

int main()
{
	setlocale(LC_ALL, "russian");

	W* w1 = in();
	W* w2 = in();
	w1->out();
	w2->out();

	if (w1->K() > w2->K())
	{
		cout << "Первый объект имеет больший K\n";
	}
	else
	{
		cout << "Второй объект имеет больший K\n";
	}

	delete w1;
	delete w2;

	system("pause");
}
