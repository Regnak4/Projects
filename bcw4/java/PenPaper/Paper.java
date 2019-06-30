public class Paper {
    private int maxSymbols;
    private int symbols;
    private StringBuffer content;

    public Paper() {
        this.maxSymbols = 4096;
        this.symbols = 0;
        content = new StringBuffer();
    }

    public Paper(int maxSymbols) {
        this.maxSymbols = maxSymbols;
        this.symbols = 0;
        this.content = new StringBuffer();
    }

    public int getMaxSymbols() {
        return maxSymbols;
    }

    public int getSymbols() {
        return symbols;
    }

    public void addContent(String message) throws OutOfSpaceException {
        int total = content.length() + message.length();

        if ( content.length() == maxSymbols ) {
            throw new OutOfSpaceException();
        }
        if ( total > maxSymbols ) {
            content.append(message.substring(0, maxSymbols-content.length()));
            return;
        }
        content.append(message);
        symbols += content.length();
    }

    public void show() {
        System.out.println(content);
    }
};