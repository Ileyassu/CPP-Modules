/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:22 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/12 11:51:28 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0 || name.empty())
        return (NULL);
    Zombie *ptr;
    ptr = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        ptr[i].set_name(name);
    }
    return (ptr);
}