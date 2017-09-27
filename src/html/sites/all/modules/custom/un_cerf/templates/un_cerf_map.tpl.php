<h3>Funding by Country</h3>

<script type="text/javascript">
    google.charts.setOnLoadCallback(drawRegionsMap);

    function drawRegionsMap() {
        var data = JSON.parse('<?php echo json_encode($data) ?>');
        var data = google.visualization.arrayToDataTable(data);
        var options = {};
        var chart = new google.visualization.GeoChart(document.getElementById('regions_div'));
        chart.draw(data, options);
    }
</script>
<div id="regions_div" style="width: 100%;"></div>