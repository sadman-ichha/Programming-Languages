package FileHandling;
import java.io.File;
import java.io.IOException;

public class FileExample {
    public static void main(String[] args) {
        File file =new File("C:/Users/Sadman/Desktop/Users");
        boolean isFileCrate= file.mkdir();

//        if(isFileCrate){
//            System.out.println("Directory created");
//        }else if(file.exists()){
//            System.out.println("File exists");
//        }
//        else {
//            System.out.println("Directory not created");
//        }
//

        File path= file.getAbsoluteFile();
        System.out.println("Directory Path: "+ path);
        String name= path.getName();
        System.out.println("Directory Name: "+ name);
//        boolean isFileDelete=  file.delete();
//         if(!isFileDelete){
//           System.out.println("File Delete Failed");
//         }else{
//             System.out.println("File Delete Success");
//         }

        File file1 = new File(path+"/user1.txt");
        File file2 = new File(path+"/user2.txt");

        try{
            file1.createNewFile();
            file2.createNewFile();
            System.out.println("File are Created");
        } catch (IOException e) {
            System.out.println(e.getMessage());
            throw new RuntimeException(e);
        }



    }


}
