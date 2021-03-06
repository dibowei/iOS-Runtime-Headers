/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UITableView, UIDatePicker, RUITableViewRow, NSMutableArray, UIPickerView;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate> {
    NSMutableArray *_sections;
    UITableView *_tableView;
    UIPickerView *_selectPicker;
    BOOL _showSelectPicker;
    UIDatePicker *_datePicker;
    BOOL _showDatePicker;
    RUITableViewRow *_defaultFirstResponderRow;
    BOOL _viewShrunk;
    id _delegate;
    BOOL _registeredForNotifications;
    float _lastLayoutWidth;
    float _fullscreenCellHeight;
}

@property(getter=isShowingPicker,readonly) BOOL showingPicker;
@property(retain) RUITableViewRow * defaultFirstResponderRow;
@property(readonly) NSMutableArray * sections;


- (id)init;
- (void)dealloc;
- (id)sections;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)tableView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)_setBottomInset:(float)arg1;
- (void)textFieldStartedEditing:(id)arg1;
- (id)sourceURLForRUITableViewRow;
- (void)rowIsFirstResponder:(id)arg1;
- (void)rowDidChange:(id)arg1;
- (void)rowDidEndEditing:(id)arg1;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)setDefaultFirstResponderRow:(id)arg1;
- (void)_registerForNotifications:(BOOL)arg1;
- (id)indexPathForRow:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)defaultFirstResponderRow;
- (void)_clearPickers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectPickerFrame;
- (id)objectModelRowForIndexPath:(id)arg1;
- (BOOL)isShowingPicker;
- (void)populatePostbackDictionary:(id)arg1;
- (void)viewDidLayout;
- (void)automaticKeyboardDidShow:(id)arg1;

@end
