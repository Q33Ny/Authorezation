#include <iostream>
#include <string>

bool validate_pass(std::string password_user) {
	std::string password = "qwerty123";
	if (password == password_user)
		return true;
	else
		return false;
}

 void get_pass() {
	std::string password;
		std::cout << "Input your password: ";
		getline(std::cin, password);
		if (!validate_pass(password)) {
			std::cout << "You inputted an incorrect password. " << std::endl;
			get_pass();
		}
		else
			std::cout << "You get a permission on access to your account." << std::endl;
}

int main() {
	std::cout << "Authorization v 1.0 " << std::endl;
	get_pass();
	return 0;
}