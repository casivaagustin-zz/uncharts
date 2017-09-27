<h3>Funding Highlights</h3>

<div class="form-group row">
    <div class="col-sm-2 col-xs-2">
        <img src="http://35.167.145.172/ochasite/images/totalallocation.png" class="icon" />
    </div>
    <div class="col-sm-10 col-xs-10 input-group" style="color:#006DB7;">
        <div id="allocated" name="allocated" class="money">US$<?php echo $data->allocated ?></div>
        <span> ALLOCATED</span>
    </div>
</div>

<div class="form-group row">
    <div class="col-sm-2 col-xs-2">
        <img src="http://35.167.145.172/ochasite/images/rrallocation.png" class="icon" />
    </div>
    <div class="col-sm-10 col-xs-10 input-group" style="color:#F8C32F">
        <div id="rapidresponse" name="rapidresponse" class="money">US$<?php echo $data->rapidResponse ?></div>
        <span> RAPID RESPONSE</span>
    </div>
</div>
<div class="form-group row">
    <div class="col-sm-2 col-xs-2">
        <img src="http://35.167.145.172/ochasite/images/underfundedallocation.png" class="icon" />
    </div>
    <div class="col-sm-10 col-xs-10 input-group" style="color:#92B5DD">
        <div id="underfundedemergencies" name="underfundedemergencies" class="money">
            US$<?php echo $data->underfundedEmergencies ?>
        </div>
        <span> UNDERFUNDED EMERGENCIES</span>
    </div>
</div>
<div class="form-group row">
    <div class="col-sm-2 col-xs-2">
        <img src="http://35.167.145.172/ochasite/images/countriesassisted.png" class="icon" />
    </div>
    <div class="col-sm-10 col-xs-10 input-group">
        <div id="countriesassisted" name="countriesassisted" class="money"><?php echo $data->countriesAssisted ?></div>
        <span> COUNTRIES ASSISTED</span>
    </div>
</div>
<div class="form-group row">
    <div class="col-sm-2 col-xs-2">
        <img src="http://35.167.145.172/ochasite/images/projectsapproved.png" class="icon" />
    </div>
    <div class="col-sm-10 col-xs-10 input-group">
        <div id="projectsapproved" name="projectsapproved" class="money"><?php echo $data->projectsApproved ?></div>
        <span> PROJECTS APPROVED</span>
    </div>
</div>
