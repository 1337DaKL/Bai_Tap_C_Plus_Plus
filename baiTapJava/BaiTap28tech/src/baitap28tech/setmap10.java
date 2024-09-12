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
public class setmap10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt() , m = sc.nextInt();
        LinkedHashSet<Long> setA = new LinkedHashSet<>();
        HashSet<Long> setB = new HashSet<>();
        LinkedHashSet<Long> setKetQua = new LinkedHashSet<>();
        for(int i = 0 ; i < n ; i++)
        {
            Long x = sc.nextLong();
            setA.add(x);
        }
        for(int i = 0 ; i < m ; i++)
        {
            Long x = sc.nextLong();
            setB.add(x);
        }
        for(Long x : setA)
        {
            if(setB.contains(x))
            {
                setKetQua.add(x);
            }
        }
        for(Long x : setKetQua)
        {
            System.out.print(x + " ");
        }
    }
}
