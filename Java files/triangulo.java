
import javax.swing.JOptionPane;


public class triangulo {

    
    public static void main(String[] args) {
       int base;
       int altura;
       String repetir = "sim";
       float area;
       while(repetir.equals("sim")){
           base = Integer.parseInt(JOptionPane.showInputDialog(" ÁREA DE UM TRIANGULO \n insira o valor da base do triangulo"));
           altura = Integer.parseInt(JOptionPane.showInputDialog(" ÁREA DE UM TRIANGULO \n insira o valor da altura do triangulo"));
           area = (base*altura)/2;
           JOptionPane.showMessageDialog(null,"área = "+ area);
           repetir = JOptionPane.showInputDialog("deseja repetir a operação? (sim/não)");
       }
       
       
       
    }
    
}
