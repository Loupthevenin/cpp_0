/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:53:13 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/08 15:23:07 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include <iostream>

Contact::Contact() {}

void Contact::set_contact(std::string first_name, std::string last_name,
                          std::string nickname, std::string phone_number,
                          std::string darkest_secret) {
  this->first_name = first_name;
  this->last_name = last_name;
  this->nickname = nickname;
  this->phone_number = phone_number;
  this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name() { return (this->first_name); }

std::string Contact::get_last_name() { return (this->last_name); }

std::string Contact::get_nickname() { return (this->nickname); }

void Contact::print_contact() {
  std::cout << "First name: " << this->first_name << std::endl
            << "Last name: " << this->last_name << std::endl
            << "Nickname: " << this->nickname << std::endl
            << "Phone number: " << this->phone_number << std::endl
            << "Darkest secret: " << this->darkest_secret << std::endl;
}
