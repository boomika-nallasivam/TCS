public class UnionArray {
    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4};
        int b[] = {3, 4, 5, 6};

        int n1 = a.length;
        int n2 = b.length;

        int union[] = new int[n1 + n2];
        int k = 0;

        for (int i = 0; i < n1; i++) {
            union[k++] = a[i];
        }

        for (int i = 0; i < n2; i++) {
            boolean found = false;

            for (int j = 0; j < k; j++) {
                if (union[j] == b[i]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                union[k++] = b[i];
            }
        }

        System.out.print("Union: ");
        for (int i = 0; i < k; i++) {
            System.out.print(union[i] + " ");
        }
    }
}
