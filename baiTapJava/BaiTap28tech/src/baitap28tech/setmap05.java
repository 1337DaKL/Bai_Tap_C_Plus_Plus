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

public class setmap05 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Character[] a = new Character[n];
        for(int i = 0 ; i < n ; i++)
        {
            a[i] = sc.next().charAt(0);
        }
        TreeMap<Character , Integer> map = new TreeMap<>();
        for(int i = 0 ; i < n ; i++)
        {
            if(map.containsKey(a[i]))
            {
                map.put(a[i] , map.get(a[i]) + 1);
            }
            else
            {
                map.put(a[i], 1);
            }
        }
        Character firstChar = map.firstKey();
        System.out.print(firstChar + " " + map.get(firstChar) + "\n\n");
        Character endchar = map.lastKey();
        System.out.print(endchar + " " + map.get(endchar) + "\n\n");
        Set<Map.Entry<Character , Integer>> entrySet = map.entrySet();
        for(Map.Entry<Character , Integer> x : entrySet)
        {
            System.out.println(x.getKey() + " " + x.getValue());
        }
        System.out.println();
        Set<Map.Entry<Character , Integer>> entrySetrev = map.descendingMap().entrySet();
        for(Map.Entry<Character , Integer> x : entrySetrev)
        {
            System.out.println(x.getKey() + " " +  x.getValue());
        }
        System.out.println();
    }
}
