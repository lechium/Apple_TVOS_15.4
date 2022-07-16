//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLMomentGenerationUtils : NSObject
{
}

+ (_Bool)isNearFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;	// IMP=0x00000000005a3491
+ (_Bool)isAtFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;	// IMP=0x00000000005a32da
+ (id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3;	// IMP=0x00000000005a3074
+ (id)sortedOverlappingFrequentLocations:(id)arg1;	// IMP=0x00000000005a301a
+ (_Bool)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;	// IMP=0x00000000005a2e7f
+ (unsigned short)locationTypeForLocation:(id)arg1 usingLocationsOfInterest:(id)arg2 routineIsAvailable:(_Bool)arg3 horizontalAccuracy:(double)arg4;	// IMP=0x00000000005a2bf3
+ (unsigned short)processedLocationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3 routineIsAvailable:(_Bool)arg4;	// IMP=0x00000000005a2aed
+ (void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(_Bool)arg4;	// IMP=0x00000000005a29d8

@end
