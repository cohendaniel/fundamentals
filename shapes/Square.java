public class Square implements Shape {
	
	private int numSides;
	private String name;
	private int area;
	
	public Square(String shapeName) {
		name = shapeName;
		numSides = 4;
	}
	
	public int getNumSides () {
		System.out.println("Accessed Square class");
		return numSides;
	}
	
	public void setArea (int x) {
		area = x*x;
	}
	
	public int getArea () {
		return area;
	}
	
	public void printArea () {
		System.out.println(area);
	}
	
	public void printName () {
		System.out.println(name);
	}
	
	public static void main(String[] args) {
		Square square = new Square("Lil B");
		square.printName();
		System.out.println(square.getNumSides());
	}
	
}