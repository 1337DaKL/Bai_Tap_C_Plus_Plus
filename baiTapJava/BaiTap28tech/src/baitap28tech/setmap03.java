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
public class setmap03 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Long[] a = new Long[n];
        for(int i = 0 ; i < n ; i++)
        {
            a[i] = sc.nextLong();
        }
        LinkedHashSet<Long> set = new LinkedHashSet<>();
        for(int i = 0 ; i < n ; i++)
        {
            set.add(a[i]);
        }
        for(Long x : set)
        {
            System.out.print(x + " ");
        }
    }
}
