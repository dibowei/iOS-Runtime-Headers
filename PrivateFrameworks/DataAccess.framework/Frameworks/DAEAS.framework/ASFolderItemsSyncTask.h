/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSMutableSet, NSString, NSArray, ASMailMessage, NSSet;

@interface ASFolderItemsSyncTask : ASTask <NSCopying> {
    NSString *_folderID;
    NSString *_previousSyncKey;
    int _dataclass;
    NSArray *_actions;
    NSMutableSet *_rejectedServerIds;
    BOOL _isInitialSync;
    BOOL _isInitialBootstrapSync;
    BOOL _willUpdate;
    BOOL _moreAvailable;
    BOOL _isResyncAfterConnectionFailed;
    BOOL _haveShortcut121Response;
    int _numReplacedItems;
    int _numDownloadedElements;
    BOOL _isSpinning;
    int _bodyTruncationBytes;
    int _mimeSupport;
    int _filterDays;
    ASMailMessage *_streamingMailMessage;
    NSArray *_perservedActions;
    NSArray *_pushedActions;
    BOOL _hadFalseMoreAvailable;
    BOOL _deletesAsMoves;
}

@property(readonly) NSString * folderID;
@property(copy) NSString * previousSyncKey;
@property(readonly) NSString * previousSyncKeyForAgent;
@property int dataclass;
@property(retain) NSArray * actions;
@property BOOL isInitialSync;
@property BOOL isInitialBootstrapSync;
@property BOOL willUpdate;
@property BOOL moreAvailable;
@property int bodyTruncationBytes;
@property(setter=setMIMESupport:) int mimeSupport;
@property int filterDays;
@property(retain) ASMailMessage * streamingMailMessage;
@property BOOL isResyncAfterConnectionFailed;
@property(readonly) NSSet * rejectedServerIds;
@property(retain) NSArray * perservedActions;
@property(retain) NSArray * pushedActions;


- (void)setMIMESupport:(int)arg1;
- (id)folderID;
- (BOOL)moreAvailable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (double)percentComplete;
- (void)setActions:(id)arg1;
- (id)actions;
- (BOOL)isResyncAfterConnectionFailed;
- (BOOL)isInitialBootstrapSync;
- (int)filterDays;
- (int)bodyTruncationBytes;
- (BOOL)checkForErrorInContext:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (void)_addRejectedServerId:(id)arg1;
- (void)_handleResponseToLeaf:(id)arg1 addedResponsesPtr:(id*)arg2 modifiedResponsesPtr:(id*)arg3 removedResponsesPtr:(id*)arg4 fetchedResponsesPtr:(id*)arg5;
- (void)_handleChangedLeaf:(id)arg1 addedChangesPtr:(id*)arg2 modifiedChangesPtr:(id*)arg3 removedChangesPtr:(id*)arg4;
- (void)appendActionData:(id)arg1;
- (int)_mimeTruncationCode;
- (int)_bodyTruncationCode;
- (BOOL)willUpdate;
- (void)appendSupportedFieldsData:(id)arg1;
- (void)setPushedActions:(id)arg1;
- (void)setPerservedActions:(id)arg1;
- (void)setIsResyncAfterConnectionFailed:(BOOL)arg1;
- (id)initWithFolderID:(id)arg1;
- (void)_setSpinning:(BOOL)arg1;
- (void)setMoreAvailable:(BOOL)arg1;
- (void)setFilterDays:(int)arg1;
- (id)initWithFolderID:(id)arg1 deletesAsMoves:(BOOL)arg2;
- (void)setDataclass:(int)arg1;
- (id)rejectedServerIds;
- (id)pushedActions;
- (BOOL)isInitialSync;
- (id)previousSyncKeyForAgent;
- (id)perservedActions;
- (void)setIsInitialBootstrapSync:(BOOL)arg1;
- (void)setIsInitialSync:(BOOL)arg1;
- (void)setWillUpdate:(BOOL)arg1;
- (void)setPreviousSyncKey:(id)arg1;
- (id)previousSyncKey;
- (void)setStreamingMailMessage:(id)arg1;
- (id)streamingMailMessage;
- (void)setBodyTruncationBytes:(int)arg1;
- (int)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;
- (int)_mimeSupportCode;
- (int)mimeSupport;
- (int)numDownloadedElements;
- (id)replacementObjectForEmailItem:(id)arg1;
- (int)bodyType;
- (int)dataclass;
- (int)connectionActionForResponse:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (int)commandCode;
- (int)taskStatusForExchangeStatus:(int)arg1;

@end
