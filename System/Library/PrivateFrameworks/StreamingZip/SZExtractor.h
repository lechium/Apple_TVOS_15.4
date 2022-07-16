//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StreamingZip/NSCopying-Protocol.h>
#import <StreamingZip/SZExtractor-Protocol.h>

@class NSDictionary, NSError, NSString, NSXPCConnection, SZExtractorInternalDelegate, StreamingUnzipper;
@protocol OS_dispatch_queue, SZExtractorDelegate;

@interface SZExtractor : NSObject <SZExtractor, NSCopying>
{
    _Bool _isLocalExtractor;	// 8 = 0x8
    _Bool _needsPreparation;	// 9 = 0x9
    _Bool _hasHadPostSetupMethodsCalled;	// 10 = 0xa
    NSString *_extractionPath;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    unsigned long long _lastResumptionOffset;	// 32 = 0x20
    NSXPCConnection *_unzipServiceConnection;	// 40 = 0x28
    StreamingUnzipper *_inProcessUnzipper;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialQueue;	// 56 = 0x38
    SZExtractorInternalDelegate *_internalExtractorDelegate;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
}

+ (void)enableDebugLogging;	// IMP=0x000000000001b940
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014cf3
+ (id)knownSZExtractorImplementations;	// IMP=0x0000000000001d28
- (void).cxx_destruct;	// IMP=0x000000000001c262
@property(nonatomic) _Bool hasHadPostSetupMethodsCalled; // @synthesize hasHadPostSetupMethodsCalled=_hasHadPostSetupMethodsCalled;
@property(nonatomic) _Bool needsPreparation; // @synthesize needsPreparation=_needsPreparation;
@property(readonly, nonatomic) _Bool isLocalExtractor; // @synthesize isLocalExtractor=_isLocalExtractor;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) SZExtractorInternalDelegate *internalExtractorDelegate; // @synthesize internalExtractorDelegate=_internalExtractorDelegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) StreamingUnzipper *inProcessUnzipper; // @synthesize inProcessUnzipper=_inProcessUnzipper;
@property(readonly, nonatomic) NSXPCConnection *unzipServiceConnection; // @synthesize unzipServiceConnection=_unzipServiceConnection;
@property(nonatomic) unsigned long long lastResumptionOffset; // @synthesize lastResumptionOffset=_lastResumptionOffset;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *extractionPath; // @synthesize extractionPath=_extractionPath;
@property(readonly, copy) NSString *description;
- (void)setActiveExtractorDelegateMethods:(int)arg1;	// IMP=0x000000000001bcaf
@property(nonatomic) __weak id <SZExtractorDelegate> extractorDelegate;
@property(nonatomic) __weak id <SZExtractorDelegate> delegate;
- (_Bool)consumeExtractedDataIfNeeded;	// IMP=0x000000000001b938
@property(readonly, nonatomic) _Bool doesConsumeExtractedData; // @dynamic doesConsumeExtractedData;
- (void)terminateStreamWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b1d2
- (void)finishStreamWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aaad
- (void)suspendStreamWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aa96
- (void)_suspendStreamWithCompletionBlockSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a31a
- (void)supplyBytes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001806f
- (_Bool)_isValidObject;	// IMP=0x0000000000017fd0
- (void)_invalidateObject;	// IMP=0x0000000000017ea1
- (void)prepareForExtractionToPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017d6f
- (void)prepareForExtraction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017d58
- (void)_prepareForExtractionSynchronously:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001784a
- (void)_prepareForLocalExtraction:(CDUnknownBlockType)arg1;	// IMP=0x000000000001720c
- (void)_prepareForRemoteExtractionSynchronously:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015db3
- (_Bool)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long *)arg1;	// IMP=0x0000000000015bf2
- (id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long *)arg3;	// IMP=0x0000000000015b96
- (id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long *)arg3;	// IMP=0x0000000000015b3a
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long *)arg4;	// IMP=0x0000000000015a39
- (id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long *)arg3;	// IMP=0x00000000000159e1
- (id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long *)arg2;	// IMP=0x00000000000159ca
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000015960
- (id)initWithPath:(id)arg1 options:(id)arg2;	// IMP=0x00000000000158d3
- (void)_setUpWithPath:(id)arg1 options:(id)arg2;	// IMP=0x00000000000155b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000154fd
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000151f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014e8c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014cfb
- (id)init;	// IMP=0x0000000000014c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
