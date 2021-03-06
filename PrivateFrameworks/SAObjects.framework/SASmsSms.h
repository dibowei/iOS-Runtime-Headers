/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAPersonAttribute, NSDate, NSNumber, NSURL;

@interface SASmsSms : SADomainObject  {
}

@property(copy) NSURL * attachment;
@property(copy) NSDate * dateSent;
@property(copy) NSString * message;
@property(copy) NSArray * msgRecipients;
@property(retain) SAPersonAttribute * msgSender;
@property(retain) NSNumber * outgoing;
@property(copy) NSArray * recipients;
@property(copy) NSString * sender;
@property(copy) NSString * subject;
@property(copy) NSString * timezoneId;

+ (id)sms;
+ (id)smsWithDictionary:(id)arg1 context:(id)arg2;

- (id)dateSent;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)groupIdentifier;
- (void)setSender:(id)arg1;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setMsgSender:(id)arg1;
- (void)setMsgRecipients:(id)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)sender;
- (id)msgRecipients;
- (id)msgSender;
- (id)timezoneId;
- (void)setTimezoneId:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)outgoing;

@end
