<?php if(!defined('IN_GS')){ die('you cannot load this page directly.'); } ?>
<?php include('header.inc.php'); ?>

   <div class="container">
      <div class="row">
         <div class="col-md-8">
            <section class="my-4">
<?php get_page_content(); ?>
            </section>
         </div>
         <div class="col-md-4">
<?php include('aside.php'); ?>
         </div>
      </div>
   </div>

<?php include('footer.inc.php'); ?>

   <!-- Popper JS -->
   <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js"></script>
   <!-- Latest compiled JavaScript -->
   <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js"></script>
</body>

</html>
