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
public class binarysearch {
    public static int binarySearch(Integer a[] , int x , int n)
    {
        int l = 0 , r = n - 1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(a[mid] == x)
            {
                return mid;
            }
            else if(a[mid] < x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
    //vi tri dau tien cua x
    public static int pointFirst(Integer a[] , int x , int n)
    {
        int l = 0 , r = n - 1;
        int index = -1;
        while(l <= r)
        {
            int m = (l + r) / 2;
            if(a[m] == x)
            {
                index = m;
                r = m - 1;
            }
            else if(a[m] < x)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return index;
    }
    // vi tri cuoi cung cua x
    public static int pointEnd(Integer a[] , int x , int n)
    {
        int l = 0 , r = n - 1;
        int index = -1;
        while(l <= r)
        {
            int m = (l + r) / 2;
            if(a[m] == x)
            {
                index = m;
                l = m + 1;
            }
            else if(a[m] < x)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return index;
    }
    //vi tri dau tien lon hon hoac bang x
    public static int dauTienLonHonHoacBangX(Integer a[] , int x , int n)
    {
        int l = 0 , r = n - 1;
        int index = -1;
        while(l <= r)
        {
            int m = (l + r) /2;
            if(a[m] >= x)
            {
                index = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return index;
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
                return o1 - o2;
            }         
        });
        int x = sc.nextInt();
        if(dauTienLonHonHoacBangX(arr,x , n ) == -1)
        {
            System.out.print("NO");
        }
        else
        {
            System.out.print(dauTienLonHonHoacBangX(arr,x , n ));
        }
    }
}
