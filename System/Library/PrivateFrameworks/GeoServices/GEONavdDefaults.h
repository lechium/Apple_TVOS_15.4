//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEONavdDefaults : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000000002f1fb3
@property(readonly, nonatomic) _Bool transitListInstructionTimeText;
@property(readonly, nonatomic) _Bool transitTextInPlanningArtwork;
@property(readonly, nonatomic) unsigned long long maxRandomJitterForHypothesisWakeup;
@property(readonly, nonatomic) unsigned long long minRandomJitterForHypothesisWakeup;
@property(readonly, nonatomic) double fastWalkingSpeed;
@property(readonly, nonatomic) double slowWalkingSpeed;
@property(readonly, nonatomic) double averageWalkingSpeed;
@property(readonly, nonatomic) _Bool transitTTLSupported;
@property(readonly, nonatomic) _Bool shouldUseServerSideETAs;
@property(readonly, nonatomic) double exitRegionSize;
@property(readonly, nonatomic) unsigned long long maximumTraceFileCount;
@property(readonly, nonatomic) double maximumUserRoutingPreferencesAge;
@property(readonly, nonatomic) _Bool useConservativeDepartureForRefreshTimer;
@property(readonly, nonatomic) double updateTimeout;
@property(readonly, nonatomic) unsigned long long maximumNumberOfLeechedLocations;
@property(readonly, nonatomic) double minimumExpirationOffset;
@property(readonly, nonatomic) double defaultExpirationOffset;
@property(readonly, nonatomic) double predictionsWatchdogInterval;
@property(readonly, nonatomic) double refreshTimeIntervalBackoffMax;
@property(readonly, nonatomic) double refreshTimeIntervalBackoffBase;
@property(readonly, nonatomic) double minimumTimerTimeStampFudge;
@property(readonly, nonatomic) double maximumRefreshIntervalLeeway;
@property(readonly, nonatomic) unsigned long long refreshEquationHighestFrequency;
@property(readonly, nonatomic) unsigned long long refreshEquationLowestFrequencyTransit;
@property(readonly, nonatomic) unsigned long long refreshEquationLowestFrequency;
@property(readonly, nonatomic) double refreshTimeIntervalToUseIfError;
@property(readonly, nonatomic) unsigned long long maximumNumberOfProcessingLoopRepeats;
@property(readonly, nonatomic) unsigned long long accessValueThresholdToUpdateCacheEntries;
@property(readonly, nonatomic) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
@property(readonly, nonatomic) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
@property(readonly, nonatomic) double pendingStopTimeToLive;
@property(readonly, nonatomic) long long maximumNumberOfDestinationsToMonitor;
@property(readonly, nonatomic) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
@property(readonly, nonatomic) double hypothesisShouldPersistThresholdInSeconds;
@property(readonly, nonatomic) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
@property(readonly, nonatomic) double hypothesisResponseStaleToRefreshThresholdInSeconds;
@property(readonly, nonatomic) unsigned long long initialClientInitiatedHypothesisCacheAccessValue;
@property(readonly, nonatomic) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue;
@property(readonly, nonatomic) double minimumDistanceToCompareAgainstLocationAccuracy;
@property(readonly, nonatomic) double locationReuseThreshold;
@property(readonly, nonatomic) double locationFreshnessThreshold;
@property(readonly, nonatomic) double extraLocationWaitTimeInterval;
@property(readonly, nonatomic) double staleLocationUseTimerInterval;
@property(readonly, nonatomic) double locationUpdateTimerInterval;
@property(readonly, nonatomic) double locationUpdatesDesiredAccuracyForTransit;
@property(readonly, nonatomic) double locationUpdatesDesiredAccuracyForDriving;
@property(readonly, nonatomic) double locationUpdatesDesiredAccuracyForWalking;
@property(readonly, nonatomic) double locationUpdatesDesiredAccuracyWhileStationaryForTransit;
@property(readonly, nonatomic) double locationUpdatesDesiredAccuracyWhileStationaryForWalking;
@property(readonly, nonatomic) double locationUpdatesDesiredAccuracyWhileStationaryForDriving;
@property(readonly, nonatomic) double minimumTimeIntervalToConsiderLeechedLocationInSeconds;
@property(readonly, nonatomic) double minimumDistanceToConsiderLeechedLocationInMeters;
@property(readonly, nonatomic) double minimumDistanceToGetLocationUpdatesInMeters;
@property(readonly, nonatomic) _Bool shouldSnapToParkingLotSegments;
@property(readonly, nonatomic) _Bool shouldMatchToLAR;
@property(readonly, nonatomic) double maxDistanceFromOriginToSuppressReroute;
@property(readonly, nonatomic) double automaticTrafficIncidentRerouteDelay;
@property(readonly, nonatomic) _Bool shouldAutomaticallyRerouteTrafficIncidents;
@property(readonly, nonatomic) int endValidDistanceOffset;
@property(readonly, nonatomic) int startValidDistanceOffset;
@property(readonly, nonatomic) _Bool shouldRequestInlineShields;
@property(readonly, nonatomic) _Bool shouldRequestLaneGuidance;
@property(readonly, nonatomic) _Bool shouldUseGuidanceEventManager;
@property(readonly, nonatomic) _Bool shouldLazyLoadRoutes;
@property(readonly, nonatomic) _Bool shouldShowServiceErrorAlert;
@property(readonly, nonatomic) _Bool shouldRunNavigationInDaemon;

@end

