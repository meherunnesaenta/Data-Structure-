public class MergeSort {
    public static void divide(int[] a, int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            divide(a, l, m);
            divide(a, m + 1, r);
            merge(a, l, m, r);
        }
    }

    public static void merge(int[] a, int l, int m, int r) {
        int lp = l;
        int rp = m + 1;
        int res[] = new int[r - l + 1];
        int i = 0;

        while (lp <= m && rp <= r) {
            if (a[lp] >= a[rp]) {
                res[i] = a[rp];
                rp++;
            } else {
                res[i] = a[lp];
                lp++;
            }
            i++;
        }

        while (lp <= m) {
            res[i] = a[lp];
            i++;
            lp++;
        }

        while (rp <= r) {
            res[i] = a[rp];
            i++;
            rp++;
        }

        for (i = 0; i < res.length; i++) {
            a[l + i] = res[i];
        }
    }

    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6, 7};
        divide(arr, 0, arr.length - 1);

        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}