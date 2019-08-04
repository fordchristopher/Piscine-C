# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chford <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/02 08:23:06 by chford            #+#    #+#              #
#    Updated: 2018/11/02 08:28:35 by chford           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
VAR=`ifconfig | grep "inet" | grep -v "::" | grep -v "broadcast" | awk '{print $2}'`
if [ ${#VAR} -ge 0 ]; then
	echo "$VAR"
else
	echo "I am lost!"
fi