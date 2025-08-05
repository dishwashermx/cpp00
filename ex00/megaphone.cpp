/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:59:42 by ghwa              #+#    #+#             */
/*   Updated: 2024/03/04 15:59:42 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; ++i) {
		std::string arg(argv[i]);
		for (std::size_t j = 0; j < arg.size(); ++j) {
			std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(arg[j])));
		}
	}
	std::cout << std::endl;
	return 0;
}
