
#include "../includes/ft_printf.h"

void	ft_printf_conv_min_u_h(t_var_printf *var, va_list ap)
{
  unsigned short int	nb;

  nb = va_arg(ap, unsigned int);
  var->conv_ullong = (unsigned long long int)nb;
  var->ubase = 10;
  var->str_base = "0123456789";
  var->size = ft_unbrlen_base(var->conv_ullong, var->ubase);
  if ((var->have_pres) && (var->size < var->pres))
    {
      var->pres_zero = var->pres - var->size;
      var->size = var->pres;
    }
  if (var->neg == 1)
    var->size = var->size + 1;
}

void	ft_printf_conv_min_u_hh(t_var_printf *var, va_list ap)
{
  unsigned char	nb;

  nb = va_arg(ap, unsigned int);
  var->conv_ullong = (unsigned long long int)nb;
  var->ubase = 10;
  var->str_base = "0123456789";
  var->size = ft_unbrlen_base(var->conv_ullong, var->ubase);
  if ((var->have_pres) && (var->size < var->pres))
    {
      var->pres_zero = var->pres - var->size;
      var->size = var->pres;
    }
  if (var->neg == 1)
    var->size = var->size + 1;
}

void	ft_printf_conv_min_u_l(t_var_printf *var, va_list ap)
{
  unsigned long int	nb;

  nb = va_arg(ap, unsigned long int);
  var->conv_ullong = (unsigned long long int)nb;
  var->ubase = 10;
  var->str_base = "0123456789";
  var->size = ft_unbrlen_base(var->conv_ullong, var->ubase);
  if ((var->have_pres) && (var->size < var->pres))
    {
      var->pres_zero = var->pres - var->size;
      var->size = var->pres;
    }
  if (var->neg == 1)
    var->size = var->size + 1;
}

void	ft_printf_conv_min_u_ll(t_var_printf *var, va_list ap)
{
  unsigned long long int	nb;

  nb = va_arg(ap, unsigned long long int);
  var->conv_ullong = (unsigned long long int)nb;
  var->ubase = 10;
  var->str_base = "0123456789";
  var->size = ft_unbrlen_base(var->conv_ullong, var->ubase);
  if ((var->have_pres) && (var->size < var->pres))
    {
      var->pres_zero = var->pres - var->size;
      var->size = var->pres;
    }
  if (var->neg == 1)
    var->size = var->size + 1;
}
