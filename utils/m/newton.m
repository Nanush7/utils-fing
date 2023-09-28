function polinomio = newton(x, y)
    n = length(x);
  
    tabla = zeros(n,n);
    tabla(:, 1) = y;
    for j = 2:n
      for i = 1:n-j+1
        numerador = tabla(i+1,j-1) - tabla(i,j-1);
        denominador = x(i+j-1) - x(i);
        tabla(i,j) = numerador / denominador;
      endfor
    endfor
  
    a = tabla(1, :);
    polinomio = @(abscisa)(horner(abscisa,a,x));
  endfunction
  
  function evaluacion = horner(abscisa, coeficientes, nodos)
      n = length(coeficientes);
      evaluacion = coeficientes(n);
      for i = (n - 1):-1:1 % for decreciente.
          evaluacion = evaluacion .* (abscisa - nodos(i)) + coeficientes(i);
      end
  end