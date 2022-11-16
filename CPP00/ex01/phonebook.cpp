# include "Phonebook.hpp"
# include "Contact.hpp"

Phonebook::Phonebook(void)
{
	len = 0;
	return;
}

Phonebook::~Phonebook(void){ return; }

void Phonebook::addcontact(Contact newcontact)
{
	if (len < 8)
	{
		list[len] = newcontact;
		list[len].setid(len + 1);
		len++;
	}
	//else
	//yavere
}

Contact *Phonebook::getList(void){ return (list); }

int	Phonebook::getlen(void){ return (len); }