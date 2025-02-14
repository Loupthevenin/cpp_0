/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:57:47 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/14 11:16:34 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() {
  count = 0;
  i = 0;
};

void PhoneBook::addcontact(std::string &first_name, std::string &last_name,
                           std::string &nickname, std::string &phone_number,
                           std::string &darkest_secret) {
  if (i < 8) {
    contacts[i].set_contact(first_name, last_name, nickname, phone_number,
                            darkest_secret);
  } else {
    contacts[7].set_contact(first_name, last_name, nickname, phone_number,
                            darkest_secret);
  }
  if (i < 8)
    i++;
  count++;
}

std::string truncate(std::string str) {

  if (str.length() > 10)
    return str.substr(0, 9) + ".";
  return str;
}

void PhoneBook::print_contacts() {
  int j;

  j = 0;
  std::cout << std::setw(10) << "Index" << " | " << std::setw(10)
            << "first name"
            << " | " << std::setw(10) << "last name" << " | " << std::setw(10)
            << "nickname" << " | " << std::endl;
  while (j < 53) {
    std::cout << "-";
    j++;
  }
  std::cout << std::endl;
  j = 0;
  while (j < count && j < 8) {
    std::cout << std::setw(10) << j + 1 << " | " << std::setw(10)
              << truncate(contacts[j].get_first_name()) << " | "
              << std::setw(10) << truncate(contacts[j].get_last_name()) << " | "
              << std::setw(10) << truncate(contacts[j].get_nickname()) << " | "
              << std::endl;
    j++;
  }
}

int PhoneBook::print_contact(int index) {
  if (index < 1 || index > i || index > 8) {
    if (index > 8)
      std::cout << "Invalid index. Choose between 1 and 8" << std::endl;
    else
      std::cout << "Invalid index. Choose between 1 and " << i << std::endl;
    return 0;
  }
  contacts[index - 1].print_contact();
  return 1;
}

int PhoneBook::get_count() { return (this->count); }
