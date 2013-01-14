#lang racket
;doesn't faken work

(define main
  (lambda (prime_list current_number count bound)
    (if (= count bound)
        (if (prime? current_number)
            (main (cons current_number prime_list) (+ current_number 1) (+ count 1) bound)
            (main prime_list (+ current_number 1) count bound))
        ;(car prime_list)
        prime_list
        )))

(define prime?
  (lambda (n)
    (if (or
         (= (modulo (- n 1) 6 ) 0)
         (= (modulo (+ n 1) 6 ) 0))
        #t
        #f)))   
