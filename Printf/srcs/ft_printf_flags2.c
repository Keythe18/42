
#include "../includes/ft_printf.h"

int	ft_printf_flag_zero(t_var_printf *var)
{
  if (var->zero)
    {
      if ((var->have_pres) && (var->spec == 'd'
	|| var->spec == 'i' || var->spec == 'o'
	|| var->spec == 'O' || var->spec == 'U'
	|| var->spec == 'x' || var->spec == 'X'))
	return (0);
      else
	return (1);
    }
  return (0);
}
