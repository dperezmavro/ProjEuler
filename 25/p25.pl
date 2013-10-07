#!/usr/bin/perl
use bignum;

$n1 = 1 ;
$n2 =1 ;
$next = 2 ;
$index = 2; 
$limit = 10**999 ;

while ($next < $limit ){
   $next = $n1 + $n2 ;
   $n1 = $n2 ;
   $n2 = $next ;
   $index++;
}

print "The first 1000-digit Fibonacci number is number $index\n" ;
print "That number is : $next \n" ;
