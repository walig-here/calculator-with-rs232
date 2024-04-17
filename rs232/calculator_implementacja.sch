<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="data_ready" />
        <signal name="reset" />
        <signal name="XLXN_3" />
        <signal name="clock" />
        <signal name="XLXN_5" />
        <signal name="calc_input(7:0)" />
        <signal name="result_sent" />
        <signal name="data_in" />
        <signal name="result(11:0)" />
        <signal name="send" />
        <port polarity="Input" name="reset" />
        <port polarity="Input" name="clock" />
        <port polarity="Input" name="result_sent" />
        <port polarity="Input" name="data_in" />
        <port polarity="Output" name="result(11:0)" />
        <port polarity="Output" name="send" />
        <blockdef name="calculator">
            <timestamp>2024-4-17T18:34:58</timestamp>
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="256" x="64" y="-320" height="384" />
        </blockdef>
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
        <block symbolname="calculator" name="XLXI_1">
            <blockpin signalname="data_ready" name="read_input" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="result_sent" name="result_sent" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="calc_input(7:0)" name="calc_input(7:0)" />
            <blockpin signalname="send" name="send" />
            <blockpin signalname="result(11:0)" name="result(11:0)" />
        </block>
        <block symbolname="rs232_receiver" name="XLXI_2">
            <blockpin signalname="data_in" name="data_in" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="data_ready" name="ready" />
            <blockpin signalname="calc_input(7:0)" name="data_out(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1936" y="1440" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1168" y="1312" name="XLXI_2" orien="R0">
        </instance>
        <branch name="data_ready">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1744" y="1152" type="branch" />
            <wire x2="1744" y1="1152" y2="1152" x1="1552" />
            <wire x2="1936" y1="1152" y2="1152" x1="1744" />
        </branch>
        <branch name="reset">
            <wire x2="1152" y1="1728" y2="1728" x1="992" />
            <wire x2="1168" y1="1728" y2="1728" x1="1152" />
            <wire x2="1824" y1="1728" y2="1728" x1="1168" />
            <wire x2="1840" y1="1728" y2="1728" x1="1824" />
            <wire x2="1168" y1="1280" y2="1280" x1="1152" />
            <wire x2="1152" y1="1280" y2="1728" x1="1152" />
            <wire x2="1840" y1="1216" y2="1728" x1="1840" />
            <wire x2="1936" y1="1216" y2="1216" x1="1840" />
        </branch>
        <iomarker fontsize="28" x="992" y="1728" name="reset" orien="R180" />
        <branch name="clock">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1040" y="1664" type="branch" />
            <wire x2="1040" y1="1664" y2="1664" x1="992" />
            <wire x2="1088" y1="1664" y2="1664" x1="1040" />
            <wire x2="1776" y1="1664" y2="1664" x1="1088" />
            <wire x2="1168" y1="1216" y2="1216" x1="1088" />
            <wire x2="1088" y1="1216" y2="1664" x1="1088" />
            <wire x2="1776" y1="1344" y2="1664" x1="1776" />
            <wire x2="1936" y1="1344" y2="1344" x1="1776" />
        </branch>
        <iomarker fontsize="28" x="992" y="1664" name="clock" orien="R180" />
        <branch name="calc_input(7:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1616" y="1280" type="branch" />
            <wire x2="1616" y1="1280" y2="1280" x1="1552" />
            <wire x2="1744" y1="1280" y2="1280" x1="1616" />
            <wire x2="1744" y1="1280" y2="1472" x1="1744" />
            <wire x2="1936" y1="1472" y2="1472" x1="1744" />
        </branch>
        <branch name="result_sent">
            <wire x2="1920" y1="1568" y2="1568" x1="1008" />
            <wire x2="1920" y1="1280" y2="1568" x1="1920" />
            <wire x2="1936" y1="1280" y2="1280" x1="1920" />
        </branch>
        <iomarker fontsize="28" x="1008" y="1568" name="result_sent" orien="R180" />
        <branch name="data_in">
            <wire x2="1168" y1="1152" y2="1152" x1="976" />
        </branch>
        <iomarker fontsize="28" x="976" y="1152" name="data_in" orien="R180" />
        <branch name="result(11:0)">
            <wire x2="2512" y1="1408" y2="1408" x1="2320" />
        </branch>
        <iomarker fontsize="28" x="2512" y="1408" name="result(11:0)" orien="R0" />
        <branch name="send">
            <wire x2="2480" y1="1152" y2="1152" x1="2320" />
        </branch>
        <iomarker fontsize="28" x="2480" y="1152" name="send" orien="R0" />
    </sheet>
</drawing>