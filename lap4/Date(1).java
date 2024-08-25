package lap4;

public class Date {
	//attribute
	protected int day;
	protected int month;
	protected int year;
	//defalconstructor
	public  Date() {
		
	}
	
	//constructor 
	public  Date(int day,int month,int year) { 
		this.day=day;
		this.month=month;
		this.year=year;
	}
	
	
	public void getter() {
		System.out.printf("\nday = %d \nmonth = %d \nyear = %d",this.day,this.month,this.year + 543);
		
	}
	public void setter(int day,int month,int year) {
		if(day > 0 || day < 32)
			this.day = day;
		if(month > 0 || month < 13)
			this.month = month;
		this.year = year;
		
	}
	

}
