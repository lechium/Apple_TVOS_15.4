//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AXElementGrouper : NSObject
{
    double _thresholdForDeterminingEqualSize;	// 8 = 0x8
    long long _heuristics;	// 16 = 0x10
}

@property(nonatomic) long long heuristics; // @synthesize heuristics=_heuristics;
- (id)_groupablesForItems:(id)arg1;	// IMP=0x0000000000010b7f
- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long *)arg2;	// IMP=0x00000000000104cb
- (id)_applyTransformationPassesToRootGroup:(id)arg1;	// IMP=0x000000000001033d
- (id)_applyTransformationPass:(id)arg1 toGroup:(id)arg2;	// IMP=0x000000000000ffa8
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(_Bool)arg2;	// IMP=0x000000000000f827
- (_Bool)_frame:(struct CGRect)arg1 isApproximatelySameSizeAsFrame:(struct CGRect)arg2;	// IMP=0x000000000000f79c
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(_Bool)arg2;	// IMP=0x000000000000f224
- (id)groupElementsInRootGroup:(id)arg1;	// IMP=0x000000000000f191
@property(readonly, nonatomic) NSArray *transformationPasses;
@property(readonly, nonatomic) double thresholdForDeterminingEqualSize; // @synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize;
@property(readonly, nonatomic) unsigned long long preferredGroupSize;
@property(readonly, nonatomic) unsigned long long maximumGroupSize;
@property(readonly, nonatomic) unsigned long long minimumGroupSize;
- (id)initWithHeuristics:(long long)arg1;	// IMP=0x000000000000f06b
- (id)init;	// IMP=0x000000000000f05d

@end

