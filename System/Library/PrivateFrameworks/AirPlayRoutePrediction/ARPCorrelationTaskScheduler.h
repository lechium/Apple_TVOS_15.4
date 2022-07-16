//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BPSSink, NSDate;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ARPCorrelationTaskScheduler : NSObject
{
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BPSSink *_sinkAccessories;	// 24 = 0x18
    BPSSink *_sinkMediaAccessories;	// 32 = 0x20
    BPSSink *_sinkScenes;	// 40 = 0x28
    NSDate *_bookmark;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000bde1
@property(copy) NSDate *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) BPSSink *sinkScenes; // @synthesize sinkScenes=_sinkScenes;
@property(readonly, nonatomic) BPSSink *sinkMediaAccessories; // @synthesize sinkMediaAccessories=_sinkMediaAccessories;
@property(readonly, nonatomic) BPSSink *sinkAccessories; // @synthesize sinkAccessories=_sinkAccessories;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void)executeCorrelationTask;	// IMP=0x000000000000bd05
- (void)_executeCorrelationTask;	// IMP=0x000000000000bc35
- (void)homeKitEventInserted;	// IMP=0x000000000000bb57
- (void)microLocationEventInserted:(id)arg1;	// IMP=0x000000000000ba79
- (void)_executeHomeControlNextActionCorrelationTask;	// IMP=0x000000000000b9dc
- (void)_executeHomeControlMicrolocationCorrelationTask;	// IMP=0x000000000000b90c
- (void)nowPlayingEventInserted:(id)arg1;	// IMP=0x000000000000b65d
- (void)dealloc;	// IMP=0x000000000000b55e
- (id)initWithKnowledgeStore:(id)arg1;	// IMP=0x000000000000afa1

@end

