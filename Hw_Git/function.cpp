#include "Header.h"

void choose(int input)
{
	if (input == 1)
	{
		cout << "   +" << endl;
		cout << "  / \\" << endl;
		cout << " /   \\" << endl;
		cout << "/_____\\" << endl;
	}
	else if (input == 2)
	{
		cout << "+_____+" << endl;
		cout << "|     |" << endl;
		cout << "|     |" << endl;
		cout << "+-----+" << endl;
	}
	else
	{
		cout << " /\\" << endl;
		cout << "/  \\" << endl;
		cout << "\\  /" << endl;
		cout << " \\/" << endl;
	}

}