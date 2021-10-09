/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
//package all_single_programs;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

/**
 * @Date Apr 18, 2013
 * @author ashwani
 */
public class expressions {
    public static void main(String[] args) throws IOException
    {
   
        int processor=Integer.parseInt(args[3]);
        
          BufferedWriter bw1 = new BufferedWriter(new FileWriter(args[1],true));
        
           BufferedReader br = new BufferedReader(new FileReader(args[0]));
        String s;
        int i =0;
        while((s=br.readLine())!=null)
        {
            i++;
             //  if(s1.contains(">"))
            {
            String[] a = s.split("\t");
             bw1.write("\n>miR-"+i+"-5p"+"\n"+a[0]+"\nmapped_reads\n");
             bw1.flush();
           //     System.out.println("\n"+s1);
               // String s=br.readLine();
           //     System.out.println(s);
               {
                       int sum=0;
                       BufferedReader br1 = new BufferedReader(new FileReader(args[2]));
        String str1;
        while((str1=br1.readLine())!=null)
        {
           // String[] a = str1.split("\t");
   
              threads[] workers = new threads[processor];
        ExecutorService taref = Executors.newFixedThreadPool(processor);
         String[] p = new String[processor];
                p[0] = str1;
            workers[0] = new threads(p[0],0,a[0],sum,args[1]);
            taref.execute(workers[0]);
            for(int k = 1;k < processor;k++)
            {
                p[k] = br1.readLine();
                workers[k] = new threads(p[k],k,a[0],sum,args[1]);
                //workers[k] = new WorkerThreads(p[k],k,args1);
                 taref.execute(workers[k]);

            }
         
                taref.shutdown();
        try {
            taref.awaitTermination(processor, TimeUnit.DAYS);
        } catch (InterruptedException ex) {

        }
            
            
        }
        br1.close();
                   }
               
                 bw1.write("\n>miR-"+i+"-3p"+"\n"+a[1]+"\nmapped_reads\n");
             bw1.flush();
               
               
               {
                       int sum=0;
                       BufferedReader br1 = new BufferedReader(new FileReader(args[2]));
        String str1;
        while((str1=br1.readLine())!=null)
        {
           // String[] a = str1.split("\t");
   
              threads[] workers = new threads[processor];
        ExecutorService taref = Executors.newFixedThreadPool(processor);
         String[] p = new String[processor];
                p[0] = str1;
            workers[0] = new threads(p[0],0,a[1],sum,args[1]);
            taref.execute(workers[0]);
            for(int k = 1;k < processor;k++)
            {
                p[k] = br1.readLine();
                workers[k] = new threads(p[k],k,a[1],sum,args[1]);
                //workers[k] = new WorkerThreads(p[k],k,args1);
                 taref.execute(workers[k]);

            }
         
                taref.shutdown();
        try {
            taref.awaitTermination(processor, TimeUnit.DAYS);
        } catch (InterruptedException ex) {

        }
            
            
        }
        br1.close();
                   }
               
                }
                 
            }
        bw1.close();
        br.close();
     
        
        expressions ex = new expressions();
        ex.final_result_all(args[1]);
        }
    
    
    public void final_result_all(String str) throws IOException
    {
        BufferedWriter bw = new BufferedWriter(new FileWriter(str+"_mapped_results"));
        BufferedReader br = new BufferedReader(new FileReader(str));
        
        String s1;
        while((s1=br.readLine())!=null)
        {
               if(s1.contains(">"))
            {
                 String s=br.readLine();
                 String sx=br.readLine();
                 String s2;
                 int add=0;
                 ArrayList<String> list = new ArrayList<String>();
                 while((s2=br.readLine())!=null)
                 {
                     s2=s2.trim();
                     if(s2.equals(""))
                     {
                         break;
                     }
                     else
                     {
                         String[] a = s2.split("\t");
                         int i = Integer.parseInt(a[1]);
                         add=add+i;
                         list.add(s2);
                     }
                 }
                 
                 bw.write(s1+"\t"+add+"\n"+s+"\nmapped reads\n");
                 bw.flush();
                 for(String key : list)
                 {
                     bw.write(key+"\n");
                     bw.flush();
                 }
                 bw.write("\n");
                 list.clear();
                 // System.out.println(add);
            }
               
    }
    bw.close();
final_result_all1(str+"_mapped_results");
    }
    
