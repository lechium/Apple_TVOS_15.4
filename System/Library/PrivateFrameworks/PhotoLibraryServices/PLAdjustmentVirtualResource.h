//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface PLAdjustmentVirtualResource
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSNumber *_cachedDataLength;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d3de3
@property(copy, nonatomic) NSNumber *cachedDataLength; // @synthesize cachedDataLength=_cachedDataLength;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (id)adjustmentDictionary;	// IMP=0x00000000002d3b9b
- (long long)estimatedDataLength;	// IMP=0x00000000002d3b1f
- (long long)dataLength;	// IMP=0x00000000002d399a
- (id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2;	// IMP=0x00000000002d375d

@end
