/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CPImportTracing : CPTracing  {
    long mReadingOpstat;
    long mProcessorOpstat;
    long mImportingOpstat;
}


- (void)dealloc;
- (void)startImporting;
- (void)stopImporting;
- (id)initWithFilename:(id)arg1;
- (void)startProcessors;
- (void)stopProcessors;
- (void)startReading;
- (void)stopReading;

@end
