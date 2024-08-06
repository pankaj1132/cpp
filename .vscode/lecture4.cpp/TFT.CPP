#include <iostream>
using namespace std;

int main() {

	char ch;
	ch = cin.get();
	int x = 0, y = 0;
	while (ch != '\n') {
		if (ch == 'N') {
			y++;
		}
		else if (ch == 'S') {
			y--;
		}
		else if (ch == 'E') {
			x++;
		}
		else {
			x--;
		}

		ch = cin.get();
	}

	if (x >= 0 and y >= 0) {
		// 1st Quadrant
		// Print x times E
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
		// Print y times N
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}
	else if (x <= 0 and y >= 0) {
		// 2nd Quadrant
		// Print y times N
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
		// Print |x| times W
		x *= -1;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}
	else if (x <= 0 and y <= 0) {
		// 3rd Quadrant
		// Print |y| times S
		y *= -1;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
		// Print |x| times W
		x *= -1;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}

	}
	else {
		// 4th Quadrant
		// Print x times E
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
		// Print |y| times S
		y *= -1;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
    }
	// E---->N--->S--->W
	// WHEN X is positive print x time E
	// WHEN Y IS POSITIVE PRINT Y TIMES N
	// WHEN X IS NEGATIVE PRINT X TIME S
	// WHEN Y IS NEGATIVE PRINT Y TIME W


	return 0;
}