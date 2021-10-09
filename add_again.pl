open(FH,$ARGV[0])||die;
$i=0;
while($line =<FH>)
{
chomp($line);
#rint "$line\n";
if($line=~/Similarity: /)
{
@arr2= ();
@arr2 = split(" ",$line);

#$id = $line;
}
if($line=~/^# 1:/)
{
$ss = $line;
#print "$line\n";
next;
}

if($line=~/tmp/)
{
#print "$line\n";
$n=<FH>;
$n1=<FH>;
chomp($n1);
if($n1=~/seq/)
{
#print "$n1\n";
#print "$line\n";
$line=~s/^\s+//;
$n1=~s/^\s+//;
$line=~s/\s+/\t/;
$n1=~s/\s+/\t/;
@arr= ();
@arr = split("\t",$line);
@arr1= ();
@arr1 = split("\t",$n1);
$arr2[-1]=~s/\(//;
$arr2[-1]=~s/\)//;
$arr2[-1]=~s/%//;
#print "$n1\n";
#print "$line\n$n1\n";

$rev = reverse ($arr[1]);
$rev =~tr/ATGC/TACG/;


if($arr[1] =~ /^-/)
{
@s= ();
@s = split("-",$ss);

print "$arr[1]\t$rev\t$s[1]\n";
}
}
}


}

close (FH);

