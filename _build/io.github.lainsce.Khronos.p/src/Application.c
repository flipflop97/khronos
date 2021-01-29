/* Application.c generated by valac 0.50.2, the Vala compiler
 * generated from Application.vala, do not modify */

/*
* Copyright (c) 2020-2021 Lains
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
*/

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <adwaita.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define KHRONOS_TYPE_APPLICATION (khronos_application_get_type ())
#define KHRONOS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KHRONOS_TYPE_APPLICATION, KhronosApplication))
#define KHRONOS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KHRONOS_TYPE_APPLICATION, KhronosApplicationClass))
#define KHRONOS_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KHRONOS_TYPE_APPLICATION))
#define KHRONOS_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KHRONOS_TYPE_APPLICATION))
#define KHRONOS_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KHRONOS_TYPE_APPLICATION, KhronosApplicationClass))

typedef struct _KhronosApplication KhronosApplication;
typedef struct _KhronosApplicationClass KhronosApplicationClass;
typedef struct _KhronosApplicationPrivate KhronosApplicationPrivate;
enum  {
	KHRONOS_APPLICATION_0_PROPERTY,
	KHRONOS_APPLICATION_NUM_PROPERTIES
};
static GParamSpec* khronos_application_properties[KHRONOS_APPLICATION_NUM_PROPERTIES];

#define KHRONOS_TYPE_MAIN_WINDOW (khronos_main_window_get_type ())
#define KHRONOS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KHRONOS_TYPE_MAIN_WINDOW, KhronosMainWindow))
#define KHRONOS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KHRONOS_TYPE_MAIN_WINDOW, KhronosMainWindowClass))
#define KHRONOS_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KHRONOS_TYPE_MAIN_WINDOW))
#define KHRONOS_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KHRONOS_TYPE_MAIN_WINDOW))
#define KHRONOS_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KHRONOS_TYPE_MAIN_WINDOW, KhronosMainWindowClass))

typedef struct _KhronosMainWindow KhronosMainWindow;
typedef struct _KhronosMainWindowClass KhronosMainWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _KhronosApplication {
	GtkApplication parent_instance;
	KhronosApplicationPrivate * priv;
};

struct _KhronosApplicationClass {
	GtkApplicationClass parent_class;
};

static gpointer khronos_application_parent_class = NULL;
extern KhronosMainWindow* khronos_application_win;
KhronosMainWindow* khronos_application_win = NULL;
extern GSettings* khronos_application_gsettings;
GSettings* khronos_application_gsettings = NULL;

GType khronos_application_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (KhronosApplication, g_object_unref)
GType khronos_main_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (KhronosMainWindow, g_object_unref)
KhronosApplication* khronos_application_new (void);
KhronosApplication* khronos_application_construct (GType object_type);
static void khronos_application_real_activate (GApplication* base);
KhronosMainWindow* khronos_main_window_new (GtkApplication* application);
KhronosMainWindow* khronos_main_window_construct (GType object_type,
                                                  GtkApplication* application);
gint khronos_application_main (gchar** args,
                               gint args_length1);
static void khronos_application_finalize (GObject * obj);
static GType khronos_application_get_type_once (void);

KhronosApplication*
khronos_application_construct (GType object_type)
{
	KhronosApplication * self = NULL;
#line 26 "../src/Application.vala"
	self = (KhronosApplication*) g_object_new (object_type, "flags", G_APPLICATION_FLAGS_NONE, "application-id", "io.github.lainsce.Khronos", NULL);
#line 25 "../src/Application.vala"
	return self;
#line 99 "Application.c"
}

KhronosApplication*
khronos_application_new (void)
{
#line 25 "../src/Application.vala"
	return khronos_application_construct (KHRONOS_TYPE_APPLICATION);
#line 107 "Application.c"
}

static void
khronos_application_real_activate (GApplication* base)
{
	KhronosApplication * self;
	KhronosMainWindow* w = NULL;
	KhronosMainWindow* _tmp0_;
#line 36 "../src/Application.vala"
	self = (KhronosApplication*) base;
#line 37 "../src/Application.vala"
	_tmp0_ = khronos_main_window_new ((GtkApplication*) self);
#line 37 "../src/Application.vala"
	g_object_ref_sink (_tmp0_);
#line 37 "../src/Application.vala"
	w = _tmp0_;
#line 38 "../src/Application.vala"
	khronos_application_win = w;
#line 36 "../src/Application.vala"
	_g_object_unref0 (w);
#line 128 "Application.c"
}

gint
khronos_application_main (gchar** args,
                          gint args_length1)
{
	KhronosApplication* app = NULL;
	KhronosApplication* _tmp0_;
	gint status = 0;
	gint result = 0;
#line 42 "../src/Application.vala"
	setlocale (LC_ALL, "");
#line 44 "../src/Application.vala"
	_tmp0_ = khronos_application_new ();
#line 44 "../src/Application.vala"
	app = _tmp0_;
#line 45 "../src/Application.vala"
	status = g_application_run ((GApplication*) app, (gint) args_length1, args);
#line 46 "../src/Application.vala"
	result = status;
#line 46 "../src/Application.vala"
	_g_object_unref0 (app);
#line 46 "../src/Application.vala"
	return result;
#line 153 "Application.c"
}

int
main (int argc,
      char ** argv)
{
#line 41 "../src/Application.vala"
	return khronos_application_main (argv, argc);
#line 162 "Application.c"
}

static void
khronos_application_class_init (KhronosApplicationClass * klass,
                                gpointer klass_data)
{
	GSettings* _tmp0_;
#line 21 "../src/Application.vala"
	khronos_application_parent_class = g_type_class_peek_parent (klass);
#line 21 "../src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) khronos_application_real_activate;
#line 21 "../src/Application.vala"
	G_OBJECT_CLASS (klass)->finalize = khronos_application_finalize;
#line 33 "../src/Application.vala"
	_tmp0_ = g_settings_new ("io.github.lainsce.Khronos");
#line 33 "../src/Application.vala"
	_g_object_unref0 (khronos_application_gsettings);
#line 33 "../src/Application.vala"
	khronos_application_gsettings = _tmp0_;
#line 182 "Application.c"
}

static void
khronos_application_instance_init (KhronosApplication * self,
                                   gpointer klass)
{
}

static void
khronos_application_finalize (GObject * obj)
{
	KhronosApplication * self;
#line 21 "../src/Application.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KHRONOS_TYPE_APPLICATION, KhronosApplication);
#line 21 "../src/Application.vala"
	G_OBJECT_CLASS (khronos_application_parent_class)->finalize (obj);
#line 199 "Application.c"
}

static GType
khronos_application_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (KhronosApplicationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) khronos_application_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KhronosApplication), 0, (GInstanceInitFunc) khronos_application_instance_init, NULL };
	GType khronos_application_type_id;
	khronos_application_type_id = g_type_register_static (gtk_application_get_type (), "KhronosApplication", &g_define_type_info, 0);
	return khronos_application_type_id;
}

GType
khronos_application_get_type (void)
{
	static volatile gsize khronos_application_type_id__volatile = 0;
	if (g_once_init_enter (&khronos_application_type_id__volatile)) {
		GType khronos_application_type_id;
		khronos_application_type_id = khronos_application_get_type_once ();
		g_once_init_leave (&khronos_application_type_id__volatile, khronos_application_type_id);
	}
	return khronos_application_type_id__volatile;
}

