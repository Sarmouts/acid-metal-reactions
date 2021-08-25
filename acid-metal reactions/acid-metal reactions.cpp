#include <iostream>
#include <string>
using namespace std;



string replace(string str)
{
	string final = "";
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] != '1')
		{
			final += str[i];
		}
	}
	return final;
}
int main()
{
	cout << "Welcome to MathFlare's early access acid-metal reaction calculator" << endl;
	cout << "------------------------------------------------------------------" << endl;
	while (true)
	{
		string X, Y, result;
		int x, z;
		cout << "HxY + X^+z" << endl;
		cout << "Enter x" << endl;
		cin >> x;
		cout << "Enter Element Y(non-metal)" << endl;
		cin >> Y;
		cout << "Enter Element X(metal)" << endl;
		cin >> X;
		cout << "Enter z (ex 1,2,3)" << endl;
		cin >> z;
		if (x <= 0 || z <= 0)
		{
			cout << "Please enter a valid value" << endl;
			cout << "=======================================================================" << endl;
		}
		else if (x > 3 || z > 3)
		{
			cout << "The value of x or z cannot be more than 3" << endl;
			cout << "=======================================================================" << endl;
		}
		else if (X == "Cu" || X == "Ag" || X == "Au" || X == "Pt" || X == "cu" || X == "ag" || X == "au" || X == "pt")
		{
			cout << "There is not any reaction since the metal is one of thïse (Cu,Ag,Au,Pt)" << endl;
			cout << "=======================================================================" << endl;
		}
		else
		{
			if (x == z)
			{
				if (x == 2)
				{//HxY + X --> XY + H2
					result = "H" + to_string(x) + Y + " + " + X + " --> " + X + Y + " + " + "H2";
					cout << replace(result) << endl;
					cout << "=======================================================================" << endl;
				}
				else
				{//2 HxY + 2 X --> 2 XY + x H2
					result = "2H" + to_string(x) + Y + " + " + "2" + X + " --> 2" + X + Y + " + " + to_string(x) + "H2";
					cout << replace(result) << endl;
					cout << "=======================================================================" << endl;
				}
			}
			else
			{
				if (x == 2)
				{//z HxY + x X --> XxYz + z H2
					result = to_string(z) + "H" + to_string(x) + Y + " + " + to_string(x) + X + " --> " + X + to_string(x) + Y + to_string(z) + " + " + to_string(z) + "H2";
					cout << replace(result) << endl;
					cout << "=======================================================================" << endl;
				}
				else
				{//2*z HxY + 2*x X --> 2 XxYz + z*x H2
					result = to_string(2 * z) + "H" + to_string(x) + Y + " + " + to_string(2 * x) + X + " --> 2" + X + to_string(x) + Y + to_string(z) + " + " + to_string(z * x) + "H2";
					cout << replace(result) << endl;
					cout << "=======================================================================" << endl;
				}
			}
		}
	}
}
