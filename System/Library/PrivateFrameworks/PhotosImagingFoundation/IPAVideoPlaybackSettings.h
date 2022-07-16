//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAVideoPlaybackSettings
{
    CDStruct_1b6d18a9 _naturalDuration;	// 8 = 0x8
}

+ (id)presetifyAdjustmentStack:(id)arg1;	// IMP=0x000000000000883b
+ (Class)operationClassForIdentifier:(id)arg1;	// IMP=0x00000000000087c0
+ (id)playbackSettingsForAdjustments:(id)arg1;	// IMP=0x00000000000082fe
+ (Class)expectedOperationClass;	// IMP=0x00000000000082ed
+ (void)initialize;	// IMP=0x0000000000008215
@property(readonly, nonatomic) CDStruct_1b6d18a9 naturalDuration; // @synthesize naturalDuration=_naturalDuration;
- (id)debugDescription;	// IMP=0x0000000000008116
- (id)archivalRepresentation;	// IMP=0x0000000000007f18
- (id)slomoOperation;	// IMP=0x0000000000007eff
- (id)trimOperation;	// IMP=0x0000000000007ee6
- (id)posterFrameOperation;	// IMP=0x0000000000007ecd
- (id)operationWithIdentifier:(id)arg1;	// IMP=0x0000000000007ebb
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000007e8d
- (id)descriptionByAddingOperation:(id)arg1;	// IMP=0x0000000000007e5f
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000007e31
- (id)descriptionWithOperations:(id)arg1;	// IMP=0x0000000000007dd3
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000007dcb
- (_Bool)isEqualToDescription:(id)arg1;	// IMP=0x0000000000007b9c
- (id)initWithOperations:(id)arg1 naturalDuration:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000007830
- (id)initWithOperations:(id)arg1;	// IMP=0x0000000000007802
- (CDStruct_1b6d18a9)naturalTimeForPosterFrame;	// IMP=0x0000000000002dff
- (CDStruct_1b6d18a9)naturalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000002c89
- (CDStruct_1b6d18a9)scaledTimeFromNaturalTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000002ac0
- (CDStruct_e83c9415)scaledPlaybackRangeForScaledDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000028ac
- (CDStruct_e83c9415)naturalPlaybackRange;	// IMP=0x0000000000002509
- (CDStruct_1b6d18a9)scaledDuration;	// IMP=0x00000000000023bc
- (id)descriptionByInsertingOrReplacingOperation:(id)arg1;	// IMP=0x0000000000001d73

@end

