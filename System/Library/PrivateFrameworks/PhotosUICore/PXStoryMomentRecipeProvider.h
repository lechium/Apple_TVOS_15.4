//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PFStoryAutoEditConfiguration, PXStoryMomentRecipeState;

@interface PXStoryMomentRecipeProvider : NSObject
{
    NSString *_colorGradeCategory;	// 8 = 0x8
    PFStoryAutoEditConfiguration *_configuration;	// 16 = 0x10
    long long _songPace;	// 24 = 0x18
    PXStoryMomentRecipeState *_state;	// 32 = 0x20
    NSMutableDictionary *_clipDebugInfos;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000194fe8
- (void)provideDebugInfoForClip:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000194ef8
- (void)provideRecipeForMomentClipRange:(struct _NSRange)arg1 withClipCatalog:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001930f8
- (struct _NSRange)_rangeOfLength:(long long)arg1 centeredOnIndex:(long long)arg2 withinRange:(struct _NSRange)arg3;	// IMP=0x000000000019301d
- (CDStruct_618113c1)_nextEmptySpaceBreakTransitionForMotion:(CDStruct_b8e7e30c)arg1;	// IMP=0x0000000000192f13
- (id)_nextSingleAssetRecipeWithPreviousClip:(id)arg1;	// IMP=0x0000000000192e9e
- (id)_nextModuleRecipeWithModuleClipRange:(struct _NSRange)arg1 clipCatalog:(id)arg2;	// IMP=0x0000000000192df3
- (id)_nextNUpRevealRecipeWithPreviousClip:(id)arg1;	// IMP=0x0000000000192dd9
- (id)_nextBaseMomentRecipeWithPreviousClip:(id)arg1;	// IMP=0x0000000000192d64
- (id)_recipeFromRecipeType:(unsigned long long)arg1 previousClip:(id)arg2;	// IMP=0x0000000000192a17
- (long long)_motionStyleForRecipe:(unsigned long long)arg1;	// IMP=0x0000000000192986
- (long long)_innerTransitionKindForRecipe:(unsigned long long)arg1;	// IMP=0x0000000000192970
- (long long)_incomingTransitionKindForRecipe:(unsigned long long)arg1;	// IMP=0x000000000019287f
- (_Bool)_isSongEnergetic;	// IMP=0x0000000000192848
- (id)initWithConfiguration:(id)arg1 colorGradeCategory:(id)arg2 songPace:(long long)arg3 randomNumberGenerator:(id)arg4;	// IMP=0x0000000000192748
- (id)init;	// IMP=0x00000000001926ce

@end

