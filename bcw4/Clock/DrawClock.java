import java.awt.Color;
import java.awt.Container;
import java.awt.Graphics;

public class DrawClock {
	private int R;
	private Container cnt;
	double hour_angle;
	double minute_angle;
	double second_angle;
	int R_hour;
 	int R_minute;
 	int R_second;
	
 	public DrawClock(Container cnt, double hour_angle, double minute_angle, double second_angle) {
		this.cnt = cnt;
		this.hour_angle = hour_angle;
		this.minute_angle = minute_angle;
		this.second_angle = second_angle;
	}
	
	public void draw (Graphics g) {
		int X, Y, x, y;
		R = (int)(cnt.getSize().width)/4;
		R_hour = (int)(R/2.5) ;
	 	R_minute = R_hour + (int)R/5;
	 	R_second = R_hour + (int)R/3;
		x = (cnt.getSize().width/2);
		y = (cnt.getSize().height/2)+cnt.getSize().height/16;
		g.setColor(Color.WHITE);
		g.fillOval(x-(R+R/8),y-(R+R/8), 2*(R+R/8), 2*(R+R/8));
		for(int i = 0; i<60; i++) {
			int minute = 360/60*i;
			X =(int)(x - Math.sin(Math.toRadians(minute))*R);
			Y = (int)(y - Math.cos(Math.toRadians(minute))*R);
			g.setColor(Color.RED);
			g.drawLine(x, y, X, Y);
		}
		g.setColor(Color.WHITE);
		g.fillOval(x -(R-R/10),y -(R-R/10), 2*(R-R/10), 2*(R-R/10));
		for(int i = 0; i<12; i++) {
			int hour = 360/12*i;
			X = (int)(x - Math.sin(Math.toRadians(hour))*R);
			Y = (int)(y - Math.cos(Math.toRadians(hour))*R);
			g.setColor(Color.blue);
			g.drawLine(x, y, X, Y);
		}
		g.setColor(Color.WHITE);
		g.fillOval(x-(R-R/6),y-(R-R/6), 2*(R-R/6), 2*(R-R/6));
		
		g.setColor(Color.RED);
	
		g.drawOval(x-(R+R/10),y-(R+R/10), 2*(R+R/10), 2*(R+R/10));
		g.drawOval(x-(R+R/9),y-(R+R/9), 2*(R+R/9), 2*(R+R/9));
		g.drawOval(x-(R+R/8),y-(R+R/8), 2*(R+R/8), 2*(R+R/8));
		
		X = (int)(x - Math.cos(Math.toRadians(hour_angle+90))*R_hour);
		Y = (int)(y - Math.sin(Math.toRadians(hour_angle+90))*R_hour);
		g.setColor(Color.BLUE);
		g.drawLine(x, y, X, Y);
		
		X = (int)(x - Math.cos(Math.toRadians(minute_angle+90))*R_minute);
		Y = (int)(y - Math.sin(Math.toRadians(minute_angle+90))*R_minute);
		Color c = new Color(0, 120, 0);
		g.setColor(c);
		g.drawLine(x, y, X, Y);
		
		X = (int)(x - Math.cos(Math.toRadians(second_angle+90))*R_second);
		Y = (int)(y - Math.sin(Math.toRadians(second_angle+90))*R_second);
		g.setColor(Color.RED);
		g.drawLine(x, y, X, Y);
		
		g.fillOval(x-(int)(R-R/1.05),y-(int)(R-R/1.05), 2*(int)(R-R/1.05), 2*(int)(R-R/1.05));
	}
}
