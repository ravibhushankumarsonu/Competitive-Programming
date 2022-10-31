import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class HelpfulMaths339 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        s= s.replace("+",",");
       // System.out.println(s);
        List<String> data = Arrays.stream(s.split(","))
                .sorted().collect(Collectors.toList());
        String result = data.get(0);
        for (int i = 1; i < data.size(); i++) {
            result = result+"+"+data.get(i);
        }
        System.out.println(result);
    }
}
