public class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsLimit;
    private String name;

    public Unit(String name, int hp, int dmg) {
        this.name = name;
        this.hitPointsLimit = hp;
        this.hitPoints = hp;
        this.damage = dmg;
    }

    public Unit() {
        this.name = "Unit";
        this.hitPointsLimit = 10;
        this.hitPoints = 10;
        this.damage = 1;
    }

    public int getDamage() {
        return damage;
    }

    public int getHitPoints() {
        return hitPoints;
    }

    public int getHitPointsLimit() {
        return hitPointsLimit;
    }
    
    public String getName() {
        return name;
    }

    public void ensureIsAlive() throws UnitIsDeadException {
        if ( hitPoints == 0 ) {
            throw new UnitIsDeadException();
        }
    }

    public void addHitPoints(int hp) throws UnitIsDeadException {
        ensureIsAlive();

        int healedHp = hitPoints + hp;

        if ( healedHp >  hitPointsLimit ) {
            healedHp = hitPointsLimit;
        }
        hitPoints = healedHp;
    }
    
    public void takeDamage(int dmg) throws UnitIsDeadException {
        ensureIsAlive();

        hitPoints -= dmg;

        if ( hitPoints < 0 ) {
            hitPoints = 0;
            throw new UnitIsDeadException();
        }
    }

    public void attack(Unit enemy) throws UnitIsDeadException {
        enemy.takeDamage(damage);
        enemy.counterAttack(this);
    }

    public void counterAttack(Unit enemy) throws UnitIsDeadException {
        enemy.takeDamage(damage/2);
    }

    public String toString() {
        return "=========================\n" + "Unit name: " + getName() + "\nUnit hitpoints: " + getHitPoints() + "/" + getHitPointsLimit() + "\nUnit damage: " + getDamage() + "\n=========================";
    }
}