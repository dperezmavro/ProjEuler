#lang racket

(define main
  (lambda (current sum)
    (if (< current 1000)
        (if (or
         (= (modulo current 3) 0)
         (= (modulo current 5) 0))
            (main (+ 1 current) (+ sum current))
            (main (+ 1 current) sum))
        sum)))