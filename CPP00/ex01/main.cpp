#include <iostream>
#include <string>

void ft_add()
{
	int i;

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
	}
}

void ft_search()
{

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