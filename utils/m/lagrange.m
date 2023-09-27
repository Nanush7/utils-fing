function w = lagrange (x, y, v)

  n = columns(x);
  k = columns(v);
  w = zeros(1, k);

  % Se calcula el polinomio interpolante usando la forma de Lagrange.
  for j = 1 : k
    for i = 1 : n
      L = ones(1, n);
      for m = 1 : n
        if (m != i)
            L(i) *= (v(j) - x(m))/(x(i) - x(m));
        endif
      endfor
      w(j) += y(i)*L(i);
    endfor
  endfor

endfunction
