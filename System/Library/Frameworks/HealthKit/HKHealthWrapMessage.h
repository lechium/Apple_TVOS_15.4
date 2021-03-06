//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKStreamingDestination-Protocol.h>

@class HKHealthWrapCodablePayloadHeader, HKHealthWrapEncryptor, HKHealthWrapMessageConfiguration, NSError, NSOutputStream, NSURL, NSUUID, _HKCompressionEngine;
@protocol OS_dispatch_queue;

@interface HKHealthWrapMessage : NSObject <_HKStreamingDestination>
{
    HKHealthWrapCodablePayloadHeader *_payloadHeader;	// 8 = 0x8
    NSUUID *_studyUUID;	// 16 = 0x10
    struct __SecCertificate *_certificate;	// 24 = 0x18
    _HKCompressionEngine *_compressionEngine;	// 32 = 0x20
    HKHealthWrapEncryptor *_encryptor;	// 40 = 0x28
    NSURL *_outputURL;	// 48 = 0x30
    NSOutputStream *_outputStream;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_encryptQueue;	// 64 = 0x40
    _Bool _compressionEnabled;	// 72 = 0x48
    _Bool _lastSuccess;	// 73 = 0x49
    NSError *_lastError;	// 80 = 0x50
    HKHealthWrapMessageConfiguration *_configuration;	// 88 = 0x58
}

+ (id)newOutputFileURLInDirectory:(id)arg1;	// IMP=0x00000000000a211c
+ (id)newOutputFileURL;	// IMP=0x00000000000a209a
- (void).cxx_destruct;	// IMP=0x00000000000a2a73
@property(readonly, nonatomic) HKHealthWrapMessageConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)sinkContentFinished;	// IMP=0x00000000000a29cd
- (void)receiveSinkContent:(id)arg1;	// IMP=0x00000000000a28eb
- (void)_cleanup;	// IMP=0x00000000000a281e
- (void)_writeDataToCompressor:(id)arg1;	// IMP=0x00000000000a26e0
- (_Bool)_run:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000000a266e
- (void)reset;	// IMP=0x00000000000a265c
- (id)finalizeWithError:(id *)arg1;	// IMP=0x00000000000a25e1
- (void)_finalize;	// IMP=0x00000000000a257a
- (_Bool)appendData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a24bb
- (_Bool)appendDataFromFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a244a
- (_Bool)startWithOutputFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a21fb
- (_Bool)startWithError:(id *)arg1;	// IMP=0x00000000000a2042
- (id)_codableKeyValuePairsFromDictionary:(id)arg1;	// IMP=0x00000000000a1d82
- (void)dealloc;	// IMP=0x00000000000a1d2a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000a1a9a
- (id)initWithSenderUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 payloadIdentifier:(id)arg7 applicationData:(id)arg8 certificate:(struct __SecCertificate *)arg9;	// IMP=0x00000000000a180d

@end

