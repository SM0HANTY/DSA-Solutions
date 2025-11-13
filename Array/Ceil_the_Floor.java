import java.util.*;
public class EasyFloorCeil {
public static int findFloor(int[] arr, int x) {
        int floor = -1;
        for (int num : arr) {
            if (num <= x) {
                floor = Math.max(floor, num);
            }
        }
        return floor;
    }

public static int findCeil(int[] arr, int x) {
      int ceil = -1;
        for (int num : arr) {
            if (num >= x) {
                if (ceil == -1 || num < ceil) {
                    ceil = num;
                }
            }
        }
        return ceil;
    }
