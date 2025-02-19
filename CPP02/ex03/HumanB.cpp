/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:40 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/08 13:57:28 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->wpn = NULL;
    this->name = name;
}

std::string HumanB::getName()
{
    return name;
}

void HumanB::setWeapon(Weapon &wpn)
{
    this->wpn = &wpn;
}

Weapon *HumanB::getWeapon()
{
    return wpn;
}

void HumanB::attack()
{
    if (this->wpn == NULL)
    {
        return;
    }
    std::cout << getName() << ": " << "attacks with their " << getWeapon()->getType() << "\n";
}
