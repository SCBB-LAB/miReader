open(FH,$ARGV[0])||die;
open(OUT,">top")||die;
$i=0;

while($line1 = <FH>)
{
chomp ($line1);


while($line = <FH>)
{

chomp($line);




if($line =~ /Query=/)
{

$query = $line;

}

#No hits found

elsif($line =~ /Sequences producing/)
{
$i++;
$next = <FH>;
$next1 = <FH>;
chomp ($next1);
$sub = substr($query,7);
print OUT "$sub\t$next1\n";
#system ("java Correlation osa-mir156 $next1");
}
if($line =~ /No hits found/)
{
$i++;
$sub1 = substr($query,7);
#print OUT "$sub1\n";
#print "$query\n$line\n";
last;
}

elsif($line =~ /Query/)
{
#print OUT "\t$line\n";
last;
}
}
}
print "$i\n";




