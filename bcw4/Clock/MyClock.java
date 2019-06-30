import java.awt.*;
import javax.swing.*;
import java.awt.event.*;// Listener
import java.util.GregorianCalendar;
public class MyClock  extends JFrame implements ActionListener, AdjustmentListener {
	//private static final long serialVersionUID = 1L;
	GregorianCalendar gc = new GregorianCalendar();
	double second_angle = 360.0/60.0*gc.get(GregorianCalendar.SECOND);
	double minute_angle = 360.0/60.0*gc.get(GregorianCalendar.MINUTE)+ second_angle/60;
	double hour_angle = 360.0/12.0*gc.get(GregorianCalendar.HOUR) + minute_angle/12;
	int t=1000; 
 	private Timer tm = new Timer(t, this/*ActionListener*/);
 	private Container cnt; 
	public static void main(String[] args)  {
		new MyClock().setVisible(true); 
	}

	public MyClock() {
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		Dimension dm = Toolkit.getDefaultToolkit().getScreenSize();
		setBounds((int)((dm.width-dm.width/4)/2), (int)((dm.height-dm.height/4)/2), dm.width/2, 3*dm.height/4); //x , y, width, height 
		setVisible(true);
		setTitle("My Clock");
		cnt = getContentPane();
		cnt.setLayout(null); 
		Color c = new Color(93, 136, 160);
		cnt.setBackground(c);
		tm.start();
	}
		
	@Override
	public void actionPerformed(ActionEvent ae) {
		Object src =  ae.getSource();
		if(src == tm) {
			if (second_angle < 360.0)
				second_angle = second_angle + 360.0/60.0;
			else
				second_angle = 360.0/60.0;
			if (minute_angle < 360.0)
				minute_angle = minute_angle  + 360.0/(60.0*60.0);
			else
				minute_angle = 360.0/(60.0*60.0);
			if (hour_angle < 360.0)
				hour_angle = hour_angle + 360.0 /(60.0*60.0*12.0);
			else
				hour_angle = 360.0 /(60.0*60.0*12.0);
			repaint();
		}
	}
	
	@Override
	public void paint (Graphics g) {
		super.paint(g);
		DrawClock clock = new DrawClock(cnt, hour_angle, minute_angle, second_angle);
		clock.draw(g);
	}

	@Override
	public void adjustmentValueChanged(AdjustmentEvent arg0) {
	}
}
