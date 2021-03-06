//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFStoryAutoEditConfiguration, PFStoryAutoEditFrequencyTable;
@protocol PFRandomNumberGenerator;

@interface PXStoryRecipeClipTransitionProvider : NSObject
{
    PFStoryAutoEditFrequencyTable *_baseTransitionTable;	// 8 = 0x8
    PFStoryAutoEditFrequencyTable *_interMomentTransitionTable;	// 16 = 0x10
    PFStoryAutoEditFrequencyTable *_portraitTransitionTable;	// 24 = 0x18
    PFStoryAutoEditFrequencyTable *_nUpTransitionTable;	// 32 = 0x20
    PFStoryAutoEditFrequencyTable *_interModuleTransitionTable;	// 40 = 0x28
    id <PFRandomNumberGenerator> _randomNumberGenerator;	// 48 = 0x30
    PFStoryAutoEditConfiguration *_configuration;	// 56 = 0x38
    long long _songPace;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000070d7b5
@property(readonly, nonatomic) long long songPace; // @synthesize songPace=_songPace;
@property(readonly, nonatomic) PFStoryAutoEditConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)provideTransitionsForMomentClipRange:(struct _NSRange)arg1 withClipCatalog:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000070d23e
- (CDStruct_618113c1)nextIntraMomentTransition;	// IMP=0x000000000070d200
- (CDStruct_618113c1)_nextTransitionFromTable:(id)arg1 currentMotion:(CDStruct_b8e7e30c)arg2 nextMotion:(CDStruct_b8e7e30c)arg3;	// IMP=0x000000000070d028
- (_Bool)_cameraMovement:(long long)arg1 allowsTransition:(long long)arg2;	// IMP=0x000000000070cffb
- (id)initWithConfiguration:(id)arg1 colorGradeCategory:(id)arg2 songPace:(long long)arg3 randomNumberGenerator:(id)arg4;	// IMP=0x000000000070cc92
- (id)init;	// IMP=0x000000000070cc18

@end

