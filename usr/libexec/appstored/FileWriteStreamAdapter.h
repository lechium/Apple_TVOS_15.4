//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChunkedDigest, DigestVerifier, NSOutputStream, NSString;

@interface FileWriteStreamAdapter : NSObject
{
    NSString *_downloadPath;	// 8 = 0x8
    NSOutputStream *_outputStream;	// 16 = 0x10
    unsigned long long _savedBytes;	// 24 = 0x18
    DigestVerifier *_verifier;	// 32 = 0x20
    _Bool _dataComplete;	// 40 = 0x28
    _Bool _hasConsumedData;	// 41 = 0x29
    double _percentComplete;	// 48 = 0x30
    unsigned long long _diskUsage;	// 56 = 0x38
    ChunkedDigest *_digest;	// 64 = 0x40
    NSString *_logKey;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000068a4d
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) ChunkedDigest *digest; // @synthesize digest=_digest;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000689bf
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068911
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000688c9
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068205
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006816b
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068012
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068000
- (id)initWithDownloadPath:(id)arg1;	// IMP=0x0010000000067f95

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

