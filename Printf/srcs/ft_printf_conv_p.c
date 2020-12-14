
#include "../includes/ft_printf.h"

void	ft_printf_conv_p(t_var_printf *var, va_list ap)
{
  void	*nb;

  nb = va_arg(ap, void*);
  var->conv_ullong = (unsigned long long int)nb;
  var->ubase = 16;
  var->str_base = "0123456789abcdef";
  var->size = ft_unbrlen_base(var->conv_ullong, var->ubase);
  if ((var->have_pres) && (var->size < var->pres))
    {
      var->pres_zero = var->pres - var->size;
      var->size = var->pres;
    }
  var->sharp = 1;
  var->size = var->size + 2;
}
