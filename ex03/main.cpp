/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:03:22 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/29 14:58:30 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	//TRIANGLE 1
	Point a1(2.5f, 1.5f);
	Point b1(7.0f, 1.5f);
	Point c1(3.5f, 9.0f);

	Point p1(4.0f, 3.5f);	//true
	Point p2(10.0f, 3.5f);	//false
	
	if (bsp(a1, b1, c1, p1) == true)
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;

	//TRIANGLE 2
	Point a2(-2.0f, 10.0f);
	Point b2(7.0f, -3.0f);
	Point c2(10.0f, 9.0f);

	Point p3(5.0f, 3.0f);	//true
	Point p4(8.0, 0.0f);	//false
	if (bsp(a1, b1, c1, p2) == true)
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;

	return (0); 
}
