//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMSyncableStream-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMStoreStream, NSString;

@interface BMRestrictedStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream>
{
    BMStoreStream *_storeStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002124c
- (id)remoteDevices;	// IMP=0x0000000000021236
- (id)publishersForRemoteDevices:(id)arg1 startTime:(double)arg2 includeLocal:(_Bool)arg3 pipeline:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021220
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)arg1 usingPredicateBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002120a
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000211f4
- (void)pruneWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000211de
- (id)source;	// IMP=0x0000000000021174
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x000000000002115e
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x0000000000021138
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x0000000000021122
- (id)initWithIdentifier:(id)arg1 segmentSize:(unsigned long long)arg2 pruningPolicy:(id)arg3;	// IMP=0x0000000000020ef7
- (id)initWithIdentifier:(id)arg1 segmentSize:(unsigned long long)arg2;	// IMP=0x0000000000020ee2
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000020d9a
- (id)init;	// IMP=0x0000000000020d94
@property(readonly, nonatomic) NSString *identifier;

@end

