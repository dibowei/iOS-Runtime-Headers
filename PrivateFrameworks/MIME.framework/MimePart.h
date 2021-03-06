/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFPartialNetworkData, MimePart, MFWeakReferenceHolder, NSString, NSData, NSMutableDictionary;

@interface MimePart : NSObject  {
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    MFWeakReferenceHolder *_parent;
    MFWeakReferenceHolder *_body;
    MimePart *_nextPart;
    MFPartialNetworkData *_partialData;
    NSData *_fullData;
    MFWeakReferenceHolder *_decodedData;
}

+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:(id)arg1;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4;
+ (void)initialize;

- (id)contentsForTextSystem;
- (BOOL)usesKnownSignatureProtocol;
- (id)signedData;
- (id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3;
- (id)decodeText;
- (unsigned int)approximateRawSize;
- (void)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (BOOL)_shouldContinueDecodingProcess;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)alternativeAtIndex:(int)arg1;
- (id)parentPart;
- (id)partNumber;
- (id)decodedDataForData:(id)arg1;
- (id)fileWrapper;
- (BOOL)isHTML;
- (id)attachmentFilename;
- (id)attachments;
- (void)configureFileWrapper:(id)arg1;
- (id)textHtmlPart;
- (id)bodyData;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (void)addSubpart:(id)arg1;
- (id)firstChildPart;
- (id)subparts;
- (id)disposition;
- (void)setContentID:(id)arg1;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (void)setDisposition:(id)arg1;
- (id)contentID;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)contentTransferEncoding;
- (void)setContentTransferEncoding:(id)arg1;
- (BOOL)isReadableText;
- (id)bodyParameterForKey:(id)arg1;
- (id)nextSiblingPart;
- (id)dispositionParameterForKey:(id)arg1;
- (id)bodyParameterKeys;
- (id)dispositionParameterKeys;
- (id)contentDescription;
- (id)languages;
- (id)contentLocation;
- (id)mimeBody;
- (unsigned int)numberOfAttachments;
- (void)download;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)decodeMultipartRelated;
- (id)decodeMultipartAlternative;
- (id)decodeMultipart;
- (id)decodeApplicationZip;
- (id)decodeApplicationOctet_stream;
- (BOOL)parseMimeBody;
- (BOOL)hasContents;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (void)decodeIfNecessary;
- (id)preservedHeaderValueForKey:(id)arg1;
- (void)setMimeBody:(id)arg1;
- (unsigned long)textEncoding;
- (void)clearCachedDescryptedMessageBody;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (void)setSubparts:(id)arg1;
- (id)chosenAlternativePart;
- (id)_partThatIsAttachment;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
- (id)startPart;
- (id)subpartAtIndex:(int)arg1;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (void)_ensureBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5;
- (id)bodyDataForcingDownload:(BOOL)arg1;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (void)setContentDescription:(id)arg1;
- (void)setLanguages:(id)arg1;
- (void)_setRFC822DecodedMessageBody:(id)arg1;
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned int)arg1;
- (void)_contents:(id*)arg1 toOffset:(unsigned int)arg2 resultOffset:(unsigned int*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (BOOL)isRich;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)numberOfAlternatives;
- (unsigned int)totalTextSize;
- (id)rfc822DecodedMessageBody;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (void)getNumberOfAttachments:(unsigned int*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3;
- (id)type;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setSubtype:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtype;
- (BOOL)isAttachment;
- (void)setContentLocation:(id)arg1;
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4;
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3;
- (id)decodeMultipartSigned;
- (id)decodeApplicationPkcs7_mime;
- (BOOL)_needsSignatureVerification:(id*)arg1;
- (void)_setSigners:(id)arg1;
- (void)_setSMIMEError:(id)arg1;
- (id)SMIMEError;
- (id)copySigners;

@end
