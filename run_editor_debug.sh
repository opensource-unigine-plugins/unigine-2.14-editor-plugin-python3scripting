SCRIPT_DIR=$( cd "$( dirname "$0" )" && pwd )
APP="$SCRIPT_DIR/bin/Editor_x64d"
export LD_LIBRARY_PATH="$SCRIPT_DIR/bin:$LD_LIBRARY_PATH"
# export LD_LIBRARY_PATH="$SCRIPT_DIR/bin/plugins/Sea5kg/Python3Scripting/Python3Home/lib/python3.10/lib-dynload/:$LD_LIBRARY_PATH"
export LD_PRELOAD=`pwd`/bin/plugins/Sea5kg/Python3Scripting/libSea5kgPython3Scripting_editorplugin_x64d.so
if [ -f "$APP" ]; then
	# gdb --args "$APP"  -video_app auto -video_vsync 0 -video_refresh 0 -video_mode 1 -video_resizable 1 -video_fullscreen 0 -video_debug 0 -sound_app auto -data_path "../data/" -extern_plugin "FbxImporter,GLTFImporter,FbxExporter" -console_command "config_autosave 1"
	"$APP"  -video_app auto -video_vsync 0 -video_refresh 0 -video_mode 1 -video_resizable 1 -video_fullscreen 0 -video_debug 0 -sound_app auto -data_path "../data/" -extern_plugin "FbxImporter,GLTFImporter,FbxExporter" -console_command "config_autosave 1"
else
	echo "$APP not found"
fi
