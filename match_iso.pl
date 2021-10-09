# hsa-let-7a-1-3p|{isomiR}|36_57|
# hsa-let-7a-1-3p|{isomiR}|38_60|
# hsa-let-7a-1-3p|{isomiR}|41_62|
# hsa-let-7a-1-3p|{isomiR}|42_64|
# hsa-let-7a-1-3p|{isomiR}|42_70|
# hsa-let-7a-1-3p|{isomiR}|47_68|
# hsa-miR-143-3p|{isomiR}|60_80|sub.77.G>A;sub.79.T>C
# hsa-let-7a-1-3p|{isomiR}|50_71|sub.68.C>A	hsa-let-7a-1

open(FH,"hairpin_19")||die;
while($line =<FH>)
{
chomp($line);
if($line=~/>/)
{
$n=<FH>;
chomp ($n);
$s = substr($line,1);
open(FH1,"file_iso_mir")||die;
while($line1 =<FH1>)
{
chomp($line1);
@arr=();
@arr = split("\\|",$line1);
#if($line1 !~ /sub/)
{
$arr[0]=~s/-3p//;
$arr[0]=~s/-5p//;
#print "$arr[0]\n";
if(uc($arr[0]) eq uc($s))
{
@arr1=();
@arr1 = split("_",$arr[2]);

$d = $arr1[1] - $arr1[0];
$sub = substr($n,$arr1[0]-1,$d);
#print "$line1\t$s\n$sub\n";
print "$s\n";
}
}
}
}
}
