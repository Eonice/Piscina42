/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricferna <ricferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:11:35 by ricferna          #+#    #+#             */
/*   Updated: 2023/02/12 22:14:29 by ricferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void llenar_tablero(char **str2)
{
  int x;
  int y;

  x = 1;
  y = 1;

  while (y <= 4)
  {
	x = 1;
    while (x <= 4)
    {
      str2[y][x] = 'x';
    x++;
    }
  y++;
  }
}

void pintar_tablero(char **str2)
{
  int x;
  int y;

  x = 0;
  y = 0;

  while (y <= 5)
  {
	x = 0;
    while (x <= 5)
    {
      ft_putchar(str2[y][x]);
	    ft_putchar(' ');
    x++;
    }
    ft_putchar('\n');
  y++;
  }
}

void  llenar_pistas(char **str2)
{
  
  int x;
  int y;

  x = 1;
  y = 0;

//Rellenar los 4 al lado de los 1
  while (x <= 4)
  {
    if (str2[y][x] == '1')
    {
      str2[1][x] = '4';
    }
    
  x++;
  }
  
  x = 1;
  y = 5;
  while (x <= 4)
  {
    if (str2[y][x] == '1')
    {
      str2[4][x] = '4';
    } 
  x++;
  }

  x = 0;
  y = 1;
  while (y <= 4)
  {
    if (str2[y][x] == '1')
    {
      str2[y][1] = '4';
    } 
  y++;
  }
  x = 5;
  y = 1;
  while (y <= 4)
  {
    if (str2[y][x] == '1')
    {
      str2[y][4] = '4';
    } 
  y++;
  }
//Rellenar los 1234 si en un extremo es 4 y en otro 1

  x = 1;
  y = 0;
  while (x <= 4)
  {
    if (str2[y][x] == '4')
    {
      str2[1][x] = '1';
      str2[2][x] = '2';
      str2[3][x] = '3';
      str2[4][x] = '4';
    }
    
  x++;
  }
  
  x = 1;
  y = 5;
  while (x <= 4)
  {
    if (str2[y][x] == '4')
    {
      str2[4][x] = '1';
      str2[3][x] = '2';
      str2[2][x] = '3';
      str2[1][x] = '4';
    }
    
  x++;
  }

  x = 0;
  y = 1;
  while (y <= 4)
  {
    if (str2[y][x] == '4')
    {
      str2[y][1] = '1';
      str2[y][2] = '2';
      str2[y][3] = '3';
      str2[y][4] = '4';
    }
    
  y++;
  }
  x = 5;
  y = 1;
  while (y <= 4)
  {
    if (str2[y][x] == '4')
    {
      str2[y][4] = '1';
      str2[y][3] = '2';
      str2[y][2] = '3';
      str2[y][1] = '4';
    }
  y++;
  }


}

//seleccionador filas que contenga el 4 en el principio
void  find_row_4l(char **str2)
{
  int x;
  int y;
  int i;
  int j;
  int k;

  x = 0;
  y = 1;
  while (y <= 4)
  {
    if (str2[y][0] == '1')
    {
      str2[y][1] = '4';
      
      i = 1;
      j = 1;
      k = 1;

      while (i <= 3)
      {
        j = 1;
        while (j <= 3)
        {
          k = 1;
          while (k <= 3)
          {
            if (i != j && j != k  && i != k )
            {
              str2[y][2] = i+'0';
              str2[y][3] = j+'0';
              str2[y][4] = k+'0';
              find_row_4r(str2, y);
            }
            k++;
          }
          j++;
        }
        i++;
      }
    }
  y++;
  }
}

void  find_row_4r(char **str2, int row4l)
{
  int x;
  int y;
  int i;
  int j;
  int k;

  x = 0;
  y = 1;
  while (y <= 4)
  {
    if (str2[y][5] == '1')
    {
      str2[y][4] = '4';
      
      i = 1;
      j = 1;
      k = 1;

      while (i <= 3)
      {
        j = 1;
        while (j <= 3)
        {
          k = 1;
          while (k <= 3)
          {
            if (i != j && j != k  && i != k)
            {
              str2[y][1] = i+'0';
              str2[y][2] = j+'0';
              str2[y][3] = k+'0';
              find_row_4cl(str2, row4l, y);
            }
            k++;
          }
        j++;
        }
      i++;
      }  
    }
  y++;
  }
}

void  find_row_4cl(char **str2, int row4l, int row4r)
{
  int x;
  int y;
  int i;
  int j;
  int k;

  x = 2;
  y = 1;
  while (y <= 4)
  {

    if (y != row4l && y != row4r)
    {
      str2[y][x] = '4';
      
      i = 1;
      j = 1;
      k = 1;

      while (i <= 3)
      {
        j = 1;
        while (j <= 3)
        {
          k = 1;
          while (k <= 3)
          {
            if (i != j && j != k  && i != k)
            {
              str2[y][1] = i+'0';
              str2[y][2] = j+'0';
              str2[y][3] = k+'0';
            }
            k++;
          }
        j++;
        }
      i++;
      }  
    }
    x++;
  y++;
  }
}



void llenar_bordes(char *str1, char **str2) {
  
  //str2[6][6];
  
  //llenado de bordes y de centro.
  str2[0][0]='*';
  str2[5][0]='*';
  str2[0][5]='*';
  str2[5][5]='*';
  
  int x;
  int y;
  int i;
  
  x = 1;
  y = 0;
  i = 0;
  
  while (x <= 4)
  {
    str2[y][x] = str1[i];
    x++;
    i=i+2;
  }
  y=5;
  x=1;
  
  while (x <= 4)
  {
    str2[y][x] = str1[i];
    x++;
    i=i+2;
  }
  y=1;
  x=0;
  
  while (y <= 4)
  {
    str2[y][x] = str1[i];
    y++;
    i=i+2;
  }
  y=1;
  x=5;
  
  while (y <= 4)
  {
    str2[y][x] = str1[i];
    y++;
    i=i+2;
  }
}

int main(void)
{
  int j;

  j=0;
  char str1[] = "1 2 2 3 3 2 2 1 1 2 2 3 3 2 2 1";
  char **str2=(char **)malloc(6*sizeof(char *));
  
    while (j < 6)
    {
      str2[j]=(char *)malloc(6*sizeof(char));
      j++;
    }
  //p = &str2;
  llenar_tablero(str2);
  llenar_bordes(str1,str2);
  //llenar_pistas(str2);
  find_row_4l(str2);
  

  pintar_tablero(str2);
	j = 0;
	while (j < 6)
	{
		free(str2[j]);
		j++;
	}
	free(str2);
	
  return (0);  
}
