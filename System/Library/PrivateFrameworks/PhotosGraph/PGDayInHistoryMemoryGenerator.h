//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface PGDayInHistoryMemoryGenerator
{
    _Bool _ignoreLocalDate;	// 8 = 0x8
    NSDate *_localDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ff0d3
@property(nonatomic) _Bool ignoreLocalDate; // @synthesize ignoreLocalDate=_ignoreLocalDate;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x00000000001fef59
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x00000000001feed0
- (id)_potentialMemoriesForDryTesting;	// IMP=0x00000000001fee1c
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fe943

@end

