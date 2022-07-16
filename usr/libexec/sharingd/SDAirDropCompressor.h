//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDAirDropCompressor : NSObject
{
    _Bool _compressible;	// 8 = 0x8
    unsigned int _totalBytesSent;	// 12 = 0xc
    double _totalNetworkDelay;	// 16 = 0x10
    _Bool _keepingUpWithNetwork;	// 24 = 0x18
    long long _numBlocksProcessed;	// 32 = 0x20
    unsigned int _totalBytesProcessed;	// 40 = 0x28
    long long _numBlocksCompressed;	// 48 = 0x30
    double _lastCompressionRatio;	// 56 = 0x38
    double _totalCompressionTime;	// 64 = 0x40
    unsigned int _totalCompressedOutput;	// 72 = 0x48
    struct __CFReadStream *_readStream;	// 80 = 0x50
    struct __CFWriteStream *_writeStream;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_adjustmentQueue;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000b43c5
- (void)executeWriteWithAdaptiveCompression;	// IMP=0x00100000000b3f07
- (void)executeReadWithAdaptiveCompression;	// IMP=0x00100000000b3e37
- (void)fileComplete;	// IMP=0x00100000000b3db8
- (void)processCompressibilityStatistics;	// IMP=0x00100000000b3d3e
- (void)processNetworkStatistics:(double)arg1;	// IMP=0x00100000000b3b3c
- (void)openStreams;	// IMP=0x00100000000b3a6c
- (void)sendOutgoingChunk:(char *)arg1 length:(long long)arg2 compressed:(_Bool)arg3;	// IMP=0x00100000000b39ff
- (_Bool)readIncomingChunk;	// IMP=0x00100000000b38f6
- (_Bool)readData:(char *)arg1 length:(long long)arg2 fromStream:(struct __CFReadStream *)arg3;	// IMP=0x00100000000b3848
- (_Bool)writeData:(char *)arg1 length:(long long)arg2 toStream:(struct __CFWriteStream *)arg3;	// IMP=0x00100000000b37a8
- (struct __CFReadStream *)copyReadStream;	// IMP=0x00100000000b3791
- (void)dealloc;	// IMP=0x00100000000b3744
- (id)initWithReadStream:(struct __CFReadStream *)arg1 writeStream:(struct __CFWriteStream *)arg2;	// IMP=0x00100000000b36a3

@end
