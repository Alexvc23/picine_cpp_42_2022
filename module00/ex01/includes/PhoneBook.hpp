/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:47:04 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/14 10:59:25 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "../includes/Contact.hpp"

class PhoneBook
{
	public:
		// Constructors
		PhoneBook();
		PhoneBook(const PhoneBook &copy);
		
		// Destructor
		~PhoneBook();
		
		// Operators
		PhoneBook & operator=(const PhoneBook &assign);

		//Functions
		int		counter (void);
		void	addContact(int current_index);
		void	callSearch(void);
		int		oldestIndex(void);
		
	private:
		Contact _t[8];
		//variables
};

void check_cin(void);

#endif