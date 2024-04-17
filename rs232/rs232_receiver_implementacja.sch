<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="data_in" />
        <signal name="clock" />
        <signal name="reset" />
        <signal name="ready" />
        <signal name="data_out(7:0)" />
        <port polarity="Input" name="data_in" />
        <port polarity="Input" name="clock" />
        <port polarity="Input" name="reset" />
        <port polarity="Output" name="ready" />
        <port polarity="Output" name="data_out(7:0)" />
        <blockdef name="rs232_receiver">
            <timestamp>2024-4-4T10:14:20</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="rs232_receiver" name="XLXI_1">
            <blockpin signalname="data_in" name="data_in" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="ready" name="ready" />
            <blockpin signalname="data_out(7:0)" name="data_out(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1168" y="1088" name="XLXI_1" orien="R0">
        </instance>
        <branch name="data_in">
            <wire x2="1168" y1="928" y2="928" x1="912" />
        </branch>
        <branch name="clock">
            <wire x2="1168" y1="992" y2="992" x1="912" />
        </branch>
        <branch name="reset">
            <wire x2="1168" y1="1056" y2="1056" x1="912" />
        </branch>
        <branch name="ready">
            <wire x2="1728" y1="928" y2="928" x1="1552" />
        </branch>
        <branch name="data_out(7:0)">
            <wire x2="1728" y1="1056" y2="1056" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1728" y="1056" name="data_out(7:0)" orien="R0" />
        <iomarker fontsize="28" x="912" y="928" name="data_in" orien="R180" />
        <iomarker fontsize="28" x="912" y="992" name="clock" orien="R180" />
        <iomarker fontsize="28" x="912" y="1056" name="reset" orien="R180" />
        <iomarker fontsize="28" x="1728" y="928" name="ready" orien="R0" />
    </sheet>
</drawing>