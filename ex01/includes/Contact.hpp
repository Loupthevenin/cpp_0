/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:41:26 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/14 10:10:01 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secret;

public:
  Contact();
  void set_contact(std::string first_name, std::string last_name,
                   std::string nickname, std::string phone_number,
                   std::string darkest_secret);
  std::string get_first_name();
  std::string get_last_name();
  std::string get_nickname();
  void print_contact();
};

#endif
