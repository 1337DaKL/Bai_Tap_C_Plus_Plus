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
public class setmap04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Long[] a = new Long[n];
        for(int i = 0 ; i < n ; i++)
        {
            a[i] = sc.nextLong();
        }
        HashMap<Long , Integer> map = new HashMap<>();
        for(int i = 0 ; i < n ; i++)
        {
            if(map.containsKey(a[i]))
            {
                Integer value = map.get(a[i]);
                value++;
                map.put(a[i] , value);
            }
            else
            {
                map.put(a[i] , 1);
            }
        }
        int test = sc.nextInt();
        while(test-- > 0)
        {
            int query = sc.nextInt();
            Long valueQuery = sc.nextLong();
            switch (query) {
                case 1:
                    if(map.containsKey(valueQuery))
                    {
                        map.put(valueQuery, map.get(valueQuery) + 1);
                    }
                    else
                    {
                        map.put(valueQuery , 1);
                    }   break;
                case 2:
                    if(map.containsKey(valueQuery))
                    {
                        map.put(valueQuery, map.get(valueQuery) - 1);
                        if(map.get(valueQuery) == 0)
                        {
                            map.remove(valueQuery);
                        }
                    }   break;
                default:
                    if(map.containsKey(valueQuery))
                    {
                        System.out.print("YES\n");
                    }
                    else System.out.print("NO\n");
                    break;
            }
        }
    }
}
