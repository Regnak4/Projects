public class PPMain {
    public static void main(String[] args)
        throws WritingUtencilException
    {
        AutoPen pen = new AutoPen();
        Paper paper = new Paper();

        System.out.println(paper);
        System.out.println(pen);

        pen.click();
        pen.write(paper, "Hello, Java!");
        paper.show();

        System.out.println(paper);
        System.out.println(pen);
    }
}
