//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMStreamDeleting-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMRestrictedStream, NSString;

@interface BMSiriPrivateLearningSELFEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting>
{
    BMRestrictedStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007e9eb
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)arg1 usingPredicateBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007e9d5
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007e9bf
- (void)deleteEventsWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x000000000007e9a9
- (id)source;	// IMP=0x000000000007e993
- (id)publisher;	// IMP=0x000000000007e925
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x000000000007e90f
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x000000000007e8f9
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x000000000007e8e3
- (id)init;	// IMP=0x000000000007e7fe
@property(readonly, nonatomic) NSString *identifier;

@end
