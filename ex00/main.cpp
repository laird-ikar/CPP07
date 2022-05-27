/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 08:20:24 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 09:21:42 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
	std::cout << "min(66, 42): " << min<int>(66, 42) << std::endl;
	std::cout << "min(95984894, 42.42): " << min<double>(95984894, 42.42) << std::endl;
	std::cout << "max(' ', '*'): " << max<char>(' ', '*') << std::endl;
	float	s1 = 42.42f;
	float	s2 = -42.42f;
	std::cout << "s1: " << s1 << std::endl;
	std::cout << "s2: " << s2 << std::endl;
	swap<float>(s1, s2);
	std::cout << "swaaap" << std::endl;
	std::cout << "s1: " << s1 << std::endl;
	std::cout << "s2: " << s2 << std::endl;
	return 0;
}
