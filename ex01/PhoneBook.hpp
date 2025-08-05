/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:51:03 by ghwa              #+#    #+#             */
/*   Updated: 2025/08/05 15:26:06 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <limits>
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void addContact(const Contact& contact);
		void displayContacts() const;
		void searchContact() const;

	private:
		std::vector<Contact> contacts;
		int	oldestIndex;
		std::string truncateText(const std::string& text) const;
} ;
