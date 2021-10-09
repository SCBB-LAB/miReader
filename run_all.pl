open (OUT,">all_reads_data")||die; 

opendir (DIR, $ARGV[0])||die;
{
while (my $file = readdir(DIR)) {
next if ($file =~ m/^\./);
chomp($file);
#print "$ARGV[0]$file\n";
open (FH,"<$ARGV[0]$file")||die;
while ($line =<FH>)
{
chomp($line);
       print OUT "$line\n";
}
    }
close(FH);
}
closedir(DIR);
