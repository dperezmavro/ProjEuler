#lang racket

(define main
  (lambda (prime_list current_number bound)
    (if (< current_number bound)
        (if (prime? current_number)
            (main (cons current_number prime_list) (+ 2 current_number) bound)
            (main prime_list (+ current_number 2) bound))
        (sum? prime_list 0)
        )))

(define prime?
  (lambda (n)
    (if (or
         (= (modulo (- n 1) 6 ) 0)
         (= (modulo (+ n 1) 6 ) 0))
        #t
        #f)))                

(define sum?
  (lambda (l sum)
    (if (null? l)
        sum
        (sum? (cdr l) (+ sum (car l))))))