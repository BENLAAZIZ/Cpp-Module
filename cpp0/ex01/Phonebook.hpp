#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>

using namespace std;

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
		string	get_fname(void) const;
		string	get_lname(void) const;
		string	get_nick(void) const;
		string	get_phone_num(void) const;
		string	get_secret(void) const;
		void	set_fname(string str);
		void	set_lname(string str);
		void	set_nick(string str);
		void	set_phone_num(string str);
		void	set_secret(string str);
};


#endif