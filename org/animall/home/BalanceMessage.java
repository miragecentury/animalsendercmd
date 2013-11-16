/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package org.animall.home;

/**
 * Change de poid de la balance
 */
public class BalanceMessage
{
    /**
     * uuid de la balance.
     */
    public org.qeo.system.UUID from;

    /**
     * the new poids de l'animal
     */
    public float weight;

    /**
     * timestamp
     */
    public int timestamp;

    public BalanceMessage()
    {
    }

    @Override
    public boolean equals(Object obj)
    {
        if (obj == this) {
            return true;
        }
        if ((obj == null) || (obj.getClass() != this.getClass())) {
            return false;
        }
        final BalanceMessage myObj = (BalanceMessage)obj;
        if (!from.equals(myObj.from)) {
            return false;
        }
        if (weight != myObj.weight) {
            return false;
        }
        if (timestamp != myObj.timestamp) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((from == null) ? 0 : from.hashCode());
        result = prime * result + Float.floatToIntBits(weight);
        result = prime * result + timestamp;
        return result;
    }
}
