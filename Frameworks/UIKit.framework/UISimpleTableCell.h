/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIImageView, UIFont;

@interface UISimpleTableCell : UITableCell  {
    UIFont *_font;
    UIImageView *_iconImageView;
    unsigned int _indentationLevel;
    NSString *_title;
    int _titleColor;
}

+ (id)defaultFont;

- (void)dealloc;
- (unsigned int)indentationLevel;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)iconImageView;
- (void)setTitleColor:(int)arg1;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)setIndentationLevel:(unsigned int)arg1;
- (id)title;
- (id)_scriptingInfo;
- (int)lineBreakMode;
- (id)font;
- (void)setFont:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
