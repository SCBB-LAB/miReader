/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
//package ext_seq;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.io.InputStreamReader;

/**
 *
 * @author ashwani
 */
public class Ext_seq {

    /**
     * @param args the command line arguments
     */

    public static void main(String[] args) throws IOException {
        // TODO code application logic here
         int processor =Integer.parseInt(args[0]);
       
        
        BufferedReader br = new BufferedReader(new FileReader("data"));
        String str;
        while((str=br.readLine())!=null)
        {
           
              wt[] workers_2 = new wt[processor];
        ExecutorService taref = Executors.newFixedThreadPool(processor);
         String[] p = new String[processor];
                p[0] = str;
            workers_2[0] = new wt(p[0],0);
            taref.execute(workers_2[0]);
            for(int k = 1;k < processor;k++)
            {
                p[k] = br.readLine();
                workers_2[k] = new wt(p[k],k);
                 taref.execute(workers_2[k]);
                
            }
            taref.shutdown();
        try {
            taref.awaitTermination(processor, TimeUnit.DAYS);
        } catch (InterruptedException ex) {
            
        }
            
            
       
    }
        
         br.close();





   Process pros = Runtime.getRuntime().exec("perl cat_all.pl "+processor);
     BufferedReader br1 = new BufferedReader(new InputStreamReader(pros.getErrorStream()));
     
      String g1 = null;
     while((g1=br1.readLine())!=null)
     {
         //System.out.println(g);
     }
     br1.close();







         
    }
}

class wt implements Runnable
{
 public String s;
 public int k;
 public String filename;
   //public String filename;

    wt(String str,int i) {
      //  workerNumber = number;                                 // worker thread will pick the number of processors entered by user
            s = str; 
            k = i;// which is entered as argument
          // filename = fname;
            }

    @Override
    public void run() throws UnsupportedOperationException {
       // throw new UnsupportedOperationException("Not supported yet.");
      
        String[] a = s.split("\t");
       
        Pattern p = Pattern.compile(">");
   try{
            
       Process pros = Runtime.getRuntime().exec("perl stretcher.pl "+a[0]+" "+a[1]+" " + k);
     BufferedReader br = new BufferedReader(new InputStreamReader(pros.getErrorStream()));
     
      String g = null;
     while((g=br.readLine())!=null)
     {
         //System.out.println(g);
     }
     br.close();
        } catch (IOException e)
        {
            
        }
        
        
    }
}


