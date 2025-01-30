#include <iostream>
#include <cstdlib>

int main() {
	bool isX100 = false;
	bool isX1 = false;

	srand(time(0));
	while (true) {
		int x = rand() % 100 + 1;
		std::cout << x << " ";


		if (x == 100)
			isX100 = true;
		if (x == 1)
			isX1 = true;
		if (isX1 && isX100)
			break;
	}


	return 0;
}