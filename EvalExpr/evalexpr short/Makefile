# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 20:31:54 by hbhuiyan          #+#    #+#              #
#    Updated: 2018/09/09 20:34:33 by hbhuiyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@echo 'set -f; echo $$1 | bc' > eval_expr
	@chmod 755 eval_expr

clean:
	@chmod 755 Makfile

fclean : clean
	@rm -f eval_expr

re: fclean all
