/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */



@interface CPDistributedMessagingCallout : NSObject 
{
    id _target;
    SEL _selector;
    BOOL _returnsVoid;
    BOOL _returnsVoidIsValid;
}

@property(readonly) BOOL returnsVoid;
@property(readonly) SEL selector;
@property(retain,readonly) id target;


- (id)target;
- (SEL)selector;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (BOOL)returnsVoid;

@end