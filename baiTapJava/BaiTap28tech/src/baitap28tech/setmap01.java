/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package baitap28tech;

/**
 *
 * @author luong
 */
import java.util.*;
public class setmap01 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Long[] arr = new Long[n];
        for(int i = 0 ; i < n ; i++)
        {
            arr[i] = sc.nextLong();
        }
        Arrays.sort(arr , new Comparator<Long>(){
            @Override
            public int compare(Long o1, Long o2){
                return (int) (o1 - o2);
            }            
        });
        int dem = 0;
        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i] != arr[i - 1]) dem++;
        }
        System.out.print(dem  + 1);
    }
}
