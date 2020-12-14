
#include "../includes/ft_printf.h"

void	ft_printf_no_conv(t_var_printf *var)
{
  var->conv_char = var->spec;
  var->size = 1;
}
