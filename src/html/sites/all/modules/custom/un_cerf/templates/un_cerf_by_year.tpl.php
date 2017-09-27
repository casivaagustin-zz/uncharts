<h3>Funding by year and Window</h3>

<script type="text/javascript">
    google.charts.setOnLoadCallback(drawChart);

    function drawChart() {
        var data = JSON.parse('<?php echo json_encode($data) ?>');
        var data = google.visualization.arrayToDataTable(data);

        var view = new google.visualization.DataView(data);

        view.setColumns([0, 1,
            { calc: "stringify",
                sourceColumn: 1,
                type: "string",
                role: "annotation"
            },
            2]
        );

        var options = {
            width: 600,
            height: 400,
            legend: { position: 'bottom', maxLines: 3 },
            bar: { groupWidth: '75%' },
            isStacked: true
        };

        var chart = new google.visualization.ColumnChart(document.getElementById("by_year"));
        chart.draw(view, options);
    }
</script>
<div id="by_year" style="width: 100%;"></div>