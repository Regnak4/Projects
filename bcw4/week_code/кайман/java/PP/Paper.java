public class Paper {
    private int symbols;
    private StringBuilder content = new StringBuilder();

    public Paper(int symbols) {
        this.symbols = symbols;
    }

    public Paper() {
        this(1024);
    }

    public int getSymbols() {
        return this.symbols;
    }

    public void show() {
        System.out.println(this.content);
    }

    @Override
    public String toString() {
        StringBuilder out = new StringBuilder();
        out.append("Paper [");
        out.append(this.content.length());
        out.append("/");
        out.append(this.symbols);
        out.append("]");

        return out.toString();
    }

    public void addContent(String message)
        throws WritingUtencilException
    {
        int total = message.length() + this.content.length();

        if ( this.content.length() == this.symbols ) {
            throw new OutOfSpaceException();
        }
        if ( total > this.symbols ) {
            this.content.append(message.substring(0, this.symbols - this.content.length()));
            return;
        }
        this.content.append(message);
    }
}
