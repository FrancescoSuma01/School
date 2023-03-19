

import javax.swing.*;
import javax.swing.border.Border;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;

public class PannelloForm extends JPanel {

    private JLabel numerocontatorLabel;
    private JLabel consumoLabel;
    private JLabel dataLabel;


    private JTextField numeroContatorField;
    private JTextField consumoField;
    private JTextField dataField;


    private JButton bottoneInvia;

    private FormListener formListener;

    PannelloForm() {
        setPreferredSize(new Dimension(300, 100));
        setLayout(new GridBagLayout());

        // Bordi
        Border bordoInterno = BorderFactory.createTitledBorder("Contatore");
        Border bordoEsterno = BorderFactory.createEmptyBorder(0, 5, 5, 5);
        Border bordoFinale = BorderFactory.createCompoundBorder(bordoEsterno, bordoInterno);

        setBorder(bordoFinale);

        // numeroContatore
        numerocontatorLabel = new JLabel("Numero Contatore: ");
        numeroContatorField = new JTextField(15);

        numerocontatorLabel.setLabelFor(numeroContatorField);
        numerocontatorLabel.setDisplayedMnemonic(KeyEvent.VK_M);

        // consumo
        consumoLabel = new JLabel("Consumo: ");
        consumoField = new JTextField(15);

        //data
        dataLabel = new JLabel("Data: ");
        dataField = new JTextField(15);

        // Bottone
        bottoneInvia = new JButton("Invia");
        bottoneInvia.setMnemonic(KeyEvent.VK_A);

        bottoneInvia.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String nunContatore = numeroContatorField.getText();
                String consumo = consumoField.getText();
                String data = dataField.getText();

    
                FormEvent formEvent = new FormEvent(this, nunContatore, consumo, data);

                if (formListener != null) {
                    formListener.formEventListener(formEvent);
                }
            }
        });

        // Layout
        GridBagConstraints gbc = new  GridBagConstraints();

        // RIGA 1: label numeroContatore
        gbc.gridx = 0;
        gbc.gridy = 0;

        gbc.weightx = 0.01;
        gbc.weighty = 0.03;

        gbc.anchor = GridBagConstraints.LINE_END;

        gbc.insets = new Insets(0, 0, 0, 5);

        add(numerocontatorLabel, gbc);

        // RIGA 1: field numeroContatore
        gbc.gridx = 1;
        gbc.gridy = 0;

        gbc.weightx = 0.01;
        gbc.weighty = 0.03;

        gbc.anchor = GridBagConstraints.LINE_START;

        gbc.insets = new Insets(0, 0, 0, 0);

        add(numeroContatorField, gbc);

        // RIGA 2: label consumo
        gbc.gridx = 0;
        gbc.gridy = 1;

        gbc.weightx = 0.01;
        gbc.weighty = 0.03;

        gbc.anchor = GridBagConstraints.LINE_END;

        gbc.insets = new Insets(0, 0, 0, 5);

        add(consumoLabel, gbc);

        // RIGA 2: field consumo
        gbc.gridx = 1;
        gbc.gridy = 1;

        gbc.weightx = 0.01;
        gbc.weighty = 0.03;

        gbc.anchor = GridBagConstraints.LINE_START;

        gbc.insets = new Insets(0, 0, 0, 0);

        add(consumoField, gbc);

        // RIGA 3: label data
        gbc.gridx = 0;
        gbc.gridy = 2;

        gbc.weightx = 0.01;
        gbc.weighty = 0.03;

        gbc.anchor = GridBagConstraints.LINE_END;

        gbc.insets = new Insets(0, 0, 0, 5);

        add(dataLabel, gbc);

        // RIGA 3: field data
        gbc.gridx = 1;
        gbc.gridy = 2;

        gbc.weightx = 0.01;
        gbc.weighty = 0.03;

        gbc.anchor = GridBagConstraints.LINE_START;

        gbc.insets = new Insets(0, 0, 0, 0);

        add(dataField, gbc);

        // RIGA FINALE: bottone
        gbc.gridx = 0;
        gbc.gridy = 11;

        gbc.weightx = 1.0;
        gbc.weighty = 1.0;

        gbc.gridwidth = 2;
        gbc.gridheight = 1;

        gbc.anchor = GridBagConstraints.PAGE_START;

        add(bottoneInvia, gbc);

    }

    public void setFormListener(FormListener formListener) {
        this.formListener = formListener;
    }
}