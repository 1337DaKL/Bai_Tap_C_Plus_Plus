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
public class setmap09 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt() , m = sc.nextInt();
        TreeSet<Long> set = new TreeSet<>();
        for(int i = 0 ; i < n ; i++)
        {
            Long x = sc.nextLong();
            set.add(x);
        }
        for(int i = 0 ; i < m ; i++)
        {
            Long x = sc.nextLong();
            set.add(x);
        }
        List<Long> list = new ArrayList<>(set);
        Collections.reverse(list);
        for(Long x : list)
        {
            System.out.print(x + " ");
        }
    }
}
