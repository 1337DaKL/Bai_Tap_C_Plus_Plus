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
public class seAndMap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Integer[] arr = new Integer[n];
        for(int i = 0 ; i < n ; i++)
        {
            arr[i] = sc.nextInt();
        }
        HashMap<Integer , Integer> map = new HashMap<>();
        for(int i = 0 ; i < n ; i++)
        {
            if(map.containsKey(arr[i]))
            {
                map.put(arr[i], map.get(arr[i]) + 1);
            }
            else
            {
                map.put(arr[i], 1);
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(map.get(arr[i]) != 0)
            {
                System.out.println(arr[i] + " " + map.get(arr[i]));
                map.put(arr[i], 0);
            }
        }
    }
}
