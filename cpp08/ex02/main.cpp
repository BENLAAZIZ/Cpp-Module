/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:16:43 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/18 19:02:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);


	mstack.push(0);
	std::cout << "--------------------------" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << "=========================================" << std::endl;

	// MutantStack<int>::iterator it2 = mstack.begin();
	// MutantStack<int>::iterator ite2 = mstack.end();

	std::list<int> l;
	l.push_front(5);
	l.push_front(17);
	std::list<int>::iterator itl = l.begin();
	std::cout << *itl << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_front(3);
	l.push_front(5);
	l.push_front(737);


	l.push_front(0);
	std::cout << "--------------------------" << std::endl;
	itl = l.begin();
	std::list<int>::iterator itel = l.end();
	++itl;
	--itl;
	while (itl != itel)
	{
	std::cout << *itl << std::endl;
	++itl;
	}
	

	
	
	return 0;
}