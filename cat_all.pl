open(OUT,">datas")||die;
for($i=0;$i<$ARGV[0];$i++)
{
open(FH,"data_$i")||die;
while($line =<FH>)
{
chomp($line);
print OUT "$line\n";
}
unlink ("data_$i");
}
