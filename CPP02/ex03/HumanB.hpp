/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:43 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/07 21:00:44 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *wpn;
    public :
        HumanB(std::string name);
        std::string getName();
        void setWeapon(Weapon &wpn);
        Weapon *getWeapon();
        void attack();
};

#endif