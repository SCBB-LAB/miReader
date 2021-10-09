open(FH,"GSM501370-12357.txt")||die;
while($line =<FH>)
{
$g=0;
$sum=0;
chomp ($line);
@arr=();
@arr = split("\t",$line);
open(FH1,"GSM501371-12359.txt")||die;
while($line1 =<FH1>)
{
chomp ($line1);
@arr1=();
@arr1 = split("\t",$line1);
if($arr[0] eq $arr1[0])
{
$sum=$arr1[1]+$arr[1];
$g=1;
print "$arr[0]\t$sum\n";
last;
}
}

if($g==0)
{
print "$arr[0]\t$arr[1]\n";
}
}
