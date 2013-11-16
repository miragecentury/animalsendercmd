/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package org.qeo;

/**
 * A generic 128-bit UUID.
 */
public class UUID
{
    /**
     * Upper 64-bit of identifier.
     */
    public long upper;

    /**
     * Lower 64-bit of identifier.
     */
    public long lower;

    public UUID()
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
        final UUID myObj = (UUID)obj;
        if (upper != myObj.upper) {
            return false;
        }
        if (lower != myObj.lower) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + (int) (upper ^ (upper >>> 32));
        result = prime * result + (int) (lower ^ (lower >>> 32));
        return result;
    }
}
