/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:03:22 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/26 13:48:36 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{
	Point	a(1, 2);
	Point	b(1, 4);
	Point	c(3, 3);

	Point	p(5, 5);
	bsp(a, b, c, p);
	
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	Point	v1(a.getX() + (b.getX() - a.getX()), a.getY() + (b.getY() - a.getY()));
	Point	v2(b.getX() + (c.getX() - b.getX()), c.getY() + (c.getY() - b.getY()));
	Point	v3(c.getX() + ((a.getX() - c.getX())), c.getY() + (a.getY() - c.getY()));

	Point	on_v1(v1.getX() * p.getX(), v1.getY());
	Point	on_v2(v2.getX() * p.getX(), v2.getY());
	Point	on_v3(v3.getX() * p.getX(), v3.getY());

	
	return 1;
}