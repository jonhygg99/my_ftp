/*
** struct.c for PSU_2015_myftp
**
** Made by	Axel Vencatareddy
** Login	vencat_a
**
** Started on	Tue May 10 20:56:51 2016 Axel Vencatareddy
** Last update	Tue May 10 20:58:14 2016 Axel Vencatareddy
*/

#include "server.h"
#include <linux/limits.h>

void	init_struc(t_ptr *my_struc, int fd_client, int fd_sock, char *root)
{
  my_struc->client_fd = fd_client;
  my_struc->server_fd = fd_sock;
  my_struc->end = false;
  my_struc->is_connected = false;
  my_struc->user = NULL;
  chdir(root);
  my_struc->pwd_to_free = malloc(sizeof(char) * (PATH_MAX + 1));
  my_struc->pwd = my_struc->pwd_to_free;
  my_struc->root_dir = get_current_dir_name();
  my_struc->mode = NOPE;
}