public class PPMain {
	public static void main(String[] args) throws OutOfInkException, OutOfSpaceException {
        Paper paper = new Paper();
        Pen pen = new Pen();

        try {
            pen.write(paper, "Hello, world!");
        } catch (OutOfInkException e) {
            System.out.println("ERR_Ink container is empty!");
        } catch (OutOfSpaceException e) {
        	System.out.println("ERR_Paper is overfilled!");
        }

        paper.show();
	}
}