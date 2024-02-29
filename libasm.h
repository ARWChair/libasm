/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libashm.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:30:09 by yatabay           #+#    #+#             */
/*   Updated: 2024/02/29 17:37:57 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

int		ft_strlen(char *s);
int		ft_strcmp(char *ch1, char *ch2);
int		ft_write(int fd, char *text, int len);
int		ft_read(int fd, char *text, int len);
void	ft_strcpy(char *ch1, char *ch2);
char	*ft_strdup(char *str);

#endif