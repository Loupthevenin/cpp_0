/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:57:47 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/08 16:20:52 by ltheveni         ###   ########.fr       */
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
  contacts[i].set_contact(first_name, last_name, nickname, phone_number,
                          darkest_secret);
  if (i < 7)
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

void PhoneBook::print_contact(int index) { contacts[index].print_contact(); }

int PhoneBook::get_count() { return (this->count); }
