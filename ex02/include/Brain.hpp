/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:04:55 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 08:58:53 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain( const Brain &other );
		Brain &operator=( const Brain &other );
		~Brain();
		// setter & getter
		void setIdea( int idx, const std::string &newIdea );
		std::string getIdea( int idx ) const;
};

#endif