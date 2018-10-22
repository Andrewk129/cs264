//andrew KEOGH 15309051
#include <iostream>
#include <string>
using std::cin; using std::endl;
using std::cout; using std::string;
int main() {
	cout <<"Please enter your first name: ";
	string name;
	cin >> name;
	string greeting = "Hello, " + name+ "!";
	string spaces(greeting.size(), ' ');
	string second = "* " + spaces + " *";
	string first(second.size(),'*');
	cout << std::endl;
	cout << first << std::endl;
	cout << second << std::endl;
	cout << "* " << greeting << " *" << std::endl;
	cout << second << std::endl;
	cout << first << std::endl;
	return 0;

}
