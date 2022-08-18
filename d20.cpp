#include "d20.h"
using namespace std::literals;
int n;
int main(int argc, char **argv) 
{
	 while (true)
	{
		std::cout << "Number of dice: ";
                std::cin >> n;
                std::this_thread::sleep_for(2s);
                std::cout << "You Rolled: \n";
                std::this_thread::sleep_for(2s);
	for (int i = 0; i < n; i++)
		{
			std::cout << (rand() % 20 + 1) << " ";
        	        std::cout << std::endl;
         	        std::this_thread::sleep_for(1s);
		}
	}
}
