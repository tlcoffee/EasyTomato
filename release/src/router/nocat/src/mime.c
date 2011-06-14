#include "mime.h"
struct mime_type_t mime_types[] = {
    { "hqx", "application/mac-binhex40" },
    { "doc", "application/msword" },
    { "bin", "application/octet-stream" },
    { "exe", "application/octet-stream" },
    { "class", "application/octet-stream" },
    { "so", "application/octet-stream" },
    { "dll", "application/octet-stream" },
    { "pdf", "application/pdf" },
    { "ps", "application/postscript" },
    { "ppt", "application/vnd.ms-powerpoint" },
    { "bz2", "application/x-bzip2" },
    { "gz", "application/x-gzip" },
    { "tgz", "application/x-gzip" },
    { "js", "application/x-javascript" },
    { "ogg", "application/x-ogg" },
    { "swf", "application/x-shockwave-flash" },
    { "xhtml", "application/xhtml+xml" },
    { "xht", "application/xhtml+xml" },
    { "zip", "application/zip" },
    { "mid", "audio/midi" },
    { "mp2", "audio/mpeg" },
    { "mp3", "audio/mpeg" },
    { "m3u", "audio/x-mpegurl" },
    { "ra", "audio/x-realaudio" },
    { "bmp", "image/bmp" },
    { "gif", "image/gif" },
    { "jpeg", "image/jpeg" },
    { "jpg", "image/jpeg" },
    { "jpe", "image/jpeg" },
    { "png", "image/png" },
    { "tiff", "image/tiff" },
    { "tif", "image/tiff" },
    { "css", "text/css" },
    { "html", "text/html" },
    { "htm", "text/html" },
    { "asc", "text/plain" },
    { "txt", "text/plain" },
    { "rtx", "text/richtext" },
    { "rtf", "text/rtf" },
    { "xml", "text/xml" },
    { "xsl", "text/xml" },
    { "mpeg", "video/mpeg" },
    { "mpg", "video/mpeg" },
    { "mpe", "video/mpeg" },
    { "qt", "video/quicktime" },
    { "mov", "video/quicktime" },
    { "avi", "video/x-msvideo" },
    { "rmm", "audio/x-pn-realaudio" },
    { "ram", "audio/x-pn-realaudio" },
    { "ra", "audio/vnd.rn-realaudio" },
    { "smi", "application/smil" },
    { "smil", "application/smil" },
    { "rt", "text/vnd.rn-realtext" },
    { "rv", "video/vnd.rn-realvideo" },
    { "rf", "image/vnd.rn-realflash" },
    { "rm", "application/vnd.rn-realmedia" },
    { "wav", "audio/wav" },
    { NULL, NULL } };