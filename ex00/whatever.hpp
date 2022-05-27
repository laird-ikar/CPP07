/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 08:21:00 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 09:17:09 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	min(T a, T b)
{
	return (a < b ? a : b);
}

template <class T>
T	max(T a, T b)
{
	return (a > b ? a : b);
}
