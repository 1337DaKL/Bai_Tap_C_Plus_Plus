/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package baitapPTITI;

/**
 *
 * @author luong
 */
import java.util.*;
public class J02007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        for(int i = 1 ; i <= test ; i++)
        {
            int n = sc.nextInt();
            LinkedHashMap<Integer , Integer> map = new LinkedHashMap<>();
            for(int j = 0 ; j < n ; j ++)
            {
                int x = sc.nextInt();
                if(map.containsKey(x))
                {
                    map.put(x, map.get(x) + 1);
                }
                else
                {
                    map.put(x, 1);
                }
            }
            System.out.println("Test " + i + ":");
            Set<Map.Entry<Integer , Integer>> entrySet = map.entrySet();
            for(Map.Entry<Integer , Integer> x : entrySet)
            {
                System.out.println(x.getKey() + " xuat hien " + x.getValue() + " lan");
            }
        }
    }
}
