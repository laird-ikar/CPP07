/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:42:47 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 10:48:15 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/***********************
*	Constructors & Destructor
***********************/

Array::Array(void)
{
	return ;
}

Array::Array( constArray &src)
{
	*this = src;
	return ;
}

Array::~Array(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Array	&Array::operator=(const Array &src)
{
	return (*this);
}

/***********************
*	Boolean Operators
***********************/

/***********************
*	Arithmetic Operators
***********************/

/***********************
*	Stream Operators
***********************/

/***********************
*	Getter & Setters
***********************/

/***********************
*	Methods
***********************/
