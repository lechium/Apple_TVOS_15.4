//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMContentSource, BMStoreStream, NSString;

@interface BMContentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>
{
    BMStoreStream *_storeStream;	// 8 = 0x8
    BMContentSource *_contentSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000068bfa
- (id)source;	// IMP=0x0000000000068bec
- (_Bool)pruneEventsWithError:(id *)arg1 predicateBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068bd6
- (void)pruneWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068bbf
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x0000000000068ba9
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x0000000000068b83
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x0000000000068b6d
- (id)initWithStreamIdentifier:(id)arg1;	// IMP=0x0000000000068a0d
@property(readonly, nonatomic) NSString *identifier;
- (id)init;	// IMP=0x000000000006895d

@end

