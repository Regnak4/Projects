public class AutoPen extends Pen {
    private boolean isOpen;

    public AutoPen(int capacity) {
        super(capacity);
        this.isOpen = false;
    }

    public AutoPen() {
        super(4096);
        this.isOpen = false;
    }

    public boolean open() {
        return this.isOpen;
    }

    public void click() {
        this.isOpen = !this.isOpen;
    }

    @Override
    public String toString() {
        StringBuilder out = new StringBuilder();
        out.append("AutoPen [");
        out.append(this.amount);
        out.append("/");
        out.append(this.capacity);
        out.append("](");
        out.append((this.open()) ? "open)" : "closed)");

        return out.toString();
    }

    @Override
    public void write(Paper paper, String message)
        throws WritingUtencilException
    {
        if ( !this.open() ) {
            throw new ClosedPenException();
        }
        super.write(paper, message);
    }
}
