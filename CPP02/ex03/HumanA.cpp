/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:36 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/10 19:04:22 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn): wpn(wpn){
    this->name = name;
}

std::string HumanA::getName()
{
    return name;
}

Weapon HumanA::getWeapon()
{
    return wpn;
}

void HumanA::attack()
{
    Weapon wpnAttak = getWeapon();
    std::string const &ref = wpnAttak.getType();
    std::cout << getName() << ": " <<  "attacks with their " << ref << "\n";
}