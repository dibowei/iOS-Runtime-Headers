/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UISearchField, NSArray, UIImageView, UINavigationBar, <EKTimeZoneChooserDelegate>, UICompletionTable;

@interface EKTimeZoneChooserView : UIView <UITextFieldDelegate> {
    int _style;
    UISearchField *_searchField;
    UICompletionTable *_completionTable;
    NSArray *_cities;
    UIImageView *_searchFieldBackground;
    UINavigationBar *_navigationBar;
    <EKTimeZoneChooserDelegate> *_delegate;
}

@property <EKTimeZoneChooserDelegate> * delegate;


- (void)cancel;
- (void)dealloc;
- (void)setCityName:(id)arg1;
- (void)textValueChanged:(id)arg1;
- (void)table:(id)arg1 didSelectCompletionAtIndex:(unsigned int)arg2;
- (id)table:(id)arg1 completionAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfCompletionsInTable:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
