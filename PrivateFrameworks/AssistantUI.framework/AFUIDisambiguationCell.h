/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class AFUIListItemLabel;

@interface AFUIDisambiguationCell : UIView  {
    AFUIListItemLabel *_titleLabel;
}

@property(retain) AFUIListItemLabel * titleLabel;

+ (float)defaultHeight;

- (void)dealloc;
- (void)setTitleLabel:(id)arg1;
- (id)initWithAceObject:(id)arg1 context:(id)arg2;
- (id)speakableTextForLanguageCode:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titleLabel;
- (void)layoutSubviews;

@end
