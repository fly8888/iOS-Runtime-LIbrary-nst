/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppPlaylistBridge : NSObject {
    IKAppContext *_appContext;
    <IKAppPlaylist> *_appPlaylist;
    IKJSPlaylist *_jsPlaylist;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) <IKAppPlaylist> *appPlaylist;
@property (nonatomic, readonly) IKJSPlaylist *jsPlaylist;
@property (readonly) unsigned int length;

- (void).cxx_destruct;
- (id)appContext;
- (id)appPlaylist;
- (void)dealloc;
- (id)initWithJSPlaylist:(id)arg1;
- (id)item:(int)arg1;
- (id)jsPlaylist;
- (unsigned int)length;
- (id)replaceItemsAt:(int)arg1 count:(unsigned int)arg2 with:(id)arg3;

@end
