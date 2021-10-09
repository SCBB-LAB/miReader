open(FH,$ARGV[0])||die;
while($line =<FH>)
{
chomp ($line);
@arr=();
@arr=split("\t",$line);

if($arr[2] >0.5)
{
#print "$line\n";
open(OUT,">re_align_1");
open(OUT1,">re_align_2");
$rev = reverse ($arr[1]);
$rev =~tr/ATGC/TACG/;

print OUT ">tmp-$arr[2]\n$arr[0]\n";
print OUT1 ">seq-$arr[2]\n$rev\n";


system("stretcher -asequence re_align_1 -bsequence re_align_2 alignment -datafile EDNAFULL_matrix -awidth3 200 -gapopen 15 -gapextend 5");
close(OUT);
close(OUT1);
system("perl add_again.pl alignment >> data_alignment")
}
}

