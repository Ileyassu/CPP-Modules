/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:16 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/10 18:46:47 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie();
        Zombie(std::string name);
        std::string get_name();
        void set_name(std::string name);
        void announce();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif