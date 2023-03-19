

import java.util.EventObject;

public class FormEvent extends EventObject {

    private String numContatore;
    private String consumo;
    private String data;


    public FormEvent(Object source) {
        super(source);
    }

    public FormEvent(Object source, String numContatore, String consumo, String data) {
        super(source);
        this.numContatore = numContatore;
        this.consumo = consumo;
        this.data = data;
    }

    public String getnumContatore() {
        return numContatore;
    }

    public void setnumContatore(String numContatore) {
        this.numContatore = numContatore;
    }

    public String getConsumo() {
        return consumo;
    }

    public void setConsumo(String consumo) {
        this.consumo = consumo;
    }

    public String getData() {
        return data;
    }

    public void setData(String data) {
        this.data = data;
    }
}