     public void final_result_all1(String name) throws IOException
    {
          BufferedWriter bw = new BufferedWriter(new FileWriter(name+"_isomiRs"));
                    BufferedReader br = new BufferedReader(new FileReader(name));
        String s1;
        while((s1=br.readLine())!=null)
        {
               if(s1.contains(">"))
            {
                String[] num = s1.split("\t");
                int j = Integer.parseInt(num[1]);
                 String s=br.readLine();
                 String sx=br.readLine();
                 String s2;
                  bw.write(s1+"\n"+s+"\nmapped reads\n");
                 
                 while((s2=br.readLine())!=null)
                 {
                     s2=s2.trim();
                     if(s2.equals(""))
                     {
                         break;
                     }
                     else
                     {
                         String[] a = s2.split("\t");
                         int i = Integer.parseInt(a[1]);
                         double data = ((double) i/j)*100;
                        bw.write(s2+"\t"+data+"\n");
                        bw.flush();
                     }
                 }
                 // System.out.println(add);
            }
               
    }
    bw.close();
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

class threads implements Runnable
{
// public int workerNumber;

   // WorkerThreads e = new WorkerThreads("S", 0);
   //

 public String str;
 public int k;
public String fn;
public int add;
public StringBuilder strbuild= new StringBuilder();
public String output;
   //public String filename;

    threads(String string,int i,String f,int sum,String out) {
      //  workerNumber = number;                                 // worker thread will pick the number of processors entered by user
            str = string;
            k = i;// which is entered as argument
           fn =f;
          add= sum;
          output= out;
            }
    @Override
    public void run() throws UnsupportedOperationException {
       
        try {
          //  add=0;
            //  BufferedWriter bw1 = new BufferedWriter(new FileWriter("/home/ashwani/de_novo_mirna/C_elegans_miReader/tmp/ss1",true));
            
            BufferedWriter bw1 = new BufferedWriter(new FileWriter(output,true));
           // System.out.println(fn);
            //String[] c = fn.split("\t");
            String[] a = str.split("\t");
      

            {
                  if(fn.contains(a[0])||a[0].contains(fn))
       {
           int i = Integer.parseInt(a[1]);
           add = add+i;
           // System.out.println(str+"\t+");
                   bw1.write(str+"\t+\n");
           bw1.flush();
       }
       else
       {
         //  System.out.print(fn+"\t");
          StringBuilder sb = new StringBuilder();
         String[] b = fn.split("");
         for(int i=0;i<=fn.length();i++)
         {
             if(b[i].equalsIgnoreCase("A"))
             {
                 sb.append("T");
             }
              if(b[i].equalsIgnoreCase("T"))
             {
                 sb.append("A");
             }
             
               if(b[i].equalsIgnoreCase("G"))
             {
                 sb.append("C");
             }
             
                if(b[i].equalsIgnoreCase("C"))
             {
                 sb.append("G");
             }
             
             
         } //System.out.println();
         //String s = 
         //System.out.println(sb.reverse().toString());
         String revc =sb.reverse().toString();
       // System.out.println(sb.toString());
    
         if(revc.contains(a[0]) || a[0].contains(revc) )
       {
           int i = Integer.parseInt(a[1]);
           add = add+i;
              bw1.write(str+"\t-\n");
           bw1.flush();
       }
            }
      
         
       }
            
             bw1.close();
//System.out.println(strbuild.toString());
//res();
}catch(Exception e)
{
}
   // 
}
    public void res() throws IOException
    {
        
     
      
        // return  strbuild.toString();
    }
}



