/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:59:30 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/08 16:50:05 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <sstream>

int main(int argc, char **argv) {
  int i;
  int check_digit;
  std::string choice;
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secret;
  std::string index_str;
  int index;

  (void)argc;
  (void)argv;
  PhoneBook book;
  std::cout << "PhoneBook !!\n" << std::endl;
  while (1) {
    std::cout << "ADD, SEARCH, EXIT" << std::endl;
    if (!std::getline(std::cin, choice))
      break;
    if (choice == "ADD") {
      std::cout << "Enter first name: ";
      if (!std::getline(std::cin, first_name) || first_name.empty())
        continue;
      std::cout << "Enter last name: ";
      if (!std::getline(std::cin, last_name) || last_name.empty())
        continue;
      std::cout << "Enter nickname: ";
      if (!std::getline(std::cin, nickname) || nickname.empty())
        continue;
      std::cout << "Enter phone number: ";
      if (!std::getline(std::cin, phone_number) || phone_number.empty())
        continue;
      std::cout << "Enter darkest secret: ";
      if (!std::getline(std::cin, darkest_secret) || darkest_secret.empty())
        continue;
      book.addcontact(first_name, last_name, nickname, phone_number,
                      darkest_secret);
    } else if (choice == "SEARCH") {
      if (book.get_count() == 0) {
        std::cout << "No contacts in the PhoneBook !" << std::endl;
        continue;
      }
      book.print_contacts();
      while (1) {
        std::cout << "Enter index: ";
        if (!std::getline(std::cin, index_str))
          return 0;
        if (index_str.empty()) {
          std::cout << "Invalid input. Enter a number." << std::endl;
          continue;
        }
        i = 0;
        check_digit = 1;
        while (index_str[i]) {
          if (index_str[i] < '0' || index_str[i] > '9') {
            check_digit = 0;
            break;
          }
          i++;
        }
        if (!check_digit) {
          std::cout << "Invalid input. Enter a number." << std::endl;
          continue;
        }
        std::stringstream ss(index_str);
        if (!(ss >> index)) {
          std::cout << "Invalid input. Enter a number." << std::endl;
          continue;
        }
        if (index < 1 || index > book.get_count())
          std::cout << "Invalid index. Choose between 1 and "
                    << book.get_count() << std::endl;
        else {
          book.print_contact(index - 1);
          break;
        }
        i++;
      }
    } else if (choice == "EXIT") {
      exit(EXIT_SUCCESS);
    }
  }
  return 0;
}
