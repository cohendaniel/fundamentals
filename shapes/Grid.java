public class Grid extends Square {
	
	private int numSquares;
	
	public Grid (String gridName) {
		super(gridName);
		numSquares = 3;
	}
	
	public int getNumSquares() {
		return numSquares;
	}
	
	public static void main (String[] args) {
		Grid g = new Grid("Lil g");
		g.printName();
		System.out.println(g.getNumSquares());
	}
}