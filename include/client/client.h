/*
** client.h for my_ftp in /home/vencat_a/rendu/PSU/PSU_2015_myftp/include/client
** 
** Made by Axel Vencatareddy
** Login   <vencat_a@epitech.net>
** 
** Started on  Sat May 14 14:15:35 2016 Axel Vencatareddy
** Last update Sat May 14 14:15:35 2016 Axel Vencatareddy
*/

#ifndef CLIENT_H_
# define CLIENT_H_

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "socket_prot.h"

# define BUFSIZE 1024

typedef enum { false, true } bool;
typedef enum { PASV, ACTV, NOPE } data_mode;

typedef struct	s_client
{
  bool		is_end;
  bool		is_connected;
  char		**tab;
  char		*line;
  int		fd_server;
  int		fd_data;
  int		fd_socket;
  int		actual_port;
  data_mode	mode;
}		t_client;

int	my_pasv(t_client *);
int	my_port(t_client *);
int	my_exit(t_client *);
int	my_stor(t_client *);
int	my_retr(t_client *);
int	my_cl_list(t_client *);
void	init_struct(t_client *, int, int);
int	close_my_sockets(t_client *);
int	my_open(char *, int);
char	*my_ip(char *);
int	my_ptr_func(t_client *);

#endif /* !CLIENT_H_ */
