/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableArray;

@interface ADJavaScriptObject : NSObject  {
    BOOL _busy;
    NSMutableArray *_downloads;
}

@property(getter=isBusy) BOOL busy;
@property(retain) NSMutableArray * downloads;

+ (void)initialize;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (BOOL)validateInput:(id)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
+ (id)inputRequiredProperties;
+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptingKeys;
+ (id)scriptSelectors;

- (id)description;
- (void)dealloc;
- (id)downloads;
- (BOOL)isBusy;
- (void)setBusy:(BOOL)arg1;
- (id)attributeKeys;
- (void)setDownloads:(id)arg1;
- (void)adWillDismiss;

@end
