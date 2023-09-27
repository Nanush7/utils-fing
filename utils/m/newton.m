function polinomio = newton(x, y)
  n = length(x);
  if (n == 1)
    polinomio = @(x)(y(1));
  else
    x_corto = x(1:(n-1));
    y_corto = y(1:(n-1))
    pn_1 = newton(x_corto, y_corto);

    polinomio = @(t)(pn_1(t) + (y(n) - pn_1(x(n)))*prod(t-x_corto)/prod(x(n)-x_corto))
  endif
endfunction
