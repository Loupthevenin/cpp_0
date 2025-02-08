/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:39:29 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/08 15:12:30 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

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
  void print_contact(int index);
  int get_count();
};

#endif
