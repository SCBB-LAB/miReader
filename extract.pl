open (FH, "gpal_mature_mirna_sarkies")||die;
while ($line = <FH>){
chomp $line;
if ($line =~ /^>/){
$f = $line;
$n = <FH>;
chomp $n;
@a = ();
@a = split (">", $f);
print ">$a[1]\n";
#print "$a[0]:$a[0]:$a1[0]\n$n\n";
}
}
