#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	//ïîñåâ ãåíåðàòîðà ñëó÷àéíûõ ÷èñåë
	srand(time(NULL)); 

	//ñîçäàíèå îäíîìåðíîãî äèíàìè÷åñêîãî ìàññèâà
	int size = 10; 
	int* mas = new int[size];

	//çàïîëíåíèå ìàññèâà
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 10 + 1;
	}

	//ñîðòèðîâêà ìàññèâà
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			temp = mas[j];
			mas[j] = mas[j + 1];
			mas[j + 1] = temp;
		}
	}

	//âûâîä ýëåìåíòîâ ìàññèâà
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	

	//îñâîáîæäåíèå ïàìÿòè
	delete[] mas;

	cout << endl;
	return 0;
}
