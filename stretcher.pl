
open(OUT,">tmp_$ARGV[2]");
open(OUT1,">tmp1_$ARGV[2]");
$rev = reverse ($ARGV[1]);
$rev =~tr/ATGC/TACG/;
print OUT ">tmp-$ARGV[2]\n$ARGV[0]\n";
print OUT1 ">seq-$ARGV[2]\n$rev\n";

system("stretcher -asequence tmp_$ARGV[2] -bsequence tmp1_$ARGV[2] $ARGV[2] -datafile EDNAFULL_matrix -awidth3 200 -gapopen 15 -gapextend 5");
close(OUT);
close(OUT1);
system("perl add.pl $ARGV[2] >> data_$ARGV[2]")




