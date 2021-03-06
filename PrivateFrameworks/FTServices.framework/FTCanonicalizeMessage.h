/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary, NSArray;

@interface FTCanonicalizeMessage : FTMessage <NSCopying> {
    NSArray *_URIs;
    NSDictionary *_regionContext;
    NSArray *_responseNodes;
}

@property(copy) NSArray * URIs;
@property(copy) NSDictionary * regionContext;
@property(copy) NSArray * responseNodes;


- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setResponseNodes:(id)arg1;
- (id)responseNodes;
- (void)setRegionContext:(id)arg1;
- (id)regionContext;
- (void)handleResponseDictionary:(id)arg1;
- (int)responseCommand;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (BOOL)wantsBinaryPush;
- (int)command;
- (id)bagKey;
- (id)URIs;
- (void)setURIs:(id)arg1;

@end
