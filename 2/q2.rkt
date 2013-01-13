(define main
  (lambda (lst sum)
    (if (< (car lst) 4000000)
        (main (cons (next lst) lst) (adder sum (next lst)))
        sum)))

(define next
  (lambda (l)
    (+ (car l) (cadr l))))
         
(define adder
  (lambda (sum term)
    (if (and (< term 4000000) (= (modulo term 2) 0))
        (+ sum term)
        sum)))