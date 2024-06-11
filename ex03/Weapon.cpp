/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshimurahiro <yoshimurahiro@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:33:26 by yoshimurahi       #+#    #+#             */
/*   Updated: 2024/06/10 15:24:44 by yoshimurahi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string const &Weapon::getType()
{
    return (this->type);
}
