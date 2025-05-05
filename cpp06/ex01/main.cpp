/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:22:38 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/05 16:41:48 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data original;
    original.age = 1337;
    original.name = "hamza";

    std::cout << "Original address: " << &original << std::endl;

    uintptr_t raw = Serializer::serialize(&original);
    std::cout << "Serialized (uintptr_t): " << raw << std::endl;

    Data* deserialized = Serializer::deserialize(raw);
    std::cout << "Deserialized address: " << deserialized << std::endl;

    std::cout << "ID: " << deserialized->age << std::endl;
    std::cout << "Name: " << deserialized->name << std::endl;

    return 0;
}