/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:55:19 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/05 17:13:41 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    Base *f = new A();
    Base* ptr = generate();

    f = generate();
    


    std::cout << "--- Using pointer ---\n";
    identify(f);

    std::cout << "--- Using reference ---\n";
    identify(*f);

    delete ptr;
    return 0;
}