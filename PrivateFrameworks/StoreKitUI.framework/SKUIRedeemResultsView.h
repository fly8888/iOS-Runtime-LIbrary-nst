/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemResultsView : UITableView <UITableViewDataSource, UITableViewDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsetAdjustments;
    <SKUIRedeemResultsViewDelegate> *_resultsDelegate;
    NSArray *_sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <SKUIRedeemResultsViewDelegate> *resultsDelegate;
@property (nonatomic, retain) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)resultsDelegate;
- (id)sections;
- (void)setResultsDelegate:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
