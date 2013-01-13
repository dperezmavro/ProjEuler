#lang racket

(printf "Hello ~a \n" "dio")

(define fact
    (lambda (tot rem)
    	(if (> rem 1)
	    (fact (* tot rem) (- rem 1))
	    tot)))

(define break
    (lambda (n)
        (if (< n 10)
	    (list n)
	    (append (break (floor (/ n 10)))
	            (list (- n (* 10 (floor (/ n 10)))))))))

(define suma
    (lambda (lst)
        (if (null? lst)
	    0
	    (+ (car lst) (suma (cdr lst))))))

(suma (break (fact 1 100)))
