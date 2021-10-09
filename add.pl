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
if($arr2[-1]>60)
{
print "$arr[1]\t$arr1[1]\t$arr2[-1]\n";
}
}
}


}

close (FH);

