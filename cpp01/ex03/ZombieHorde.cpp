/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:31:04 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:41:53 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

const std::string NAMES[] = {
    "Joe \"Chomped a Bear\" Walker",
    "Andy \"Nibbled a Pigeon\" Edwards",
    "Brian \"Bit a Rat\" Roberts",
    "Dave \"Crushed a Toe\" Jones",
    "Brian \"Munched a Bear\" Brown",
    "James \"Scoffed a Radio\" Lee",
    "Bill \"Bit a Hand\" Thomas",
    "Pete \"Munched a Rat\" Miller",
    "Jack \"Nibbled a Hand\" Green",
    "Brian \"Crushed a Squirrel\" Green",
};

static std::string getRandomName()
{
    return (NAMES[rand() % 10]);
}

ZombieHorde::ZombieHorde(int N): _n(N)
{
	_zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		_zombies[i] = Zombie("Horde zombie", getRandomName());
}

ZombieHorde::~ZombieHorde()
{
	delete[] _zombies;
}

void ZombieHorde::announce() const
{
	for (int i = 0; i < _n; i++)
		_zombies[i].announce();
}
