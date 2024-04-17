<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="start">
        </signal>
        <signal name="reset" />
        <signal name="clock" />
        <signal name="data_in(7:0)">
        </signal>
        <signal name="data_out" />
        <signal name="busy" />
        <signal name="XLXN_1" />
        <signal name="XLXN_2" />
        <signal name="XLXN_3(7:0)" />
        <signal name="XLXN_4" />
        <signal name="XLXN_5" />
        <signal name="PS2_Clk" />
        <signal name="PS2_Data" />
        <port polarity="Input" name="reset" />
        <port polarity="Input" name="clock" />
        <port polarity="Output" name="data_out" />
        <port polarity="Output" name="busy" />
        <port polarity="Input" name="PS2_Clk" />
        <port polarity="Input" name="PS2_Data" />
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
        <blockdef name="PS2_Rx">
            <timestamp>2009-5-15T10:32:14</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
        </blockdef>
        <block symbolname="rs232_transmitter" name="XLXI_1">
            <blockpin signalname="start" name="start" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="data_in(7:0)" name="data_in(7:0)" />
            <blockpin signalname="data_out" name="data_out" />
            <blockpin signalname="busy" name="busy" />
        </block>
        <block symbolname="PS2_Rx" name="XLXI_2">
            <blockpin signalname="PS2_Clk" name="PS2_Clk" />
            <blockpin signalname="PS2_Data" name="PS2_Data" />
            <blockpin signalname="clock" name="Clk_50MHz" />
            <blockpin signalname="clock" name="Clk_Sys" />
            <blockpin signalname="start" name="DO_Rdy" />
            <blockpin signalname="data_in(7:0)" name="DO(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1424" y="1440" name="XLXI_1" orien="R0">
        </instance>
        <branch name="start">
            <wire x2="1104" y1="1296" y2="1296" x1="976" />
            <wire x2="1104" y1="1216" y2="1296" x1="1104" />
            <wire x2="1216" y1="1216" y2="1216" x1="1104" />
            <wire x2="1232" y1="1216" y2="1216" x1="1216" />
            <wire x2="1424" y1="1216" y2="1216" x1="1232" />
        </branch>
        <branch name="reset">
            <wire x2="464" y1="1632" y2="1632" x1="400" />
            <wire x2="1200" y1="1632" y2="1632" x1="464" />
            <wire x2="1216" y1="1280" y2="1280" x1="1200" />
            <wire x2="1232" y1="1280" y2="1280" x1="1216" />
            <wire x2="1424" y1="1280" y2="1280" x1="1232" />
            <wire x2="1200" y1="1280" y2="1632" x1="1200" />
        </branch>
        <branch name="clock">
            <wire x2="464" y1="1584" y2="1584" x1="400" />
            <wire x2="1136" y1="1584" y2="1584" x1="464" />
            <wire x2="592" y1="1360" y2="1360" x1="464" />
            <wire x2="464" y1="1360" y2="1424" x1="464" />
            <wire x2="464" y1="1424" y2="1584" x1="464" />
            <wire x2="592" y1="1424" y2="1424" x1="464" />
            <wire x2="1216" y1="1344" y2="1344" x1="1136" />
            <wire x2="1232" y1="1344" y2="1344" x1="1216" />
            <wire x2="1424" y1="1344" y2="1344" x1="1232" />
            <wire x2="1136" y1="1344" y2="1584" x1="1136" />
        </branch>
        <branch name="data_in(7:0)">
            <wire x2="1088" y1="1232" y2="1232" x1="976" />
            <wire x2="1088" y1="1232" y2="1408" x1="1088" />
            <wire x2="1216" y1="1408" y2="1408" x1="1088" />
            <wire x2="1424" y1="1408" y2="1408" x1="1216" />
        </branch>
        <branch name="data_out">
            <wire x2="2000" y1="1216" y2="1216" x1="1808" />
        </branch>
        <branch name="busy">
            <wire x2="2000" y1="1408" y2="1408" x1="1808" />
        </branch>
        <iomarker fontsize="28" x="2000" y="1216" name="data_out" orien="R0" />
        <instance x="592" y="1456" name="XLXI_2" orien="R0">
        </instance>
        <iomarker fontsize="28" x="2000" y="1408" name="busy" orien="R0" />
        <iomarker fontsize="28" x="400" y="1584" name="clock" orien="R180" />
        <iomarker fontsize="28" x="400" y="1632" name="reset" orien="R180" />
        <branch name="PS2_Clk">
            <wire x2="592" y1="1232" y2="1232" x1="368" />
        </branch>
        <branch name="PS2_Data">
            <wire x2="592" y1="1296" y2="1296" x1="368" />
        </branch>
        <iomarker fontsize="28" x="368" y="1232" name="PS2_Clk" orien="R180" />
        <iomarker fontsize="28" x="368" y="1296" name="PS2_Data" orien="R180" />
    </sheet>
</drawing>