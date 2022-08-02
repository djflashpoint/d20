#include <iostream>
using namespace std;
void main(int argc, char **argv) {
	bool quit = false;
	bool restart = false;
	while (!quit)
	{
		restart = false;
		while (!quit && !restart)
		{
			cout << "Number of dice: ";
			int n;
			cin >> n;
			_sleep(2000);
			cout << "You Rolled: ";
			_sleep(2000);
			for (int i = 0; i < n; i++)
				cout << (rand() % 20 + 1) << " ";
			cout << endl;
			_sleep(1000);
			{
				cout << endl;
			}
		}
	}
}