//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLLocation, MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSXPCConnection, NSXPCListener, RTRoutineManager;
@protocol OS_dispatch_source;

@interface CLRoutineMonitor : CLIntersiloService
{
    NSObject<OS_dispatch_source> *_wakeRoutinedTimer;	// 8 = 0x8
    void *_serviceLocationProvider;	// 16 = 0x10
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::default_delete<CLServiceLocationProvider_Type::Client>> _serviceLocationClient;	// 24 = 0x18
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 32 = 0x20
    struct unique_ptr<CLFilteredLocationController_Type::Client, std::default_delete<CLFilteredLocationController_Type::Client>> _filteredLocationClient;	// 40 = 0x28
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 48 = 0x30
    struct unique_ptr<CLLocationAwarenessProvider_Type::Client, std::default_delete<CLLocationAwarenessProvider_Type::Client>> _awarenessClient;	// 56 = 0x38
    struct RegInfo _awarenessRegInfo;	// 64 = 0x40
    _Bool _updating;	// 112 = 0x70
    _Bool _updatingPredictedApplications;	// 113 = 0x71
    _Bool _authorized;	// 114 = 0x72
    _Bool _armed;	// 115 = 0x73
    _Bool _diminishedMode;	// 116 = 0x74
    NSXPCConnection *_connection;	// 120 = 0x78
    NSMutableArray *_locations;	// 128 = 0x80
    CLLocation *_lastLocation;	// 136 = 0x88
    NSXPCListener *_listener;	// 144 = 0x90
    RTRoutineManager *_routineManager;	// 152 = 0x98
    NSMutableSet *_visitClients;	// 160 = 0xa0
    NSMutableSet *_leechClients;	// 168 = 0xa8
    NSMutableSet *_lowConfidenceVisitLeechClients;	// 176 = 0xb0
    NSMutableDictionary *_scenarioTriggerClients;	// 184 = 0xb8
}

+ (id)bundlePath;	// IMP=0x001000000054fb92
+ (id)getSilo;	// IMP=0x001000000054fb36
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000054fb1d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000054fac0
+ (_Bool)isSupported;	// IMP=0x001000000054fa28
- (id).cxx_construct;	// IMP=0x0020000000556c04
- (void).cxx_destruct;	// IMP=0x0010000000556b58
@property(retain, nonatomic) NSMutableDictionary *scenarioTriggerClients; // @synthesize scenarioTriggerClients=_scenarioTriggerClients;
@property(retain, nonatomic) NSMutableSet *lowConfidenceVisitLeechClients; // @synthesize lowConfidenceVisitLeechClients=_lowConfidenceVisitLeechClients;
@property(retain, nonatomic) NSMutableSet *leechClients; // @synthesize leechClients=_leechClients;
@property(retain, nonatomic) NSMutableSet *visitClients; // @synthesize visitClients=_visitClients;
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(nonatomic) _Bool diminishedMode; // @synthesize diminishedMode=_diminishedMode;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(nonatomic) _Bool authorized; // @synthesize authorized=_authorized;
@property(nonatomic) _Bool updatingPredictedApplications; // @synthesize updatingPredictedApplications=_updatingPredictedApplications;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)fetchEstimatedLocationAtDate:(id)arg1 options:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000055658d
- (void)fetchEstimatedLocationAtDate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000055621e
- (void)zipperedStoredLocationsBetweenStartTime:(double)arg1 endTime:(double)arg2 apartFromEachOther:(double)arg3 lyingWithinTimeIntervals:(id)arg4 custeredWithVisits:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000554b9d
- (void)getStoredLocationsBetweenStartTime:(double)arg1 endTime:(double)arg2 apartFromEachOther:(double)arg3 lyingWithinTimeIntervals:(id)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x00100000005547fb
- (void)fetchStoredVisitsWithOptions:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000554790
- (void)fetchStoredVisitsWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000554750
- (void)fetchFormattedPostalAddressesFromMeCardWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000055471f
- (void)fetchPlaceInferencesWithOptions:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005546df
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;	// IMP=0x0010000000554546
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;	// IMP=0x0010000000553edb
- (void)checkDiminishedMode;	// IMP=0x0010000000553e68
- (void)onWakeRoutinedTimer;	// IMP=0x0010000000553ac5
- (void)stopWakeRoutinedTimer;	// IMP=0x00100000005539cd
- (void)startWakeRoutinedTimer;	// IMP=0x00100000005538c2
- (void)sendLocationsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000055353c
- (void)sendLocations;	// IMP=0x00100000005534a4
- (void)stopUpdatingLocation;	// IMP=0x00100000005533ba
- (MISSING_TYPE *)startUpdatingLocation;	// IMP=0x00100000005532bc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000552c6f
- (void)checkAuthorization;	// IMP=0x0010000000552adb
- (void)flush;	// IMP=0x00100000005529d3
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000055272c
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000552528
- (void)addLocation:(id)arg1;	// IMP=0x0010000000551f93
- (void)dealloc;	// IMP=0x0010000000551f1e
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000551ead
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000551e42
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000551dc7
- (void)fetchRecentLocationsOfInterestWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000551d44
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000551cc9
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000551c44
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000551bc9
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000551b4e
- (void)fetchRoutineModeFromLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000551ad3
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000551a93
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000551a53
- (void)stopLeechingLowConfidenceVisitsForClient:(byref id)arg1;	// IMP=0x0010000000551918
- (void)startLeechingLowConfidenceVisitsForClient:(byref id)arg1;	// IMP=0x00100000005513d6
- (void)stopLeechingVisitsForClient:(byref id)arg1;	// IMP=0x001000000055129c
- (void)startLeechingVisitsForClient:(byref id)arg1;	// IMP=0x0010000000550e54
- (void)stopMonitoringVisitsForClient:(byref id)arg1;	// IMP=0x0010000000550cbb
- (void)startMonitoringVisitsForClient:(byref id)arg1;	// IMP=0x0010000000550797
- (void)endService;	// IMP=0x0010000000550531
- (void)beginService;	// IMP=0x001000000054fc52
- (id)init;	// IMP=0x001000000054fc15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

