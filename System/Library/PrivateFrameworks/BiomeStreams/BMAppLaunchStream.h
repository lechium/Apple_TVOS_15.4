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

@interface BMAppLaunchStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream>
{
    BMStoreStream *_storeStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000060f74
- (id)source;	// IMP=0x0000000000060f5e
- (id)publishersForRemoteDevices:(id)arg1 startTime:(double)arg2 includeLocal:(_Bool)arg3 pipeline:(CDUnknownBlockType)arg4;	// IMP=0x0000000000060f48
- (id)publisher;	// IMP=0x0000000000060eda
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x0000000000060ec4
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x0000000000060e9e
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x0000000000060e88
- (id)remoteDevices;	// IMP=0x0000000000060e72
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000060da5
- (id)init;	// IMP=0x0000000000060cf4
@property(readonly, nonatomic) NSString *identifier;

@end

