/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:52 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/07 21:00:56 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon(std::string type);
        std::string const &getType();
        void setType(std::string newType);
};

#endif