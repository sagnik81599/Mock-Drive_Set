class Main {
    public static void main(String[] args) {

        int[] arr = {2, 3, 4, 5, 7, 9};

        int even = 0;
        int odd = 0;

        for (int i = 0; i < arr.length; i++) {

            if (i % 2 == 0 && arr[i] % 2 == 0) {
                even++;
            }

            if (i % 2 != 0 && arr[i] % 2 != 0) {
                odd++;
            }
        }

        System.out.println(even + odd);
    }
}