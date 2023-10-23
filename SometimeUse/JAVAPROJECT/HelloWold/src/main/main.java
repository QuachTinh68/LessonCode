package main;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;

public class main extends JFrame {
	public main() {
		setSize(400,400);
		setLocationRelativeTo(null);
		
		JPanel panel = new JPanel();
		add(panel);
		
		JLabel label = new JLabel("Hello world");
		panel.add(label);		
	}
	public static void main(String[] args ) {
		new main().setVisible(true);
	}
}
