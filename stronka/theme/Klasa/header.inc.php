<?php if(!defined('IN_GS')){ die('you cannot load this page directly.'); } ?>
<!DOCTYPE html>
<html lang="pl">

<head>
   <meta charset="utf-8">
   <meta name="viewport" content="width=device-width, initial-scale=1">
   <meta http-equiv="x-ua-compatible" content="ie=edge">
   <title><?php get_page_clean_title(); ?> - <?php get_site_name(); ?></title>
   <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css">
   <link rel="stylesheet" href="<?php get_theme_url(); ?>/style.css">
      <!-- jQuery library -->
   <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
   <?php get_header(); ?>
</head>

<body>
	<?php include('nav.inc.php'); ?>
<header>
 <div class="jumbotron">
    <div class="container">
      <h1 class="display-5"><?php get_site_name(); ?> – <?php get_page_title(); ?></h1>
      <p class="lead">Serwis klasy 1A I LO</p>
    </div>
  </div>
  <div class="container breadcrumbs">
    <div class="row p-2">
      <a href="<?php echo find_url('index',null); ?>">Strona główna</a>
      <?php
        $menu2 = return_i18n_breadcrumbs(return_page_slug());
        for ($i = 0; $i < count($menu2) - 1; $i++)
          echo '&nbsp;/&nbsp;<a href="'.$menu2[$i]['url'].'">'.$menu2[$i]['title'].'</a>';
        echo '&nbsp;/&nbsp;'.$menu2[$i]['title'];
      ?>
    </div>
  </div>
</header>