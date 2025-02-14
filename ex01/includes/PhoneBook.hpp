/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:39:29 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/14 10:56:38 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
  Contact contacts[8];
  int count;
  int i;

public:
  PhoneBook();
  void addcontact(std::string &first_name, std::string &last_name,
                  std::string &nickname, std::string &phone_number,
                  std::string &darkest_secret);
  void print_contacts();
  int print_contact(int index);
  int get_count();
};

std::string truncate(std::string str);

#endif
