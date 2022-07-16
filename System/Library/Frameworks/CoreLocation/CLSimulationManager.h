//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol CLSimulationXPCServerInterface;

@interface CLSimulationManager : NSObject
{
    double _locationDistance;	// 8 = 0x8
    double _locationInterval;	// 16 = 0x10
    double _locationSpeed;	// 24 = 0x18
    unsigned char _locationRepeatBehavior;	// 32 = 0x20
    unsigned char _locationDeliveryBehavior;	// 33 = 0x21
    NSXPCConnection *_connection;	// 40 = 0x28
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned char locationRepeatBehavior; // @synthesize locationRepeatBehavior=_locationRepeatBehavior;
@property(nonatomic) double locationSpeed; // @synthesize locationSpeed=_locationSpeed;
@property(nonatomic) double locationInterval; // @synthesize locationInterval=_locationInterval;
@property(nonatomic) double locationDistance; // @synthesize locationDistance=_locationDistance;
@property(nonatomic) unsigned char locationDeliveryBehavior; // @synthesize locationDeliveryBehavior=_locationDeliveryBehavior;
@property(readonly) id <CLSimulationXPCServerInterface> daemonProxy;
- (void)flush;	// IMP=0x0000000000053008
- (void)setSimulatedWifiPower:(_Bool)arg1;	// IMP=0x0000000000052f5f
- (void)stopWifiSimulation;	// IMP=0x0000000000052eb6
- (void)startWifiSimulation;	// IMP=0x0000000000052e0d
- (void)setWifiScanResults:(id)arg1;	// IMP=0x0000000000052d64
- (void)setSimulatedCellRegistrationStatus:(_Bool)arg1;	// IMP=0x0000000000052cbb
- (void)stopCellSimulation;	// IMP=0x0000000000052c12
- (void)startCellSimulation;	// IMP=0x0000000000052b69
- (void)setSimulatedCell:(id)arg1;	// IMP=0x0000000000052ac0
- (void)clearSimulatedCells;	// IMP=0x0000000000052a17
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;	// IMP=0x00000000000529c3
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;	// IMP=0x000000000005296f
- (void)getFencesForBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005292f
- (void)simulateSignificantLocationChange:(id)arg1;	// IMP=0x00000000000528fe
- (void)simulateVisit:(id)arg1;	// IMP=0x00000000000528cd
- (void)stopLocationSimulation;	// IMP=0x00000000000528a2
- (void)startLocationSimulation;	// IMP=0x0000000000052877
- (void)appendSimulatedLocation:(id)arg1;	// IMP=0x0000000000052723
- (void)clearSimulatedLocations;	// IMP=0x00000000000526f8
- (void)loadScenarioFromURL:(id)arg1;	// IMP=0x0000000000052506
- (void)selectScenario:(id)arg1;	// IMP=0x000000000005248f
- (id)localizedNameForScenario:(id)arg1;	// IMP=0x0000000000052486
- (id)availableScenarios;	// IMP=0x00000000000522c5
- (id)scenariosPath;	// IMP=0x0000000000052239
- (id)init;	// IMP=0x00000000000521e6

@end

