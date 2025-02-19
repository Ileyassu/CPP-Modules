/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:00:09 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/10 20:43:17 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *npcs = zombieHorde(4, "ZmbV2");
    if(npcs == NULL)
       return (1);
    for(int i = 0; i < 4; i++)
        npcs[i].announce();
    delete[] npcs;
}
