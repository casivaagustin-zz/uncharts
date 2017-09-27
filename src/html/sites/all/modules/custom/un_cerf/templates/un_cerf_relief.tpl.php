<h3>Maps and Infographics</h3>

<div class="row">
    <?php foreach ($data as $info): ?>
    <div class="col-md-4 relief-item">
        <h4 class="title">
             <?php echo $info->fields->title ?>
        </h4>
        <?php if (!empty($info->fields->file)): ?>
        <div class="thumb">
          <img src="<?php echo $info->fields->file[0]->preview->{'url-small'} ?>"/>
        </div>
        <div class="seemore">
            <a href="<?php echo $info->fields->file[0]->url ?>" target="_blank">
                See more
            </a>
        </div>
        <?php endif; ?>
    </div>
    <?php endforeach; ?>
</div>