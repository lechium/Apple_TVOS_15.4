//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVQueuePlayerInternal;

@interface AVQueuePlayer
{
    AVQueuePlayerInternal *_queuePlayer;	// 16 = 0x10
}

+ (id)queuePlayerWithItems:(id)arg1;	// IMP=0x0000000000077111
+ (void)initialize;	// IMP=0x0000000000077100
- (void)removeAllItems;	// IMP=0x00000000000774a3
- (void)removeItem:(id)arg1;	// IMP=0x0000000000077491
- (void)insertItem:(id)arg1 afterItem:(id)arg2;	// IMP=0x00000000000773fb
- (_Bool)canInsertItem:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000000077391
- (void)advanceToNextItem;	// IMP=0x000000000007737f
- (id)items;	// IMP=0x000000000007736d
- (void)setActionAtItemEnd:(long long)arg1;	// IMP=0x0000000000077339
- (long long)_defaultActionAtItemEnd;	// IMP=0x0000000000077331
- (void)dealloc;	// IMP=0x00000000000772ea
- (id)initWithItems:(id)arg1;	// IMP=0x00000000000771b7
- (id)init;	// IMP=0x0000000000077140
- (_Bool)canOverlapPlaybackFromPlayerItem:(id)arg1 toPlayerItem:(id)arg2;	// IMP=0x00000000000774b5

@end
