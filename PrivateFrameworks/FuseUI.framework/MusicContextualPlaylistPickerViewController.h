/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualPlaylistPickerViewController : MusicNavigationController <MusicContextualPlaylistPickerDelegate> {
    id /* block */ _playlistSelectionHandler;
    MusicContextualPlaylistPickerViewConfiguration *_playlistsViewConfiguration;
    UIViewController *_playlistsViewController;
    MusicEntityValueContext *_prepopulatedItemsEntityValueContext;
    NSArray *_prepopulatedMediaItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MusicEntityValueContext *prepopulatedItemsEntityValueContext;
@property (nonatomic, retain) NSArray *prepopulatedMediaItems;
@property (readonly) Class superclass;

+ (BOOL)automaticallyInstallAccountBarButtonItem;
+ (BOOL)automaticallyInstallSearchBarButtonItem;

- (void).cxx_destruct;
- (void)_dismissPlaylistPicker;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlaylistSelectionHandler:(id /* block */)arg1;
- (void)playlistPickerDidFinishWithSelectedPlaylist:(id)arg1;
- (int)preferredStatusBarStyle;
- (id)prepopulatedItemsEntityValueContext;
- (id)prepopulatedMediaItems;
- (void)setPrepopulatedItemsEntityValueContext:(id)arg1;
- (void)setPrepopulatedMediaItems:(id)arg1;
- (void)viewDidLoad;

@end
