/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSNumber, NSString, NSMutableArray;

@interface ASResolveRecipientsSingleResponseItem : ASItem  {
    NSString *_emailAddress;
    NSNumber *_easStatus;
    NSMutableArray *_recipients;
}

@property(retain) NSString * emailAddress;
@property(retain) NSNumber * easStatus;
@property(retain) NSMutableArray * recipients;

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)emailAddress;
- (id)description;
- (void)dealloc;
- (void)addRecipient:(id)arg1;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEASStatus:(id)arg1;
- (id)easStatus;
- (id)asParseRules;

@end
