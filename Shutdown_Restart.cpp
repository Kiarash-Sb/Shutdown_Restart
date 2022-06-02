#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int choice;
	cout << "1. Shutdown Your computer\n";
	cout << "2. Restart Your computer\n";
	cout << "3. Exit\n";
	cout << "Enter your choice :	";
	cin >> choice;
	switch (choice)
	{
		case 1 :
			cout << "System will shutdown after 10 seconds.\n";
			system("C:\\windows\\system32\\shutdown /s /t 10 \n\n");
			break;
		case 2 :
			cout << "System will restart after 10 seconds.\n";
			system("C:\\windows\\system32\\shutdown /r /t 10 \n\n");
			break;
		case 3:
			exit(0);
		default:
			cout << "Wrong Choice!!\n";
	}
	return 0;
}
