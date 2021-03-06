//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMeaningCriteria-Protocol.h>

@class NSString;

@interface PGMeaningLocationMobilityCriteria : NSObject <PGMeaningCriteria>
{
    unsigned long long _locationMobilityType;	// 8 = 0x8
    NSString *_locationMobilityLabel;	// 16 = 0x10
}

+ (id)criteriaWithDictionary:(id)arg1;	// IMP=0x0000000000446077
+ (id)criteriaKey;	// IMP=0x000000000044606a
- (void).cxx_destruct;	// IMP=0x000000000044634d
@property(retain, nonatomic) NSString *locationMobilityLabel; // @synthesize locationMobilityLabel=_locationMobilityLabel;
@property(nonatomic) unsigned long long locationMobilityType; // @synthesize locationMobilityType=_locationMobilityType;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;	// IMP=0x000000000044619f
- (_Bool)passesForAssets:(id)arg1;	// IMP=0x0000000000446197
- (_Bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;	// IMP=0x0000000000446122

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

