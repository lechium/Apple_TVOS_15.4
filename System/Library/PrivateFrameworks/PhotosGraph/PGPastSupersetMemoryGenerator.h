//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface PGPastSupersetMemoryGenerator
{
    NSDate *_localDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000160068
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x000000000015fd9b
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;	// IMP=0x000000000015fca3
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 potentialMemory:(id)arg2;	// IMP=0x000000000015fbaa
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000015fab9
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000015f9e5
- (id)relevantCurationFeederForTriggeredMemory:(id)arg1 relevantFeeder:(id)arg2 inGraph:(id)arg3 allowGuestAsset:(_Bool)arg4 progressReporter:(id)arg5;	// IMP=0x000000000015f73d
- (id)relevantCurationFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000015f5a1
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x000000000015f2fd
- (id)relevantFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000015f164
- (id)dateIntervalWithSortedMomentNodes:(id)arg1;	// IMP=0x000000000015f079
- (id)_potentialMemoriesForDryTesting;	// IMP=0x000000000015efdd
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x000000000015eda4
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015c19a

@end

