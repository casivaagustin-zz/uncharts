<h3>You may filter funding by</h3>

<form action="<?php echo current_path() ?>" method="POST">
    <div class="form-group row">
        <label class="col-sm-3 control-label">Year</label>
        <div class="col-sm-8 input-group date">
            <select class="form-control filter" id="yearselect"
                    name="yearselect">
                <option>All</option>
                <option>2013</option>
                <option>2014</option>
                <option>2015</option>
                <option>2016</option>
            </select>
        </div>
    </div>
    <div class="form-group row">
        <label class="col-sm-3 control-label">Window</label>
        <div class="col-sm-8 input-group date">
            <select class="form-control filter" id="windowselect"
                    name="windowselect">
                <option value="All"> --Both Windows--</option>
                <option value="3"> Rapid Response</option>
                <option value="2"> Underfunded Emergencies</option>
            </select>
        </div>
    </div>
    <div class="form-group row">
        <label class="col-sm-3 control-label">Agency</label>
        <div class="col-sm-8 input-group date">
            <select class="form-control filter" id="agencyselect"
                    name="agencyselect">

                <option value="All">--All Agencies--</option>
                <option value="3">WHO</option>
                <option value="4">CEF</option>
                <option value="2">WFP</option>
                <option value="11">HCR</option>
                <option value="17">WOM</option>
                <option value="5">FAO</option>
                <option value="12">OPS</option>
                <option value="7">IOM</option>
                <option value="15">OCH</option>
                <option value="1">UDP</option>
                <option value="16">ODC</option>
                <option value="13">RWA</option>
                <option value="22">ILO</option>
                <option value="6">FPA</option>
                <option value="14">ESC</option>
            </select>
        </div>
    </div>
    <div class="form-group row">
        <label class="col-sm-3 control-label">Sector</label>
        <div class="col-sm-8 input-group date">
            <select class="form-control filter" id="sectorselect"
                    name="sectorselect">

                <option value="All">--All Sectors--</option>
                <option value="9">Health</option>
                <option value="6">Early Recovery</option>
                <option value="19">Livestock</option>
                <option value="8">Food Aid</option>
                <option value="4">Common Humanitarian Air Services</option>
                <option value="1">Agriculture</option>
                <option value="15">Human Rights</option>
                <option value="25">Child Protection</option>
                <option value="7">Education</option>
                <option value="22">Non-Food Items</option>
                <option value="17">Shelter</option>
                <option value="14">Protection</option>
                <option value="13">Multi-sector</option>
                <option value="16">Safety and Security of Staff and Operations</option>
                <option value="3">Common Logistics</option>
            </select>
        </div>
    </div>
    <div class="form-group row">
        <label class="col-sm-3 control-label">Emergency</label>
        <div class="col-sm-8 input-group date">
            <select class="form-control filter" id="emergencyselect"
                    name="emergencyselect">
                <option>All</option>
                <option>Biological (human disease outbreak and other health emergency)</option>
                <option>Geophysical</option>
                <option>Meteorological, Hydrological and Climatological</option>
                <option>Conflict-related</option>
                <option>Economic</option>
                <option>Biological (animal and flora)</option>
                <option>Internal strife</option>
            </select>
        </div>
    </div>
    <div class="form-group row">
        <label class="col-sm-3 control-label"></label>
        <div class="col-sm-8 ">
            <button type="button" id="resetbutton" name="resetbutton"
                    class="btn btn-primary">Reset Filter
            </button>
            <button type="button" id="exportbutton" name="exportbutton"
                    class="btn btn-primary">Export to Excel
            </button>
            <input type="submit" id="icon" name="icon"
                   class="btn btn-success"></input>
        </div>
    </div>

</form>

