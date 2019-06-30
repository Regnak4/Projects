public class Pen implements WritingUtencil {
    protected int amount;
    protected int capacity;

    public Pen(int capacity) {
        this.amount = capacity;
        this.capacity = capacity;
    }

    public Pen() {
        this(4096);
    }

    public int getCapacity() {
        return this.capacity;
    }
    
    public int getAmount() {
        return this.amount;
    }

    public void refill() {
        this.amount = this.capacity;
    }

    @Override
    public String toString() {
        StringBuilder out = new StringBuilder();
        out.append("Pen [");
        out.append(this.amount);
        out.append("/");
        out.append(this.capacity);
        out.append("]");

        return out.toString();
    }

    @Override
    public void write(Paper paper, String message)
        throws WritingUtencilException
    {
        if ( this.amount == 0 ) {
            throw new OutOfInkException();
        }
        if ( this.amount < message.length() ) {
            paper.addContent(message.substring(0, this.amount));
            this.amount = 0;
            return;
        }
        paper.addContent(message);
        this.amount -= message.length();
    }
}
