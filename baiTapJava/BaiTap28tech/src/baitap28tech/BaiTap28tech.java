/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package baitap28tech;

/**
 *
 * @author luong
 */
import java.util.*;
public class BaiTap28tech {
    public static int tinhTong(int n)
    {
        int tong = 0;
        while( n> 0)
        {
            tong += n % 10;
            n /= 10;
        }
        return tong;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Integer[] arr = new Integer[n];
        for(int i = 0 ; i < n ; i++)
        {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr , new Comparator<Integer>(){
            @Override
            public int compare(Integer o1, Integer o2) {
                int tong1 = tinhTong(o1);
                int tong2 = tinhTong(o2);
                return tong1 - tong2;
            }
            
        });
        for(int i = 0 ; i < n ; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
    
}
