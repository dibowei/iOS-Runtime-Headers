/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, DOMNode, NSDictionary, WebFrame;

@interface DDOperation : NSOperation  {
    WebFrame *_frame;
    DOMNode *_startNode;
    int _startOffset;
    DOMNode *_endNode;
    int _endOffset;
    BOOL _needContinuation;
    int _generationNumber;
    unsigned int _types;
    struct __DDScanQuery { } *_query;
    NSArray *_results;
    BOOL _isCurrentlyUsingTheScanner;
    BOOL _isDiscarded;
    int _tryCount;
    int _needsLayoutTryCount;
    NSDictionary *_context;
}

@property(retain) WebFrame * frame;
@property(retain) DOMNode * startNode;
@property int startOffset;
@property(retain) DOMNode * endNode;
@property int endOffset;
@property BOOL needContinuation;
@property(retain) NSArray * results;
@property int generationNumber;
@property int tryCount;
@property unsigned int detectionTypes;
@property BOOL isDiscarded;
@property(retain) NSDictionary * context;

+ (BOOL)_needsFullScannerForDetectionTypes:(unsigned int)arg1;
+ (struct __DDScanner { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDLRTable {} *x2; struct __DDLexer {} *x3; struct __DDLookupTable {} *x4; struct __DDCache {} *x5; struct __DDTokenCache {} *x6; struct __DDLexemCache {} *x7; struct __DDScanQuery {} *x8; struct __DDScanQuery {} *x9; struct __CFArray {} *x10; struct __CFArray {} *x11; int x12; int x13; int x14; char *x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; unsigned int x18 : 1; unsigned int x19 : 1; }*)_sharedScannerForTypes:(unsigned int)arg1;
     /* Encoded args for previous method: ^{__DDScanner={__CFRuntimeBase=I[4C]}^{__DDLRTable}^{__DDLexer}^{__DDLookupTable}^{__DDCache}^{__DDTokenCache}^{__DDLexemCache}^{__DDScanQuery}^{__DDScanQuery}^{__CFArray}^{__CFArray}iii*@?b1b1}12@0:4I8 */


- (void)setGenerationNumber:(int)arg1;
- (int)generationNumber;
- (void)main;
- (void)cancel;
- (id)results;
- (void)setResults:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setStartOffset:(int)arg1;
- (void)cleanup;
- (int)endOffset;
- (int)startOffset;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setFrame:(id)arg1;
- (id)frame;
- (void)setNeedContinuation:(BOOL)arg1;
- (struct __DDScanQuery { }*)scanQuery;
- (void)setIsDiscarded:(BOOL)arg1;
- (void)_setScanQuery:(struct __DDScanQuery { }*)arg1;
- (void)setEndNode:(id)arg1;
- (void)setStartNode:(id)arg1;
- (id)startNode;
- (void)setEndOffset:(int)arg1;
- (id)endNode;
- (BOOL)needContinuation;
- (BOOL)_doURLificationOnDocument;
- (BOOL)isDiscarded;
- (int)tryCount;
- (unsigned int)detectionTypes;
- (BOOL)_needsFullScanner;
- (void)setTryCount:(int)arg1;
- (void)setDetectionTypes:(unsigned int)arg1;
- (void)_createScanQueryOnWebThreadStartAfterRange:(id)arg1;

@end
