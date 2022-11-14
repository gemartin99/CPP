#include <iostream>
#include <string>

static bool is_digits(const std::string &str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

void ft_add(Phonebook *p_list)
{
	int i;
	std::string info[5];

	i = -1;
	while (++i < 5)
	{
		switch(i)
		{
			case 0:
				std::cout << "Introduce the first name" << std::endl;
				break;
			case 1:
				std::cout << "Introduce the last name" << std::endl;
				break;
			case 2:
				std::cout << "Introduce the nickname" << std::endl;
				break;
			case 3:
				std::cout << "Introduce the phone number" << std::endl;
				break;
			case 4:
				std::cout << "Introduce the darkest secret" << std::endl;
				break;
		}
		if (i == 3 && is_digits(info[i]) && vars[i] != "")
			;
		else if (!is_digits(info[i]) && vars[i] != "")
		{
			std::cout << "Invalid input" << std::endl;
			i--;
		}
	}
	Contact newcontact(info[0], info[1], info[2], info[3], info[4]);
	(*p_list).addcontact(newc);
}

void ft_search()
{
	if (arrayvacia)
	{
		std::cout << "Phonebook is empty. You must add Contacts to be able to search for them." << std::endl;
		return 0;
	}
	std::string	input = "";
	while ()
}

int main(int argc, char **argv)
{
	std::string	input = "";

	if (argc != 1)
		return (0);
	std::cout << "Avaible commands: ADD, SEARCH, EXIT." << std::endl;
	while (input != "EXIT")
	{
		std::cout << '>';
		std::getline(std::cin, input);
		if (input == 'SEARCH')
			ft_search();
		if (input == 'ADD')
			ft_add();
	}
	return 0;
}