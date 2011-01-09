/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class OADDrawable, WDATextBox, WDAAnchor;



@interface WDAContent : NSObject <OADClient, OADTextClient>
{
    WDAAnchor *mAnchor;
    WDATextBox *mTextBox;
    OADDrawable *mDrawable;
    NSInteger mTextType;
}

@property(readonly) WDAAnchor *anchor;

+ (Class)classForType:(unsigned short)arg1;

- (id)anchor;
- (BOOL)hasText;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (NSInteger)textType;
- (void)clearAnchor;
- (id)createTextBoxWithDocument:(id)arg1 textType:(NSInteger)arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isLine;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isTopLevelObject;
     /* Encoded args for previous method: B8@0:4 */

- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)setTextType:(NSInteger)arg1;
- (id)createAnchor;
- (void)setTextBox:(id)arg1;
- (BOOL)hasBounds;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShape;
     /* Encoded args for previous method: B8@0:4 */

- (BOOL)floating;
- (id)textBox;

@end