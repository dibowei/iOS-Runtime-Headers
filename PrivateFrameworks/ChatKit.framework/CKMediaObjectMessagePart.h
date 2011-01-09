/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData, CKMediaObject, UIImage;



@interface CKMediaObjectMessagePart : CKMessagePart 
{
    CKMediaObject *_mediaObject;
    UIImage *_composeImage;
    NSData *_previewData;
    NSData *_composeData;
    NSData *_dataForHighlight;
}

@property(readonly) CKMediaObject *mediaObject;
@property(readonly) UIImage *composeImage;


- (NSInteger)_orientation;
- (BOOL)isDisplayable;
- (void)copyToPasteboard;
- (NSInteger)type;
- (void)dealloc;
- (id)initWithMediaObject:(id)arg1;
- (id)detachedCopy;
- (id)composeImage;
- (void)setComposeData:(id)arg1;
- (void)setPreviewData:(id)arg1;
- (id)composeData;
- (id)mediaObject;
- (id)highlightData;
- (id)previewData;

@end