open(FH,"GSM501371-12359.txt")||die;
$i=0;
while($line=<FH>)
{
$i++;
chomp($line);
@arr=();
@arr = split("\t",$line);
print ">sequence_$arr[1]_count_$i\n$arr[0]\n";

}
