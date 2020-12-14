
#include "../includes/ft_printf.h"

void	ft_printf_conv_min_s(t_var_printf *var, va_list ap)
{
  var->conv_str = va_arg(ap, char*);
  if (!var->conv_str)
    var->conv_str = "(null)";
  var->size = ft_strlen(var->conv_str);
  if ((var->have_pres) && (var->size > var->pres))
    var->size = var->pres;
}

void	ft_printf_conv_min_s_l(t_var_printf *var, va_list ap)
{
  var->wstr = va_arg(ap, wchar_t*);
  if (var->wstr)
    {
      while (var->wstr[var->i])
	{
	  var->wchar = var->wstr[var->i];
	  var->conv_temp = ft_memalloc(5);
	  ft_printf_conv_unicode(var);
	  var->size_temp = ft_strlen(var->conv_temp);
	  if ((!var->have_pres) || ((var->have_pres) &&
				      (var->size + var->size_temp) <= var->pres))
	    {
	      var->conv_str = ft_strjoin_free(var->conv_str,
						var->conv_temp);
	      var->size = ft_strlen(var->conv_str);
	    }
	  var->i = var->i + 1;
	}
    }
  else
    {
      var->conv_str = ft_strdup("(null)");
      var->size = 6;
    }
}

void	ft_printf_conv_s(t_var_printf *var, va_list ap)
{
  if (var->l)
    ft_printf_conv_min_s_l(var, ap);
  else
    ft_printf_conv_min_s(var, ap);
}
