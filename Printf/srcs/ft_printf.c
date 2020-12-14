
#include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
  t_var_printf		var;
  va_list		ap;

  va_start(ap, format);
  ft_printf_var_init(&var);
  ft_printf_format(format, &var, ap);
  va_end (ap);
  return (var.ret);
}
