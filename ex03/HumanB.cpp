/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshimurahiro <yoshimurahiro@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:33:57 by yoshimurahi       #+#    #+#             */
/*   Updated: 2025/01/10 13:07:08 by yoshimurahi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) { this->_weapon = &weapon; }

void HumanB::attack() const {
  if (_weapon) {
    std::cout << _name << " attacks with their " << _weapon->getType()
              << std::endl;
  } else {
    std::cout << _name << " has no weapon" << std::endl;
  }
}
