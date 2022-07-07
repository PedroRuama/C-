
import javax.swing.JOptionPane;

public class media_alunos {

    public static void main(String[] args) {
        float a = 0;
        int q = 0;
        for (int i = 1; i <= 5; i++) {
            a += Float.parseFloat(JOptionPane.showInputDialog(" MÉDIA \nInsira a nota do " + i + "° aluno de 0 a 10"));
            q = q + 1;
            
        }
        
        float m = a/q;
        JOptionPane.showMessageDialog(null, "a média dos alunos é = "+ m);

    }

}
