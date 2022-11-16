#include <iostream>
#include <string>

# include "Phonebook.hpp"
# include "Contact.hpp"

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
		if (std::getline(std::cin, info[i]).rdstate() != 0)
			exit (-1);
		if (i == 3 && is_digits(info[i]) && info[i] != "")
			;
		else if ((i == 3 && !is_digits(info[i])) || info[i] == "")
		{
			std::cout << "Invalid input" << std::endl;
			i--;
		}
	}
	Contact newcontact(info[0], info[1], info[2], info[3], info[4]);
	(*p_list).addcontact(newcontact);
}

void ft_search()
{
	if (p_list->getlen() == 0)
	{
		std::cout << "Phonebook is empty. You must add Contacts to be able to search for them." << std::endl;
		return 0;
	}
	std::string	input = "";
	//while ()
}

int main(int argc, char **argv)
{
	Phonebook p_list;
	std::string	input = "";

	if (argc != 1)
		return (0);
	std::cout << "Avaible commands: ADD, SEARCH, EXIT." << std::endl;
	while (input != "EXIT")
	{
		std::cout << '>';
		if (std::getline(std::cin, input).rdstate() != 0)
			exit (-1);
		//if (input == 'SEARCH')
		//	ft_search(&p_list);
		if (input == "ADD")
			ft_add(&p_list);
	}
	return 0;
}