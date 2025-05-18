/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:55:19 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/08 15:48:54 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    
    Base* f = generate();
    Base* ptr;

    std::cout << "--- Using pointer ---\n";
    identify(f);
    if (f)
    {
        std::cout << "--- Using reference ---\n";
        identify(*f);
    }
    else
    {
        std::cout << "--- Using reference ---\n";
        std::cout << "Invalid reference: pointer is NULL\n";
    }

    std::cout << "--- Using pointer ---\n";
    ptr = NULL;
    identify(ptr);
    
    if (ptr)
    {
        std::cout << "--- Using reference ---\n";
        identify(*ptr);
    }
    else
    {
        std::cout << "--- Using reference ---\n";
        std::cout << "Invalid reference: pointer is NULL\n";
    }

    
    std::cout << "\n--- Testing with Base (not derived) ---\n";
    Base baseObj;
    identify(baseObj);

    delete ptr;
    delete f;
    return 0;
}