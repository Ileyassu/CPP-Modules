/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:38 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/10 19:04:06 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private :
    std::string name;
        Weapon &wpn;
    public :
        HumanA(std::string name, Weapon &wpn);
        std::string getName();
        Weapon getWeapon();
        void attack();
};

#endif