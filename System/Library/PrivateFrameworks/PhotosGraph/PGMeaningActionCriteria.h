//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMeaningCriteria-Protocol.h>

@class NSString;

@interface PGMeaningActionCriteria : NSObject <PGMeaningCriteria>
{
    int _actionValue;	// 8 = 0x8
    NSString *_actionName;	// 16 = 0x10
    double _confidenceHighPrecisionThreshold;	// 24 = 0x18
    double _confidenceHighRecallThreshold;	// 32 = 0x20
}

+ (id)criteriaWithDictionary:(id)arg1;	// IMP=0x000000000047d2b9
+ (id)criteriaKey;	// IMP=0x000000000047d2ac
- (void).cxx_destruct;	// IMP=0x000000000047d897
@property(nonatomic) double confidenceHighRecallThreshold; // @synthesize confidenceHighRecallThreshold=_confidenceHighRecallThreshold;
@property(nonatomic) double confidenceHighPrecisionThreshold; // @synthesize confidenceHighPrecisionThreshold=_confidenceHighPrecisionThreshold;
@property(nonatomic) int actionValue; // @synthesize actionValue=_actionValue;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;	// IMP=0x000000000047d734
- (_Bool)passesCriteriaWithTrait:(id)arg1;	// IMP=0x000000000047d6c1
- (_Bool)passesForAssets:(id)arg1;	// IMP=0x000000000047d40c
- (_Bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;	// IMP=0x000000000047d404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

