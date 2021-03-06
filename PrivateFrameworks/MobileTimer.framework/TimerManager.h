/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSString, UILocalNotification;

@interface TimerManager : NSObject  {
    int _state;
    UILocalNotification *_notification;
    double _remainingTime;
}

@property double defaultDuration;
@property(readonly) NSString * defaultSound;
@property(readonly) int state;
@property(readonly) double fireTime;
@property(readonly) double remainingTime;

+ (id)copyFetchScheduledNotification;
+ (id)newNotificationAt:(double)arg1 withSound:(id)arg2;
+ (BOOL)upgrade;
+ (BOOL)discardOldVersion;
+ (BOOL)isTimerNotification:(id)arg1;
+ (id)sharedManager;

- (double)fireTime;
- (BOOL)cancel;
- (double)remainingTime;
- (double)defaultDuration;
- (void)reloadState;
- (void)scheduleAt:(double)arg1 withSound:(id)arg2;
- (void)changeSound:(id)arg1;
- (id)defaultSound;
- (void)setDefaultSound:(id)arg1;
- (void)setDefaultDuration:(double)arg1;
- (BOOL)resume;
- (BOOL)pause;
- (int)state;

@end
