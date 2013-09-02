#!/usr/bin/perl

# http://en.wikipedia.org/wiki/Pythagorean_triple
# we have : 
# a + b + c = 1000 (1) and a^2 + b^2 = c^2
# also, by wikipedia, a = m^2 - n^2 , b = 2mn and c = m^2 + n^2
# so (1) becomes m(m+n) = 500
# 500 = 2 * 2 * 5 * 5 * 5

foreach $m (reverse(1 .. 250)) {
	foreach $n ( 1 .. 100 ){
		print get_nums($m, $n) if $m*($n+$m) == 500 and $m > $n;
	}
}

sub get_nums($m, $n){
	$a = $m**2 - $n**2 ;
	$b = 2*$m*$n ;
	$c = $m**2 + $n**2 ;
	$prod = $a * $b * $c ;
	return "m = $m, n = $n , a = $a , c = $c , b = $b , product is $prod\n";
}