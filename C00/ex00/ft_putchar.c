/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 12:40:02 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/07/26 12:48:33 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Write a function that displays the character passed as a parameter. 
// Allowed functions: write.
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
