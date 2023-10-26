/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bfs;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;
/**
 *
 * @author Mehrun Nesa Enta
 */
public class Bfs {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        File file =new File("C:\\Users\\Mehrun Nesa Enta\\OneDrive\\Documents\\NetBeansProjects\\ bfs\\e.txt");
        Scanner input= null;
        int v=0,e,start=0;
        int m[][]=new int[0][0];
        try{
            input=new Scanner(file);
            v=input.nextInt();
            e=input.nextInt();
            m=new int[v][v];
            for(int i=0;i<e;i++){
                int f=input.nextInt();
                int s=input.nextInt();
                m[f][s]=m[s][f]=1;
            }
            start=input.nextInt();
        }catch(IOException a){
            System.out.println(a);
        }
        int visited[]=new int [v];
        int level[]=new int [v];
        for(int i=0;i<v;i++)
            visited[i]=0;
        visited[start]=0;
        level[start]=0;
        
        Queue<Integer>queue=new LinkedList<>();
        queue.add(start);
        while(!queue.isEmpty()){
            int p=queue.poll();
                   System.out.print(p +" ");
             for(int i=0;i<v;i++){
                 if(m[p][i]==1 && visited[i]==0){
                     queue.add(i);
                     level[i]=level[p]+1;
                     visited[i]=1;
                 }
             }
             visited[p]=2;
        }
    }
    
}
