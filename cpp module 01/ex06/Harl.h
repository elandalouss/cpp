/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:02:30 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 22:04:24 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H
#include <iostream>

class Harl {
    private :
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
	public :
		void    complain(std::string level);
};

#endif