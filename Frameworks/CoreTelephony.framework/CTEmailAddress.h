/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {
    NSString *_address;
}

@property(readonly) NSString * address;

+ (id)emailAddress:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)address;
- (id)initWithAddress:(id)arg1;
- (id)canonicalFormat;
- (id)encodedString;

@end
