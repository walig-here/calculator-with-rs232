<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="reset" />
        <signal name="calc_input(7:0)" />
        <signal name="data_in" />
        <signal name="result(7:0)" />
        <signal name="send" />
        <signal name="clock" />
        <signal name="data_ready" />
        <signal name="data_out" />
        <signal name="XLXN_12" />
        <signal name="result_sent" />
        <signal name="XLXN_14" />
        <signal name="not_busy" />
        <signal name="busy" />
        <port polarity="Input" name="reset" />
        <port polarity="Input" name="data_in" />
        <port polarity="Input" name="clock" />
        <port polarity="Output" name="data_out" />
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
        <blockdef name="calculator">
            <timestamp>2024-4-18T11:38:58</timestamp>
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
        <blockdef name="rs232_transmitter">
            <timestamp>2024-4-18T9:19:53</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="impulse_generator">
            <timestamp>2024-5-15T14:10:14</timestamp>
            <rect width="304" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
        </blockdef>
        <block symbolname="rs232_receiver" name="XLXI_2">
            <blockpin signalname="data_in" name="data_in" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="data_ready" name="ready" />
            <blockpin signalname="calc_input(7:0)" name="data_out(7:0)" />
        </block>
        <block symbolname="calculator" name="XLXI_4">
            <blockpin signalname="data_ready" name="read_input" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="result_sent" name="result_sent" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="calc_input(7:0)" name="calc_input(7:0)" />
            <blockpin signalname="send" name="send" />
            <blockpin signalname="result(7:0)" name="result(7:0)" />
        </block>
        <block symbolname="rs232_transmitter" name="XLXI_7">
            <blockpin signalname="send" name="start" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="result(7:0)" name="data_in(7:0)" />
            <blockpin signalname="data_out" name="data_out" />
            <blockpin signalname="busy" name="busy" />
        </block>
        <block symbolname="impulse_generator" name="XLXI_10">
            <blockpin signalname="not_busy" name="input_signal" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="result_sent" name="output_impulse" />
        </block>
        <block symbolname="inv" name="XLXI_11">
            <blockpin signalname="busy" name="I" />
            <blockpin signalname="not_busy" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="496" y="1024" name="XLXI_2" orien="R0">
        </instance>
        <branch name="reset">
            <wire x2="480" y1="1440" y2="1440" x1="320" />
            <wire x2="1168" y1="1440" y2="1440" x1="480" />
            <wire x2="1680" y1="1440" y2="1440" x1="1168" />
            <wire x2="496" y1="992" y2="992" x1="480" />
            <wire x2="480" y1="992" y2="1440" x1="480" />
            <wire x2="1168" y1="928" y2="1440" x1="1168" />
            <wire x2="1264" y1="928" y2="928" x1="1168" />
            <wire x2="1680" y1="992" y2="1440" x1="1680" />
            <wire x2="2128" y1="992" y2="992" x1="1680" />
        </branch>
        <branch name="calc_input(7:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="944" y="992" type="branch" />
            <wire x2="944" y1="992" y2="992" x1="880" />
            <wire x2="1072" y1="992" y2="992" x1="944" />
            <wire x2="1072" y1="992" y2="1184" x1="1072" />
            <wire x2="1264" y1="1184" y2="1184" x1="1072" />
        </branch>
        <branch name="data_in">
            <wire x2="496" y1="864" y2="864" x1="304" />
        </branch>
        <branch name="result(7:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1760" y="1120" type="branch" />
            <wire x2="1760" y1="1120" y2="1120" x1="1648" />
            <wire x2="2128" y1="1120" y2="1120" x1="1760" />
        </branch>
        <branch name="send">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1712" y="864" type="branch" />
            <wire x2="1712" y1="864" y2="864" x1="1648" />
            <wire x2="1808" y1="864" y2="864" x1="1712" />
            <wire x2="1808" y1="864" y2="928" x1="1808" />
            <wire x2="2128" y1="928" y2="928" x1="1808" />
        </branch>
        <branch name="clock">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="368" y="1376" type="branch" />
            <wire x2="368" y1="1376" y2="1376" x1="320" />
            <wire x2="416" y1="1376" y2="1376" x1="368" />
            <wire x2="896" y1="1376" y2="1376" x1="416" />
            <wire x2="1104" y1="1376" y2="1376" x1="896" />
            <wire x2="1664" y1="1376" y2="1376" x1="1104" />
            <wire x2="896" y1="1376" y2="2048" x1="896" />
            <wire x2="1120" y1="2048" y2="2048" x1="896" />
            <wire x2="496" y1="928" y2="928" x1="416" />
            <wire x2="416" y1="928" y2="1376" x1="416" />
            <wire x2="1104" y1="1056" y2="1376" x1="1104" />
            <wire x2="1264" y1="1056" y2="1056" x1="1104" />
            <wire x2="1120" y1="1968" y2="2048" x1="1120" />
            <wire x2="1664" y1="1056" y2="1376" x1="1664" />
            <wire x2="2128" y1="1056" y2="1056" x1="1664" />
        </branch>
        <branch name="data_ready">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1072" y="864" type="branch" />
            <wire x2="1072" y1="864" y2="864" x1="880" />
            <wire x2="1264" y1="864" y2="864" x1="1072" />
        </branch>
        <instance x="1264" y="1152" name="XLXI_4" orien="R0">
        </instance>
        <iomarker fontsize="28" x="320" y="1440" name="reset" orien="R180" />
        <iomarker fontsize="28" x="320" y="1376" name="clock" orien="R180" />
        <iomarker fontsize="28" x="304" y="864" name="data_in" orien="R180" />
        <instance x="2128" y="1152" name="XLXI_7" orien="R0">
        </instance>
        <branch name="data_out">
            <wire x2="2768" y1="928" y2="928" x1="2512" />
        </branch>
        <iomarker fontsize="28" x="2768" y="928" name="data_out" orien="R0" />
        <branch name="result_sent">
            <attrtext style="alignment:SOFT-TVCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1184" y="1280" type="branch" />
            <wire x2="1264" y1="992" y2="992" x1="1184" />
            <wire x2="1184" y1="992" y2="1280" x1="1184" />
            <wire x2="1184" y1="1280" y2="1536" x1="1184" />
        </branch>
        <instance x="1088" y="1968" name="XLXI_10" orien="M270">
        </instance>
        <instance x="1840" y="2016" name="XLXI_11" orien="R180" />
        <branch name="not_busy">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1392" y="2048" type="branch" />
            <wire x2="1184" y1="1968" y2="2048" x1="1184" />
            <wire x2="1392" y1="2048" y2="2048" x1="1184" />
            <wire x2="1616" y1="2048" y2="2048" x1="1392" />
        </branch>
        <branch name="busy">
            <attrtext style="alignment:SOFT-TVCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2592" y="1776" type="branch" />
            <wire x2="2592" y1="2048" y2="2048" x1="1840" />
            <wire x2="2592" y1="1120" y2="1120" x1="2512" />
            <wire x2="2592" y1="1120" y2="1776" x1="2592" />
            <wire x2="2592" y1="1776" y2="2048" x1="2592" />
        </branch>
    </sheet>
</drawing>