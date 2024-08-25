package lap4;

public class BankAccount {
	//Attribute
	private Date date = new Date();
	private Double amount;
	private String name;
	
	//constructor
	
	public BankAccount(String name) {
		this.name = name;
		this.date.day = date.day;
		this.amount = 0.0;
		
	}
	
	public BankAccount(String name, double amount, Date date) {
		this.name = name;
		this.date= date;
		this.amount = amount;
	}
	
	//method
	//deposit
	public void deposit(double amount) {
		this.amount = this.amount + amount;
		
	}
	
	//withdraw
	public boolean withdraw(double amount) {
		if(this.amount >= amount)
			return true;
		else 
			return false;
		
	}
	
	//tranfer
	public void tranfer(BankAccount other, double amount) {
		if(withdraw(amount)) { // call withdraw to check amount
			this.amount = this.amount - amount;
			other.amount = other.amount + amount;
		}
		else
			System.out.print("out of amount");
	}
	
	//property
	public void property() {
		System.out.print("amount = " + this.amount + "\n");
		
	}
	
	//string get
	public void string_getinfo() {
		System.out.printf("account name = %s\ndate\nday = %d\nmonth = %d\nyear = %d\n",this.name,this.date.day,this.date.month,this.date.year);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	}
	







