#!/usr/bin/perl

$n1 = 1 ;
$n2 =1 ;
$next = 2 ;
while (length($next) < 3 ){
   $next = $n1 + $n2 ;
   $n1 = $n2 ;
   $n2 = $next ;
}

print "$next \n" ;
