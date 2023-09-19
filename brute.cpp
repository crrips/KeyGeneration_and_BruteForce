#include <iostream>
#include <string>
#include <Windows.h>
#include <random>
using namespace std;

mt19937_64 gen(random_device{}());

char key[] = "0x000000000000000";
char rkey[] = "0x000000000000000";
int navigate;
string buf_key, buf_rkey;

void Menu() {
	cout << "(1) 8 bit" << endl
		<< "(2) 16 bit" << endl
		<< "(3) 32 bit" << endl
		<< "(4) 64 bit" << endl
		<< "(5) 128 bit" << endl
		<< "(6) 256 bit" << endl
		<< "(7) 512 bit" << endl
		<< "(8) 1024 bit" << endl
		<< "(9) 2048 bit" << endl
		<< "(0) 4096 bit" << endl
		<< "Enter your selection: ";
	cin >> navigate;
}

void randKey(int x) {
	long int keys = pow(x, 4);
	uint64_t rand_keys = gen() % keys;

	int xkey = rand_keys;
	int buf = xkey;

	int zero = 0;
	while (buf > 0) {
		buf = buf / 10;
		zero++;
	}

	string ox = rkey;
	string xx = to_string(xkey);

	for (int i = 0; i < zero; i++){
		ox.erase(17 - zero);
	}

	string rk = ox + xx;

	buf_rkey = rk;
}

void genANDfind(int x) {
	int count = 0;
	while (count < pow(x, 4) && buf_key != buf_rkey) {

		int zero = 0;
		int buf = count;
		while (buf > 0) {
			buf = buf / 10;
			zero++;
		}

		string ox = key;
		string xx = to_string(count);

		for (int i = 0; i < zero; i++) {
			ox.erase(17 - zero);
		}

		string gk = ox + xx;

		buf_key = gk;

		cout << "Generated key: " << gk << endl;

		count++;
	}
}

void bruteForce(int x) {
	randKey(x);
	unsigned int start = clock();
	genANDfind(x);
	unsigned int finish = clock();
	unsigned int ms = finish - start;
	cout << "\nSpent time: " << ms << " ms" << endl << endl << "Random key: " << buf_rkey << endl << endl;
}

int main(){

	Menu();
	
	switch (navigate) {
	case 1:
		system("cls");
		bruteForce(8);
		system("pause");
		break;
	case 2:
		system("cls");
		bruteForce(16);
		system("pause");
		break;
	case 3:
		system("cls");
		bruteForce(32);
		system("pause");
		break;
	case 4:
		system("cls");
		bruteForce(64);
		system("pause");
		break;
	case 5:
		system("cls");
		bruteForce(128);
		system("pause");
		break;
	case 6:
		system("cls");
		bruteForce(256);
		system("pause");
		break;
	case 7:
		system("cls");
		bruteForce(512);
		system("pause");
		break;
	case 8:
		system("cls");
		bruteForce(1024);
		system("pause");
		break;
	case 9:
		system("cls");
		bruteForce(2048);
		system("pause");
		break;
	case 0:
		system("cls");
		bruteForce(4096);
		system("pause");
		break;
	}
	
	return 0;
} 
