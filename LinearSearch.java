public class LinearSearch {
    public static void main(String[] args) {
        int arr[] = {5, 9, 1, 3, 7};
        int key = 3;
        boolean found = false;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                System.out.println("Element found at index: " + i);
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Element not found");
        }
    }
}
