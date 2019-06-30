import java.awt.*;
import java.awt.event.*;
import java.util.Calendar;
import java.util.GregorianCalendar;
import javax.swing.*;

@SuppressWarnings("serial")
public class Clock extends JFrame implements AdjustmentListener, ActionListener {
	private Container cnt;
	private Timer tm = new Timer(100, this);
	private Dimension dim = Toolkit.getDefaultToolkit().getScreenSize();
	private Point centr;
	private int R;
	

	public Clock() {
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setLayout(null);
		setBounds(0, 0, dim.width / 2, dim.height / 2);
		cnt = getContentPane();
		cnt.setBackground(Color.DARK_GRAY);
		tm.start();
	}

	public static void main(String[] args) {
		new Clock().setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		//Object action = e.getSource();
		Graphics g = getGraphics();
		Dimension dim = getSize();
		R = (dim.width > dim.height ? dim.height / 2 - 40 : dim.width / 2 - 40);
		centr = new Point(dim.width / 2, dim.height / 2);
		Point leftTop = new Point(dim.width / 2 - R, dim.height / 2 - R + 10);
		GregorianCalendar grc = new GregorianCalendar();
		double aSec = grc.get(Calendar.SECOND) * 6.0 - 90;
		double aMin = grc.get(Calendar.MINUTE) * 6.0 + grc.get(Calendar.SECOND)
				* 0.1 - 90;
		double aHour = grc.get(Calendar.HOUR) * 30.0 + grc.get(Calendar.MINUTE)
				* 0.5 - 90;

		g.setColor(Color.BLACK);
		g.fillOval(leftTop.x - 15, leftTop.y - 15, R * 2 + 30, R * 2 + 30);
		g.setColor(Color.DARK_GRAY);
		g.fillOval(leftTop.x - 6, leftTop.y - 6, R * 2 + 12, R * 2 + 12);
		g.setColor(Color.BLACK);
		g.fillOval(centr.x - 5, centr.y + 4, 12, 12);
		
		reDrawSekLine(g, R, centr);
		
		g.setColor(Color.LIGHT_GRAY);
			g.drawLine((int) (centr.x + 1),(int) (centr.y + 10),
					(int) (centr.x + 1 + R * 0.8 * Math.cos(Math.toRadians(aMin))),
					(int) (centr.y + 10 + R * 0.8 * Math.sin(Math.toRadians(aMin))));
			g.drawLine(
					(int) (centr.x + 1),(int) (centr.y + 10),
					(int) (centr.x + 1 + R * 0.5 * Math.cos(Math.toRadians(aHour))),
					(int) (centr.y + 10 + R * 0.5 * Math.sin(Math.toRadians(aHour))));
			g.setColor(Color.MAGENTA);
			g.drawLine((int) (centr.x + 1), (int) (centr.y + 10),
					(int) (centr.x + 1 + R * Math.cos(Math.toRadians(aSec))),
					(int) (centr.y + 10 + R * Math.sin(Math.toRadians(aSec))));
	}

	@Override
	public void adjustmentValueChanged(AdjustmentEvent e) {

	}

	private void reDrawSekLine(Graphics g, int R, Point cent) {
		g.setColor(Color.CYAN);
		for (int i = 0; i < 360; i += 6)
			g.drawLine(
					(int) (cent.x + 1 + R * (i % 30 == 0 ? 0.8 : 0.9) * Math.cos(Math.toRadians(i))),
					(int) (cent.y + 10 + R * (i % 30 == 0 ? 0.8 : 0.9) * Math.sin(Math.toRadians(i))),
					(int) (cent.x + 1 + R * Math.cos(Math.toRadians(i))),
					(int) (cent.y + 10 + R * Math.sin(Math.toRadians(i))));
	}
	
}

