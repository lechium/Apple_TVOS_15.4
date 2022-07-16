//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMRestrictedStream, NSString;

@interface BMUserProofingStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>
{
    BMRestrictedStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ab56c
- (id)source;	// IMP=0x00000000000ab556
- (id)publisher;	// IMP=0x00000000000ab4e8
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x00000000000ab4d2
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x00000000000ab4bc
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x00000000000ab4a6
- (id)init;	// IMP=0x00000000000ab408
@property(readonly, nonatomic) NSString *identifier;

@end
