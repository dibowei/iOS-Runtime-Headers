/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject  {
    WebUserContentURLPatternPrivate *_private;
}


- (void)dealloc;
- (id)initWithPatternString:(id)arg1;
- (BOOL)matchesSubdomains;
- (id)host;
- (BOOL)isValid;
- (id)scheme;
- (BOOL)matchesURL:(id)arg1;

@end
