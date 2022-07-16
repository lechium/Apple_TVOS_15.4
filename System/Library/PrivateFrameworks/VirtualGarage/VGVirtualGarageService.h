//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VirtualGarage/VGVirtualGarageActions-Protocol.h>
#import <VirtualGarage/VGVirtualGarageObserver-Protocol.h>

@class GEOObserverHashTable, NSHashTable, NSString, NSXPCConnection, geo_isolater;
@protocol OS_dispatch_queue;

@interface VGVirtualGarageService : NSObject <VGVirtualGarageObserver, VGVirtualGarageActions>
{
    NSHashTable *_clients;	// 8 = 0x8
    geo_isolater *_clientsIsolater;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSString *_activeVehicleIdentifier;	// 48 = 0x30
    NSXPCConnection *_connection;	// 56 = 0x38
}

+ (id)sharedService;	// IMP=0x0000000000029a50
+ (_Bool)canUseVirtualGarageXPCService;	// IMP=0x0000000000028a34
- (void).cxx_destruct;	// IMP=0x000000000002b856
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy) NSString *activeVehicleIdentifier; // @synthesize activeVehicleIdentifier=_activeVehicleIdentifier;
- (void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;	// IMP=0x000000000002b358
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x000000000002b227
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002afcc
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002adbe
- (void)virtualGarageSetAssumesFullCharge:(_Bool)arg1;	// IMP=0x000000000002ad5c
- (void)virtualGarageEndContinuousUpdates;	// IMP=0x000000000002abf2
- (void)virtualGarageStartContinuousUpdatesIfNeeded;	// IMP=0x000000000002aa88
- (void)virtualGarageSaveVehicle:(id)arg1;	// IMP=0x000000000002a8d4
- (void)virtualGarageOnboardVehicle:(id)arg1;	// IMP=0x000000000002a720
- (void)virtualGarageSelectVehicle:(id)arg1;	// IMP=0x000000000002a56c
- (void)virtualGarageGetGarageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a35e
- (void)virtualGarageRemoveVehicle:(id)arg1;	// IMP=0x000000000002a1aa
- (void)virtualGarageAddVehicle:(id)arg1;	// IMP=0x0000000000029ff6
- (id)messageTargetWithErrorReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029ce7
- (void)_clearActiveVehicleIdentifierIfNeeded:(id)arg1;	// IMP=0x0000000000029c31
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000029b6b
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000029aa5
- (void)_closeConnection;	// IMP=0x000000000002988d
- (void)_openConnection;	// IMP=0x00000000000292a3
- (void)closeForClient:(id)arg1;	// IMP=0x0000000000028e76
- (void)openForClient:(id)arg1;	// IMP=0x0000000000028a6d
- (id)init;	// IMP=0x00000000000287c5

@end
