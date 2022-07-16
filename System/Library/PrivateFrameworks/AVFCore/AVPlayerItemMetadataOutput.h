//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItemMetadataOutputInternal, NSDictionary, NSObject;
@protocol AVPlayerItemMetadataOutputPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemMetadataOutput
{
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x000000000007b759
@property(nonatomic) double advanceIntervalForDelegateInvocation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVPlayerItemMetadataOutputPushDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000007bc14
- (void)_detachFromPlayerItem;	// IMP=0x000000000007bb86
- (_Bool)_attachToPlayerItem:(id)arg1;	// IMP=0x000000000007b9f7
- (void)dealloc;	// IMP=0x000000000007b970
- (void)_collectUncollectables;	// IMP=0x000000000007b913
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x000000000007b77e
- (id)init;	// IMP=0x000000000007b76a
- (void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2;	// IMP=0x000000000007c1cf
@property(readonly, nonatomic, getter=_figMetadataOutputsDictionaryOptions) NSDictionary *figMetadataOutputsDictionaryOptions;
- (void)_signalFlush;	// IMP=0x000000000007bfd9

@end
