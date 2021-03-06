//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface BPSOrderedMerge
{
    NSArray *_publishers;	// 8 = 0x8
    CDUnknownBlockType _comparator;	// 16 = 0x10
}

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;	// IMP=0x000000000001467f
- (void).cxx_destruct;	// IMP=0x000000000001463c
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
- (void)subscribe:(id)arg1;	// IMP=0x00000000000143ff
- (id)initWithPublishers:(id)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014352
- (id)initWithA:(id)arg1 b:(id)arg2 comparator:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014272
- (id)init;	// IMP=0x000000000001426c
- (_Bool)canStoreInternalStateInBookmark;	// IMP=0x000000000001471f
- (id)bookmarkableUpstreams;	// IMP=0x000000000001466d

@end

