
import javax.swing.JOptionPane;

public class fatorial {

    public static void main(String[] args) {
        int val;
        int fat = 1;
        
        val = Integer.parseInt(JOptionPane.showInputDialog(" FATORIAL \n insira um numero de 1 a 9 para fatora-lo: "));
        for (int i = 0; i < val && i!= val; i++) {
            fat *=(val - i);
            
        }
        JOptionPane.showMessageDialog(null, val+"! = "+ fat);
    }

}
