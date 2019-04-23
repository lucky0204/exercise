
//时间复杂度
//越有序越快
public class Sort {
    public static void insertSort(int[] array) {
        for(int i = 1; i < array.length; i++){
            int tmp = array[i];
            int j;
            for(j = i-1; j >= 0; j--){
                if(tmp < array[j]){
                    array[j+1] = array[j];
                }else{
                    break;
                }

            }
            array[j+1] = tmp;
        }
    }
    public static void shell(int array[], int gap){
        //i == gap
        //j == i-gap
        //j+gap
        for(int i = gap; i < array.length; i++){
            int tmp = array[i];
            int j;
            for(j = i-gap; j >= 0; j = j-gap){
                if(tmp < array[j]){
                    array[j+gap] = array[j];
                }else{
                    break;
                }

            }
            array[j+gap] = tmp;
        }
    }

    public static void shellSort(int[] array){
        int[] ddr = {5,3,1};
        for(int i = 0;i<ddr.length;i++){
            shell(array,ddr[i]);
        }
    }
    public static void main(String[] args) {
        int[] arr  = new int[]{99,55,66,44,77,22,11,33,66};
        int[] gap = new int[]{5,2,1};

        shellSort(arr);
        for(int i : arr){
            System.out.println(i);
        }
    }
}
