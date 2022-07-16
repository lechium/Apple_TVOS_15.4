//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject
{
    CalPreferences *_preferences;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x0000000000061f6b
- (void).cxx_destruct;	// IMP=0x00000000000629ed
@property(nonatomic) _Bool syntheticTravelAdvisoriesEnabled;
@property(nonatomic) _Bool shouldBypassTravelEngineThrottle;
@property(nonatomic) _Bool showDepartureDateForTransitTimeToLeave;
@property(nonatomic) _Bool verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property(nonatomic) _Bool performAgendaEntryEqualityChecksInTravelEngine;
@property(nonatomic) _Bool forceDisplayOfNewTravelAdvisoryHypotheses;
@property(nonatomic) _Bool preventMarkingTravelAdvisoryEntriesAsDismissed;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property(nonatomic) _Bool overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property(nonatomic) _Bool overrideTravelAdvisoryHypothesis;
@property(nonatomic) _Bool saveGeocodedLocationsInTravelEngine;
@property(nonatomic) double availabilityFreshnessWindow;
- (id)init;	// IMP=0x0000000000061fc0

@end
