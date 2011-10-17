/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class NSString, UIImageView, UILabel;

@interface TWAccountPickerView : UIView  {
    UILabel *_label;
    UIImageView *_checkmark;
}

@property(retain) NSString * title;
@property BOOL selected;


- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrame;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })checkmarkFrame;

@end