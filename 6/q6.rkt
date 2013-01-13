(define main
  (lambda ()
    (- (sq_sum 1 0) (sum_sq 1 0))))

(define sum_sq
  (lambda (curr sum)
    (if (<= curr 100)
        (sum_sq (+ 1 curr) (+ (* curr curr) sum))
        sum)))

(define sq_sum
  (lambda (curr sum)
    (if (<= curr 100)
        (sq_sum (+ 1 curr) (+ curr sum))
        (* sum sum))))