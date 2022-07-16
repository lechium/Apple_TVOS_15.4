//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMStoreStream, NSString;

@interface BMTestStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>
{
    BMStoreStream *_storeStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e802
- (id)source;	// IMP=0x000000000000e7ec
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x000000000000e7d6
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x000000000000e7b0
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x000000000000e79a
- (id)init;	// IMP=0x000000000000e6e9
@property(readonly, nonatomic) NSString *identifier;

@end

