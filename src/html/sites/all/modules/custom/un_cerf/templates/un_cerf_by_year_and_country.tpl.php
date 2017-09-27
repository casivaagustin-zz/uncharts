<h3>Funding by year and country</h3>

<script type="text/javascript">
    google.charts.setOnLoadCallback(drawYearCountry);

    function drawYearCountry() {
        var data = JSON.parse('<?php echo json_encode($data) ?>');
        console.log(data);
        var data = google.visualization.arrayToDataTable(data);

        var view = new google.visualization.DataView(data);

        view.setColumns([0, 1, 2, 3, 4, 5]);

        var options = {
            width: '100%',
            legend: { position: 'bottom', maxLines: 3 },
            isStacked: true
        };

        var chart = new google.visualization.ColumnChart(document.getElementById("drawYearCountry"));
        chart.draw(view, options);
    }
</script>
<div id="drawYearCountry" style="width: 100%;"></div>