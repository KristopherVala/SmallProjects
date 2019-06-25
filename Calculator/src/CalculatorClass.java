import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.BorderLayout;
import javax.swing.SwingConstants;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Color;
import javax.swing.JPanel;
import javax.swing.border.TitledBorder;
import javax.swing.UIManager;

public class CalculatorClass {

	private JFrame frame;
	String numadd;
	int[] calcs = new int[5];
	int addArray;
	int finalCalc;
	int solution;
	int flag;	
	/**
	 * 
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					CalculatorClass window = new CalculatorClass();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public CalculatorClass() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setBackground(new Color(0, 255, 255));
		panel.setBorder(new TitledBorder(UIManager.getBorder("TitledBorder.border"), "", TitledBorder.LEADING, TitledBorder.TOP, null, new Color(0, 0, 0)));
		panel.setBounds(105, 11, 253, 37);
		frame.getContentPane().add(panel);
		panel.setLayout(null);
		
		JLabel num = new JLabel("");
		num.setBounds(6, 16, 241, 14);
		panel.add(num);
		num.setBackground(new Color(255, 255, 255));
		
		JButton btnNewButton = new JButton("Submit");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				finalCalc = Integer.parseInt(numadd);
				if (flag == 1){
				solution = finalCalc + calcs[0];}
				if (flag == 2){
					solution = calcs[0] - finalCalc ;

				}
				 if (flag == 3){
						solution = finalCalc * calcs[0];

				}
				else if (flag == 4){
					solution = calcs[0] / finalCalc;

				}
	
				num.setText(String.valueOf(solution));
			}
		});
		btnNewButton.setBounds(155, 218, 115, 33);
		frame.getContentPane().add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("1");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "1");
			}
		});
		btnNewButton_1.setBounds(10, 73, 89, 23);
		frame.getContentPane().add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("4");
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "4");

			}
		});
		btnNewButton_2.setBounds(10, 105, 89, 23);
		frame.getContentPane().add(btnNewButton_2);
		
		JButton btnNewButton_3 = new JButton("7");
		btnNewButton_3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "7");

			}
		});
		btnNewButton_3.setBounds(10, 137, 89, 23);
		frame.getContentPane().add(btnNewButton_3);
		
		JButton btnNewButton_4 = new JButton("2");
		btnNewButton_4.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "2");

			}
		});
		btnNewButton_4.setBounds(113, 73, 89, 23);
		frame.getContentPane().add(btnNewButton_4);
		
		JButton btnNewButton_5 = new JButton("5");
		btnNewButton_5.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "5");

			}
		});
		btnNewButton_5.setBounds(113, 105, 89, 23);
		frame.getContentPane().add(btnNewButton_5);
		
		JButton btnNewButton_6 = new JButton("8");
		btnNewButton_6.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "8");

			}
		});
		btnNewButton_6.setBounds(113, 137, 89, 23);
		frame.getContentPane().add(btnNewButton_6);
		
		JButton btnNewButton_7 = new JButton("3");
		btnNewButton_7.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "3");

			}
		});
		btnNewButton_7.setBounds(212, 73, 89, 23);
		frame.getContentPane().add(btnNewButton_7);
		
		JButton btnNewButton_8 = new JButton("6");
		btnNewButton_8.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "6");

			}
		});
		btnNewButton_8.setBounds(212, 105, 89, 23);
		frame.getContentPane().add(btnNewButton_8);
		
		JButton btnNewButton_9 = new JButton("9");
		btnNewButton_9.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				num.setText(numadd + "9");

			}
		});
		btnNewButton_9.setBounds(212, 137, 89, 23);
		frame.getContentPane().add(btnNewButton_9);
		
		JButton btnNewButton_10 = new JButton("+");
		btnNewButton_10.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				addArray = Integer.parseInt(numadd);
				calcs[0] = addArray;
				num.setText("");
				flag = 1;
				
			}
		});
		btnNewButton_10.setBounds(311, 73, 120, 23);
		frame.getContentPane().add(btnNewButton_10);
		
		JButton button = new JButton("-");
		button.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				addArray = Integer.parseInt(numadd);
				calcs[0] = addArray;
				num.setText("");
				flag = 2;
			}
		});
		button.setBounds(311, 105, 120, 23);
		frame.getContentPane().add(button);
		
		JButton button_1 = new JButton("*");
		button_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				addArray = Integer.parseInt(numadd);
				calcs[0] = addArray;
				num.setText("");
				flag = 3;
			}
		});
		button_1.setBounds(311, 137, 120, 23);
		frame.getContentPane().add(button_1);
		
		JButton button_2 = new JButton("/");
		button_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				numadd = num.getText();
				addArray = Integer.parseInt(numadd);
				calcs[0] = addArray;
				num.setText("");
				flag = 4;
			}
		});
		button_2.setBounds(311, 171, 120, 23);
		frame.getContentPane().add(button_2);
		
		JButton btnNewButton_11 = new JButton("Clear");
		btnNewButton_11.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				num.setText("");
				calcs[0] = 0;
			}
		});
		btnNewButton_11.setBounds(10, 223, 89, 23);
		frame.getContentPane().add(btnNewButton_11);
	}
}
