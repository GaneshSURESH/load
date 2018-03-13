import java.text.SimpleDateFormat;
import java.util.Date;
import org.joda.time.DateTime;
import org.joda.time.Days;
import org.joda.time.Hours;
import org.joda.time.Minutes;
import org.joda.time.Seconds;

public class time substraction
{
  public static void main(String[] args) 
  {
	String dateStart = "01/14/2012 09:29:58";
	String dateStop = "01/15/2012 10:31:48";
	SimpleDateFormat format = new SimpleDateFormat("MM/dd/yyyy HH:mm:ss");
	Date D1 = null;
	Date D2 = null;
	try 
  {
		D1 = format.parse(dateStart);
		D2 = format.parse(dateStop);
		DateTime dt1 = new DateTime(D1);
		DateTime dt2 = new DateTime(D2);
		System.out.print(Days.daysBetween(dt1, dt2).getDays() + " days, ");
		System.out.print(Hours.hoursBetween(dt1, dt2).getHours() % 24 + " hours, ");
		System.out.print(Minutes.minutesBetween(dt1, dt2).getMinutes() % 60 + " minutes, ");
		System.out.print(Seconds.secondsBetween(dt1, dt2).getSeconds() % 60 + " seconds.");
   } 
   catch (Exception e)
   {
		e.printStackTrace();
	 }
  }
}