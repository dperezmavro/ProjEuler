#!/usr/bin/perl

$largest = 1 ;
$num = 3 ;
#cheers to this guy for the awesome one-liner!
#http://www.catonmat.net/blog/perl-one-liners-explained-part-four/
@odd = grep {$_ % 2 == 1 } 1 .. 1000000 ;

foreach my $n ( @odd){
	$res = coll($n, 1);
	if($res > $largest){
		$num = $n ;
		$largest = $res ;
	}
}

print "Largest sequence is produced by $num ($largest)\n";

sub coll{
	my $num = shift ;
	my $run = shift ;
	if( $num == 1 ){
		return $run ;
	}elsif( $num %2 == 0 ){
		coll ($num/2, $run + 1);
	}else{
		coll($num*3 + 1, $run + 1);
	}
}