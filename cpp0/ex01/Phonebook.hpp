#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include "contact.hpp"

class	Contact;


// using namespace std;

class	Phonebook
{
	private:
		Contact	contacts[8];
		int		i;
	public:
		void	add(void);
		void	search(void);
		/* Getters */
		Contact	get_contact()
			{return contacts[i];}
        /* Setters */
        void	set_contact(int index, Contact contact)
			{contacts[index] = contact;}
};

class	Contact
{
	private:
		std::string	firs_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_num;
		std::string	secret;
	public:
		/* Getters and setters */
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nick_name();
		std::string	get_phone_num();
		std::string	get_secret();
		void		set_first_name(std::string first_name);
		void		set_last_name(std::string last_name);
		void		set_nick_name(std::string nick_name);
		void		set_phone_num(std::string phone_num);
		void		set_secret(std::string secret);
		/* Methods */
};


#endif