//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol PFStoryMotionStyleTable, PFStoryTransitionTable;

@interface PFStoryAutoEditConfiguration : NSObject
{
    NSDictionary *_durationTablesByPlaybackStyle;	// 8 = 0x8
    NSDictionary *_transitionDurationsByKind;	// 16 = 0x10
    NSDictionary *_clusteringPropertiesByCategory;	// 24 = 0x18
    NSDictionary *_overallDurationTable;	// 32 = 0x20
    NSDictionary *_outroDurations;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    id <PFStoryTransitionTable> _defaultTransitionTable;	// 56 = 0x38
    id <PFStoryTransitionTable> _interMomentTransitionTable;	// 64 = 0x40
    id <PFStoryTransitionTable> _portraitTransitionTable;	// 72 = 0x48
    id <PFStoryTransitionTable> _nUpTransitionTable;	// 80 = 0x50
    id <PFStoryTransitionTable> _interModuleTransitionTable;	// 88 = 0x58
    id <PFStoryMotionStyleTable> _motionStyleTable;	// 96 = 0x60
    id <PFStoryMotionStyleTable> _diptychMotionStyleTable;	// 104 = 0x68
    id <PFStoryMotionStyleTable> _triptychMotionStyleTable;	// 112 = 0x70
    double _diptychDurationMultiplier;	// 120 = 0x78
    double _triptychDurationMultiplier;	// 128 = 0x80
    double _initialDurationMultiplier;	// 136 = 0x88
    double _finalDurationMultiplier;	// 144 = 0x90
    double _slowVisualTempoTarget;	// 152 = 0x98
    double _mediumVisualTempoTarget;	// 160 = 0xa0
    double _fastVisualTempoTarget;	// 168 = 0xa8
    double _composabilityTargetDurationMultiplier;	// 176 = 0xb0
    long long _composabilityMinimum1UpRunCount;	// 184 = 0xb8
    long long _composabilityMinimumNUpCount;	// 192 = 0xc0
    long long _composabilityMaximumNUpRunCount;	// 200 = 0xc8
    double _composabilityScoreThreshold;	// 208 = 0xd0
}

+ (id)standardConfiguration;	// IMP=0x0000000000009617
+ (id)currentVersion;	// IMP=0x000000000000960a
- (void).cxx_destruct;	// IMP=0x0000000000007be6
@property(readonly, nonatomic) double composabilityScoreThreshold; // @synthesize composabilityScoreThreshold=_composabilityScoreThreshold;
@property(readonly, nonatomic) long long composabilityMaximumNUpRunCount; // @synthesize composabilityMaximumNUpRunCount=_composabilityMaximumNUpRunCount;
@property(readonly, nonatomic) long long composabilityMinimumNUpCount; // @synthesize composabilityMinimumNUpCount=_composabilityMinimumNUpCount;
@property(readonly, nonatomic) long long composabilityMinimum1UpRunCount; // @synthesize composabilityMinimum1UpRunCount=_composabilityMinimum1UpRunCount;
@property(readonly, nonatomic) double composabilityTargetDurationMultiplier; // @synthesize composabilityTargetDurationMultiplier=_composabilityTargetDurationMultiplier;
@property(readonly, nonatomic) double fastVisualTempoTarget; // @synthesize fastVisualTempoTarget=_fastVisualTempoTarget;
@property(readonly, nonatomic) double mediumVisualTempoTarget; // @synthesize mediumVisualTempoTarget=_mediumVisualTempoTarget;
@property(readonly, nonatomic) double slowVisualTempoTarget; // @synthesize slowVisualTempoTarget=_slowVisualTempoTarget;
@property(readonly, nonatomic) double finalDurationMultiplier; // @synthesize finalDurationMultiplier=_finalDurationMultiplier;
@property(readonly, nonatomic) double initialDurationMultiplier; // @synthesize initialDurationMultiplier=_initialDurationMultiplier;
@property(readonly, nonatomic) double triptychDurationMultiplier; // @synthesize triptychDurationMultiplier=_triptychDurationMultiplier;
@property(readonly, nonatomic) double diptychDurationMultiplier; // @synthesize diptychDurationMultiplier=_diptychDurationMultiplier;
@property(readonly, nonatomic) id <PFStoryMotionStyleTable> triptychMotionStyleTable; // @synthesize triptychMotionStyleTable=_triptychMotionStyleTable;
@property(readonly, nonatomic) id <PFStoryMotionStyleTable> diptychMotionStyleTable; // @synthesize diptychMotionStyleTable=_diptychMotionStyleTable;
@property(readonly, nonatomic) id <PFStoryMotionStyleTable> motionStyleTable; // @synthesize motionStyleTable=_motionStyleTable;
@property(readonly, nonatomic) id <PFStoryTransitionTable> interModuleTransitionTable; // @synthesize interModuleTransitionTable=_interModuleTransitionTable;
@property(readonly, nonatomic) id <PFStoryTransitionTable> nUpTransitionTable; // @synthesize nUpTransitionTable=_nUpTransitionTable;
@property(readonly, nonatomic) id <PFStoryTransitionTable> portraitTransitionTable; // @synthesize portraitTransitionTable=_portraitTransitionTable;
@property(readonly, nonatomic) id <PFStoryTransitionTable> interMomentTransitionTable; // @synthesize interMomentTransitionTable=_interMomentTransitionTable;
@property(readonly, nonatomic) id <PFStoryTransitionTable> defaultTransitionTable; // @synthesize defaultTransitionTable=_defaultTransitionTable;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) CDStruct_c8943d03 longOverallDuration;
@property(readonly, nonatomic) CDStruct_c8943d03 mediumOverallDuration;
@property(readonly, nonatomic) CDStruct_c8943d03 shortOverallDuration;
- (CDStruct_c8943d03)_overallDurationInfoForDurationKind:(long long)arg1;	// IMP=0x00000000000078e8
- (id)clusteringPropertiesForMemoryCategoryName:(id)arg1;	// IMP=0x0000000000007778
@property(readonly, nonatomic) CDStruct_c8943d03 maximumDurations;
@property(readonly, nonatomic) CDStruct_c8943d03 minimumDurations;
- (double)outroDurationForSongPace:(long long)arg1;	// IMP=0x0000000000006e9d
- (double)durationForTransitionKind:(long long)arg1 songPace:(long long)arg2;	// IMP=0x0000000000006daa
- (CDStruct_c8943d03)durationInfoForPlaybackStyle:(long long)arg1 songPace:(long long)arg2;	// IMP=0x0000000000006b87
- (void)_loadClusteringPropertiesFromMemoryCategories:(id)arg1;	// IMP=0x0000000000006abf
- (id)_arrayFromTable:(id)arg1 count:(unsigned long long)arg2 nameToValueMap:(id)arg3;	// IMP=0x0000000000006984
- (id)_loadData:(id)arg1;	// IMP=0x0000000000004cb5
- (id)initWithConfigurationDictionary:(id)arg1;	// IMP=0x0000000000004c3e
- (id)initWithConfigurationData:(id)arg1;	// IMP=0x0000000000004ab1
- (id)initWithConfigurationFileAtURL:(id)arg1;	// IMP=0x0000000000004a1f
- (id)init;	// IMP=0x00000000000043af

@end
