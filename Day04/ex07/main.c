#include <unistd.h>
#include <stdio.h>
#include "ft_find_next_prime.c"

int ft_find_next_prime(int nb);

int main(void)
{
  int c;

  c = ft_find_next_prime(-2);
  printf("%d\n",c);
  c = ft_find_next_prime(-1);
  printf("%d\n",c);
  c = ft_find_next_prime(0);
  printf("%d\n",c);
  c = ft_find_next_prime(1);
  printf("%d\n",c);
  c = ft_find_next_prime(2);
  printf("%d\n",c);
  c = ft_find_next_prime(3);
  printf("%d\n",c);
  c = ft_find_next_prime(4);
  printf("%d\n",c);
  c = ft_find_next_prime(5);
  printf("%d\n",c);
  c = ft_find_next_prime(6);
  printf("%d\n",c);
  c = ft_find_next_prime(8);
  printf("%d\n",c);
  c = ft_find_next_prime(14);
  printf("%d\n",c);
  c = ft_find_next_prime(20);
  printf("%d\n",c);
  return (0);
}
