#include <Elementary.h>
#ifndef ELM_LIB_QUICKLAUNCH

static void ecaul_win_del(void *data, Evas_Object *obj, void *evet_info);
static void ecaul_main_win(void);

/*
 *
 * CALL BACKS
 *
 */

static void ecaul_win_del(void *data, Evas_Object *obj, void *event_info)
{
   /* called when  ecaul_main_win is requested to be deleted */
   elm_exit();
}

static void ecaul_main_win(void)
{
   Evas_Object *win, *bg, *bx0, *lb, *fr;
   // Evas_Object *win, *bg, *bx0, *lb, *fr, *en;
   // Evas_Object *win, *bg, *bx0, *lb, *li, *fr;
  
   /* Create the main window */
   win = elm_win_add(NULL, "main", ELM_WIN_BASIC);
   /* set the title of the window - this is in the titlebar */
   elm_win_title_set(win, "Elementary Source Mage GNU/Linux Installer");
   
   /* set a callback on the window when "delete-request" */
   evas_object_smart_callback_add(win, "delete-request", ecaul_win_del, NULL);
   
   /* add a background to our window. */
   bg = elm_bg_add(win);
   /* set weight to 1.0 x 1.0 == expand in both x and y direction */
   evas_object_size_hint_weight_set(bg, 1.0, 1.0);
   /* tell the window that this object is to be resized along with the window. */
   elm_win_resize_object_add(win, bg);
   /* and show the background */
   evas_object_show(bg);
   
   /* add a box layout widget to the window */
   bx0 = elm_box_add(win);
   /* allow base box (bx0) to expand in x and y */
   evas_object_size_hint_weight_set(bx0, 1.0, 1.0);
   /* tell the window that the box affects window size and also will be 
    * resized when the window is */
   elm_win_resize_object_add(win, bx0);
   evas_object_show(bx0);
   
   fr = elm_frame_add(win);
   elm_frame_label_set(fr, "Information");
   elm_box_pack_end(bx0, fr);
   evas_object_show(fr);
   
   lb = elm_label_add(win);
   elm_label_label_set(lb, 
                       "Welcome on SourceMage GNU/Linux.<br>"
                       "Thank you for choosing our distribution.<br>"
                       "You will see magic is at your fingertips.<br>");
   elm_frame_content_set(fr, lb);
   evas_object_show(lb);


/*   
   li = elm_list_add(win);
   elm_list_always_select_mode_set(li, 1);
   evas_object_size_hint_weight_set(li, 1.0, 1.0);
   evas_object_size_hint_align_set(li, -1.0, -1.0);
   elm_box_pack_end(bx0, li);
   evas_object_show(li);
   
   elm_list_item_append(li, "Bg Plain", NULL, NULL, my_bt_1, NULL);
   elm_list_item_append(li, "Bg Image", NULL, NULL, my_bt_2, NULL);
   elm_list_item_append(li, "Icon Transparent", NULL, NULL, my_bt_3, NULL);
   elm_list_item_append(li, "Box Vert", NULL, NULL, my_bt_4, NULL);
   elm_list_item_append(li, "Box Horiz", NULL, NULL, my_bt_5, NULL);
   elm_list_item_append(li, "Buttons", NULL, NULL, my_bt_6, NULL);
   elm_list_item_append(li, "Toggles", NULL, NULL, my_bt_7, NULL);
   elm_list_item_append(li, "Table", NULL, NULL, my_bt_8, NULL);
   elm_list_item_append(li, "Clock", NULL, NULL, my_bt_9, NULL);
   elm_list_item_append(li, "Layout", NULL, NULL, my_bt_10, NULL);
   elm_list_item_append(li, "Hover", NULL, NULL, my_bt_11, NULL);
   elm_list_item_append(li, "Hover 2", NULL, NULL, my_bt_12, NULL);
   elm_list_item_append(li, "Entry", NULL, NULL, my_bt_13, NULL);
   elm_list_item_append(li, "Entry Scrolled", NULL, NULL, my_bt_14, NULL);
   elm_list_item_append(li, "Notepad", NULL, NULL, my_bt_15, NULL);
   elm_list_item_append(li, "Anchorview", NULL, NULL, my_bt_16, NULL);
   elm_list_item_append(li, "Anchorblock", NULL, NULL, my_bt_17, NULL);
   elm_list_item_append(li, "Toolbar", NULL, NULL, my_bt_18, NULL);
   elm_list_item_append(li, "Hoversel", NULL, NULL, my_bt_19, NULL);
   elm_list_item_append(li, "List", NULL, NULL, my_bt_20, NULL);
   elm_list_item_append(li, "List 2", NULL, NULL, my_bt_21, NULL);
   elm_list_item_append(li, "List 3", NULL, NULL, my_bt_22, NULL);
   elm_list_item_append(li, "Carousel", NULL, NULL, my_bt_23, NULL);
   elm_list_item_append(li, "Inwin", NULL, NULL, my_bt_24, NULL);
   elm_list_item_append(li, "Inwin 2", NULL, NULL, my_bt_25, NULL);
   elm_list_item_append(li, "Scaling", NULL, NULL, my_bt_26, NULL);
   elm_list_item_append(li, "Scaling 2", NULL, NULL, my_bt_27, NULL);
   elm_list_item_append(li, "Slider", NULL, NULL, my_bt_28, NULL);
   elm_list_item_append(li, "Genlist", NULL, NULL, my_bt_29, NULL);
   elm_list_item_append(li, "Genlist 2", NULL, NULL, my_bt_30, NULL);
   elm_list_item_append(li, "Genlist 3", NULL, NULL, my_bt_31, NULL);
   elm_list_item_append(li, "Genlist 4", NULL, NULL, my_bt_32, NULL);
   elm_list_item_append(li, "Checks", NULL, NULL, my_bt_33, NULL);
   elm_list_item_append(li, "Radios", NULL, NULL, my_bt_34, NULL);
   elm_list_item_append(li, "Pager", NULL, NULL, my_bt_35, NULL);
   elm_list_item_append(li, "Genlist Tree", NULL, NULL, my_bt_36, NULL);
   elm_list_item_append(li, "Genlist 5", NULL, NULL, my_bt_37, NULL);
   elm_list_item_append(li, "Window States", NULL, NULL, my_bt_38, NULL);
   
   elm_list_go(li);
*/   
   /* set an initial window size */
   evas_object_resize(win, 800, 600);
   /* show the window */
   evas_object_show(win);
}

/* this is your elementary main function - it MUSt be called IMMEDIATELY
 * after elm_init() and MUSt be passed argc and argv, and MUST be called
 * elm_main and not be static - must be a visible symbol with EAPI infront */
EAPI int
elm_main(int argc, char **argv)
{
   /* put ere any init specific to this app like parsing args etc. */
   ecaul_main_win(); /* create main window */
   elm_run(); /* and run the program now  and handle all events etc. */
   /* if the mainloop that elm_run() runs exist - we exit the app */
   elm_shutdown(); /* clean up and shut down */
   /* exit code */
   return 0;
}
#endif
/* all emeentary apps should use this. but it right after elm_main() */
ELM_MAIN()
