import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class Menu extends JFrame implements ActionListener {
    JMenuBar menuBar;
    JMenu fileMenu;
    JMenuItem newMenu, openMenu, saveMenu, exitMenu;

    Menu() {
        menuBar = new JMenuBar();
        fileMenu = new JMenu("File");
        menuBar.add(fileMenu);
        newMenu = new JMenuItem("New");
        newMenu.addActionListener(this);
        fileMenu.add(newMenu);
        openMenu = new JMenuItem("Open");
        openMenu.addActionListener(this);
        fileMenu.add(openMenu);
        saveMenu = new JMenuItem("Save");
        saveMenu.addActionListener(this);
        fileMenu.add(saveMenu);
        fileMenu.addSeparator();
        exitMenu = new JMenuItem("Exit");
        exitMenu.addActionListener(this);
        fileMenu.add(exitMenu);
        menuBar.add(newMenu);
        menuBar.add(openMenu);
        menuBar.add(saveMenu);
        menuBar.add(exitMenu);
        setJMenuBar(menuBar);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent event) {
                System.exit(0);
            }
        });
        setTitle("Menu Demo");
        setSize(300, 300);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent event) {
        String command = event.getActionCommand();
        switch (command) {
            case "New":
                JOptionPane.showMessageDialog(this, "New file created");
                break;
            case "Open":
                JOptionPane.showMessageDialog(this, "Opened file");
                break;
            case "Save":
                JOptionPane.showMessageDialog(this, "Saved file");
                break;
            case "Exit":
                System.exit(0);
                break;
        }
    }

    public static void main(String args[]) {
        new Menu();
    }
}