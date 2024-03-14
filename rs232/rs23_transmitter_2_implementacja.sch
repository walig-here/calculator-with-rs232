<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="start" />
        <signal name="reset" />
        <signal name="clock" />
        <signal name="data_in" />
        <signal name="data_out" />
        <signal name="busy" />
        <port polarity="Input" name="start" />
        <port polarity="Input" name="reset" />
        <port polarity="Input" name="clock" />
        <port polarity="Input" name="data_in" />
        <port polarity="Output" name="data_out" />
        <port polarity="Output" name="busy" />
        <blockdef name="rs232_transmitter">
            <timestamp>2024-3-14T12:42:8</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="rs232_transmitter" name="XLXI_1">
            <blockpin signalname="start" name="start" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="data_in" name="data_in(7:0)" />
            <blockpin signalname="data_out" name="data_out" />
            <blockpin signalname="busy" name="busy" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1424" y="1440" name="XLXI_1" orien="R0">
        </instance>
        <branch name="start">
            <wire x2="1232" y1="1216" y2="1216" x1="1216" />
            <wire x2="1424" y1="1216" y2="1216" x1="1232" />
        </branch>
        <branch name="reset">
            <wire x2="1232" y1="1280" y2="1280" x1="1216" />
            <wire x2="1424" y1="1280" y2="1280" x1="1232" />
        </branch>
        <branch name="clock">
            <wire x2="1232" y1="1344" y2="1344" x1="1216" />
            <wire x2="1424" y1="1344" y2="1344" x1="1232" />
        </branch>
        <branch name="data_in">
            <wire x2="1424" y1="1408" y2="1408" x1="1216" />
        </branch>
        <branch name="data_out">
            <wire x2="2000" y1="1216" y2="1216" x1="1808" />
        </branch>
        <branch name="busy">
            <wire x2="2000" y1="1408" y2="1408" x1="1808" />
        </branch>
        <iomarker fontsize="28" x="2000" y="1216" name="data_out" orien="R0" />
        <iomarker fontsize="28" x="2000" y="1408" name="busy" orien="R0" />
        <iomarker fontsize="28" x="1216" y="1216" name="start" orien="R180" />
        <iomarker fontsize="28" x="1216" y="1280" name="reset" orien="R180" />
        <iomarker fontsize="28" x="1216" y="1344" name="clock" orien="R180" />
        <iomarker fontsize="28" x="1216" y="1408" name="data_in" orien="R180" />
    </sheet>
</drawing>