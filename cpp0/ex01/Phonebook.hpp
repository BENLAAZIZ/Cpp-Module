#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
class	Contact;


// using namespace std;

class	Phonebook
{
	private:
		Contact	contacts[8];
		int		i;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
		/* Getters */
		Contact	get_contact(int index);
        /* Setters */
        Contact set_contact(int index, Contact contact);
};

class	Contact
{
	private:
		string	firs_name;
		string	last_name;
		string	nick_name;
		string	phone_num;
		string	secret;
	public:
		Contact(void);
		~Contact(void);
		/* Getters and setters */
		string	get_first_name(void);
		string	get_last_name(void);
		string	get_nick_name(void);
		string	get_phone_num(void);
		string	get_secret(void);
		void	set_first_name(string first_name);
		void	set_last_name(string last_name);
		void	set_nick_name(string nick_name);
		void	set_phone_num(string phone_num);
		void	set_secret(string secret);
		/* Methods */
	
};


#endif