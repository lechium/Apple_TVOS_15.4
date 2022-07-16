//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFStoryAutoEditConfiguration;

@interface PXStoryRecipeClipModuleProvider : NSObject
{
    PFStoryAutoEditConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a72d9
@property(readonly, nonatomic) PFStoryAutoEditConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)provideModulesForMomentClipRange:(struct _NSRange)arg1 withClipCatalog:(id)arg2 maxModuleLength:(unsigned long long)arg3 maxEmptySpaceLength:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a6e95
- (id)_splitEmptySpaceInModules:(id)arg1 maxEmptySpaceLength:(unsigned long long)arg2 momentClipRange:(struct _NSRange)arg3 withClipCatalog:(id)arg4;	// IMP=0x00000000000a6b76
- (id)mergeModulesFromRangesByModuleType:(id)arg1 momentClipRange:(struct _NSRange)arg2;	// IMP=0x00000000000a644c
- (id)computeRunsForModuleType:(long long)arg1 momentClipRange:(struct _NSRange)arg2 withClipCatalog:(id)arg3 maxModuleLength:(unsigned long long)arg4;	// IMP=0x00000000000a5fcc
- (id)splitRanges:(id)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000000000a5bed
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000a5b82
- (id)init;	// IMP=0x00000000000a5b08

@end
