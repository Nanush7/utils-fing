#{
  INPUT: Recibe f, la función a la que le queremos hayar raices.

  INPUT: Recibe Jf, la jacobiana de f (como función).

  INPUT: Recibe x0, el primer iterado.

  INPUT: Recibe tol, tolerancia para la condicion de parada.

  INPUT: Recibe max_iter, la máxima cantidad de iteraciones que se harán.


  OUTPUT: Retorna en x la solucion hallada a la ecuacion f(x)=0.
#}
function x = newtonRaphson (f, Jf, x0, tol, max_iter=1000)
  k = 0;
  x = x0;

  while norm(f(x)) > tol && k < max_iter
    b = -f(x);
    A = Jf(x);
    d = A\b;
    x = x + d;
    k++;
  endwhile
endfunction
