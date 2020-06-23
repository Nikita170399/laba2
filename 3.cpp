#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	//ïîñåâ ãåíåðàòîðà ñëó÷àéíûõ ÷èñåë
	srand(time(NULL));

	//èíèöèàëèçàöèÿ àðãóìåíòîâ
	float k = 0;
	float avg = 0;
	int size1 = 2;
	int size2 = 5;
	int totalSize = size1 * size2;

	//ñîçäàíèå äâóìåðíîãî äèíàìè÷åñêîãî ìàññèâà
	float** mas = new float* [size1];
	for (int count = 0; count < size1; count++)
	{
		mas[count] = new float[size2];
	}

	//çàïîëíåíèå ìàññèâà
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			k = (rand() % 201 - 100);
			mas[i][j] = k / 100;
			avg += mas[i][j];
		}
	}

	//âû÷èñëåíèå ñðåäíåãî çíà÷åíèÿ ýëåìåíòîâ ìàññèâà
	avg /= totalSize;
	cout << "Average value is " << avg << "\n\n";

	//çàìåíà ýëåìåíòîâ ìàññèâà
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++)
		{
			if (mas[i][j] < -0.5)
			{
				mas[i][j] = avg;
			}
		}
	}

	//âûâîä ýëåìåíòîâ ìàññèâà
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++)
		{
			cout << '\t' << setprecision(size1) << mas[i][j] << '\t';
		}
		cout << endl;
	}

	//îñâîáîæäåíèå ïàìÿòè
	for (int count = 0; count < size1; count++)
	{
		delete[] mas[count];
	}

	cout << endl;
	return 0;
}
