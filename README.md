

miReader a noval and accurate algorithm to identify miRNAs from small RNA read data without reference genome. 


How to use miReader

Linux:
Dependencies:
	1. Java 5 or greater.
	2. QT4 (for GUI)
	3. Any Linux distribution (x86_64 for GUI)
	4. EMBOSS package

Run miReader:
	
Command line interface (CLI)
	Extract miReader_Linux.tar.gz and execute “java -jar miReader_dicot.jar inputfile (can be in fasta format or in fastq format) output_folder_destination (/home/user/...) 	 number_of_processors” (without quotes). 
	As miReader does not require any third party dependencies it can (theoretically) run on any system with Linux O.S having Java version > 5.

	For example: java -jar miReader_Dicot.jar test_reads.fasta test_results 15
	1. jar file according to species (monocot/dicot/human/fly/fish/c. elegans)
		a. miReader_dicot.jar : model - Arabidopsis thaliana
		b. miReader_monocot.jar : model - Oryza satvia
		c. miReader_human.jar : model - Homo sapiens
		d. miReader_nematod.jar : model - Caenorhabditis elegans
		e. miReader_fly.jar : model - Drosophila melanogaster
		f. miReader_fish.jar : model - Danio rerio
	2. small RNA-Seq reads file
	3. output folder name
	4. #no. of processor


Windows:
	Dependencies:
	1. Java 5 or greater.
	2. Windows (x86_64 for GUI) 
	4. EMBOSS package

Run miReader:
	

Command line interface (CLI)
	Follow the above steps described to run CLI version of miReader in Linux.
 
Note to run miReader as CLI please replace the jar file with the respective model 

	1. miReader_dicot.jar : model - Arabidopsis thaliana
	2. miReader_monocot.jar : model - Oryza satvia
	3. miReader_human.jar : model - Homo sapiens
	4. miReader_nematod.jar : model - Caenorhabditis elegans
	5. miReader_fly.jar : model - Drosophila melanogaster
	6. miReader_fish.jar : model - Danio rerio

	For example run java -jar miReader_dicot.jar inputfile output_folder number_of_processors if you want to use dicot (Arabidopsis) as model.
	Or java -jar miReader_human.jar inputfile output_folder number of processors to identify reads for human model.


Calculate expression from fasta/fastq file:
To calculate the expression of duplex miRNAs and the isomiRs please use expression.java. Simply compile the code as java expression.java and to run
java expression input_fastq_or_fasta_file miReader_result_folder/temp_mapped_results out_file

Note
miReader_result_folder is the same out folder which is chosen to run miReader. In this folder you can find many files namely 

"miReader_result" - final miReader result
"temp_mapped_results_isomiRs" - mapped file containg the information of isomiRs
"temp_mapped_results" - mapped result (will be used to calculate expresion)
