//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRApplicationActivity, MRDMediaRemoteClient, MRDRemoteControlService, MROrigin, MROutputContextDataSource, MRPlayerPath, NSArray, NSDate, NSDictionary, NSString, _MRAVAirPlaySecuritySettingsProtobuf;

@interface MRDDiagnostic : NSObject
{
    _Bool _lockScreenWidgetActive;	// 8 = 0x8
    _Bool _lockScreenWidgetVisible;	// 9 = 0x9
    _Bool _isAdvertisingProximity;	// 10 = 0xa
    unsigned int _systemDiscoveryMode;	// 12 = 0xc
    unsigned int _hostedRouteDiscoveryMode;	// 16 = 0x10
    NSDate *_dateCreated;	// 24 = 0x18
    NSArray *_activeClients;	// 32 = 0x20
    NSArray *_activeTransactions;	// 40 = 0x28
    MRApplicationActivity *_currentAppActivity;	// 48 = 0x30
    MRDMediaRemoteClient *_localNowPlayingClient;	// 56 = 0x38
    MRDMediaRemoteClient *_systemMediaClient;	// 64 = 0x40
    MRDMediaRemoteClient *_frontmostClient;	// 72 = 0x48
    MRDMediaRemoteClient *_daemonClient;	// 80 = 0x50
    NSArray *_originClients;	// 88 = 0x58
    MROrigin *_activeOrigin;	// 96 = 0x60
    MRPlayerPath *_electedPlayer;	// 104 = 0x68
    NSString *_electedPlayerReason;	// 112 = 0x70
    MRPlayerPath *_lockScreenPlayerPath;	// 120 = 0x78
    NSArray *_originForwarders;	// 128 = 0x80
    NSDictionary *_enqueuedCommands;	// 136 = 0x88
    NSArray *_remoteControlContexts;	// 144 = 0x90
    NSArray *_queuedInitiatePlaybackMessages;	// 152 = 0x98
    NSArray *_connectedExternalDevices;	// 160 = 0xa0
    NSArray *_televisionEndpoints;	// 168 = 0xa8
    NSArray *_discoverySessions;	// 176 = 0xb0
    MRDRemoteControlService *_remoteControlService;	// 184 = 0xb8
    MROutputContextDataSource *_localOutputContextDataSource;	// 192 = 0xc0
    _MRAVAirPlaySecuritySettingsProtobuf *_airplaySecuritySettings;	// 200 = 0xc8
    NSString *_localReceiverPairingIdentity;	// 208 = 0xd0
    NSDictionary *_systemActiveEndpoints;	// 216 = 0xd8
    NSArray *_autoConnectedEndpoints;	// 224 = 0xe0
    NSArray *_autoConnectingEndpoints;	// 232 = 0xe8
    NSArray *_migrationEvents;	// 240 = 0xf0
    NSArray *_nearbyDevices;	// 248 = 0xf8
    NSArray *_mediumDevices;	// 256 = 0x100
    NSArray *_promptingDevices;	// 264 = 0x108
    NSArray *_immediateDevices;	// 272 = 0x110
    NSArray *_migratingDevices;	// 280 = 0x118
    NSString *_advertisingReasonDescription;	// 288 = 0x120
    NSArray *_hostedDiscoverySessions;	// 296 = 0x128
    NSArray *_endpoints;	// 304 = 0x130
    NSDictionary *_hostedExternalDevices;	// 312 = 0x138
    NSString *_discoverySession;	// 320 = 0x140
    NSArray *_recordingEndpointClients;	// 328 = 0x148
    NSArray *_registeredVirtualAudioDevices;	// 336 = 0x150
    NSArray *_transactions;	// 344 = 0x158
    unsigned long long _usedTransactionMemory;	// 352 = 0x160
    unsigned long long _allowedTransactionMemory;	// 360 = 0x168
    double _transactionWaitDuration;	// 368 = 0x170
}

- (void).cxx_destruct;	// IMP=0x00200000000a9a55
@property(nonatomic) double transactionWaitDuration; // @synthesize transactionWaitDuration=_transactionWaitDuration;
@property(nonatomic) unsigned long long allowedTransactionMemory; // @synthesize allowedTransactionMemory=_allowedTransactionMemory;
@property(nonatomic) unsigned long long usedTransactionMemory; // @synthesize usedTransactionMemory=_usedTransactionMemory;
@property(copy, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(copy, nonatomic) NSArray *registeredVirtualAudioDevices; // @synthesize registeredVirtualAudioDevices=_registeredVirtualAudioDevices;
@property(copy, nonatomic) NSArray *recordingEndpointClients; // @synthesize recordingEndpointClients=_recordingEndpointClients;
@property(retain, nonatomic) NSString *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(copy, nonatomic) NSDictionary *hostedExternalDevices; // @synthesize hostedExternalDevices=_hostedExternalDevices;
@property(copy, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(copy, nonatomic) NSArray *hostedDiscoverySessions; // @synthesize hostedDiscoverySessions=_hostedDiscoverySessions;
@property(nonatomic) unsigned int hostedRouteDiscoveryMode; // @synthesize hostedRouteDiscoveryMode=_hostedRouteDiscoveryMode;
@property(copy, nonatomic) NSString *advertisingReasonDescription; // @synthesize advertisingReasonDescription=_advertisingReasonDescription;
@property(nonatomic) _Bool isAdvertisingProximity; // @synthesize isAdvertisingProximity=_isAdvertisingProximity;
@property(copy, nonatomic) NSArray *migratingDevices; // @synthesize migratingDevices=_migratingDevices;
@property(copy, nonatomic) NSArray *immediateDevices; // @synthesize immediateDevices=_immediateDevices;
@property(copy, nonatomic) NSArray *promptingDevices; // @synthesize promptingDevices=_promptingDevices;
@property(copy, nonatomic) NSArray *mediumDevices; // @synthesize mediumDevices=_mediumDevices;
@property(copy, nonatomic) NSArray *nearbyDevices; // @synthesize nearbyDevices=_nearbyDevices;
@property(copy, nonatomic) NSArray *migrationEvents; // @synthesize migrationEvents=_migrationEvents;
@property(copy, nonatomic) NSArray *autoConnectingEndpoints; // @synthesize autoConnectingEndpoints=_autoConnectingEndpoints;
@property(copy, nonatomic) NSArray *autoConnectedEndpoints; // @synthesize autoConnectedEndpoints=_autoConnectedEndpoints;
@property(copy, nonatomic) NSDictionary *systemActiveEndpoints; // @synthesize systemActiveEndpoints=_systemActiveEndpoints;
@property(copy, nonatomic) NSString *localReceiverPairingIdentity; // @synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity;
@property(retain, nonatomic) _MRAVAirPlaySecuritySettingsProtobuf *airplaySecuritySettings; // @synthesize airplaySecuritySettings=_airplaySecuritySettings;
@property(nonatomic) unsigned int systemDiscoveryMode; // @synthesize systemDiscoveryMode=_systemDiscoveryMode;
@property(retain, nonatomic) MROutputContextDataSource *localOutputContextDataSource; // @synthesize localOutputContextDataSource=_localOutputContextDataSource;
@property(retain, nonatomic) MRDRemoteControlService *remoteControlService; // @synthesize remoteControlService=_remoteControlService;
@property(copy, nonatomic) NSArray *discoverySessions; // @synthesize discoverySessions=_discoverySessions;
@property(copy, nonatomic) NSArray *televisionEndpoints; // @synthesize televisionEndpoints=_televisionEndpoints;
@property(copy, nonatomic) NSArray *connectedExternalDevices; // @synthesize connectedExternalDevices=_connectedExternalDevices;
@property(copy, nonatomic) NSArray *queuedInitiatePlaybackMessages; // @synthesize queuedInitiatePlaybackMessages=_queuedInitiatePlaybackMessages;
@property(copy, nonatomic) NSArray *remoteControlContexts; // @synthesize remoteControlContexts=_remoteControlContexts;
@property(copy, nonatomic) NSDictionary *enqueuedCommands; // @synthesize enqueuedCommands=_enqueuedCommands;
@property(retain, nonatomic) NSArray *originForwarders; // @synthesize originForwarders=_originForwarders;
@property(retain, nonatomic) MRPlayerPath *lockScreenPlayerPath; // @synthesize lockScreenPlayerPath=_lockScreenPlayerPath;
@property(nonatomic) _Bool lockScreenWidgetVisible; // @synthesize lockScreenWidgetVisible=_lockScreenWidgetVisible;
@property(nonatomic) _Bool lockScreenWidgetActive; // @synthesize lockScreenWidgetActive=_lockScreenWidgetActive;
@property(retain, nonatomic) NSString *electedPlayerReason; // @synthesize electedPlayerReason=_electedPlayerReason;
@property(retain, nonatomic) MRPlayerPath *electedPlayer; // @synthesize electedPlayer=_electedPlayer;
@property(retain, nonatomic) MROrigin *activeOrigin; // @synthesize activeOrigin=_activeOrigin;
@property(copy, nonatomic) NSArray *originClients; // @synthesize originClients=_originClients;
@property(retain, nonatomic) MRDMediaRemoteClient *daemonClient; // @synthesize daemonClient=_daemonClient;
@property(retain, nonatomic) MRDMediaRemoteClient *frontmostClient; // @synthesize frontmostClient=_frontmostClient;
@property(retain, nonatomic) MRDMediaRemoteClient *systemMediaClient; // @synthesize systemMediaClient=_systemMediaClient;
@property(retain, nonatomic) MRDMediaRemoteClient *localNowPlayingClient; // @synthesize localNowPlayingClient=_localNowPlayingClient;
@property(copy, nonatomic) MRApplicationActivity *currentAppActivity; // @synthesize currentAppActivity=_currentAppActivity;
@property(copy, nonatomic) NSArray *activeTransactions; // @synthesize activeTransactions=_activeTransactions;
@property(copy, nonatomic) NSArray *activeClients; // @synthesize activeClients=_activeClients;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 indentLevel:(unsigned int)arg4 usingDebugDescription:(_Bool)arg5;	// IMP=0x00100000000a9266
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 indentLevel:(unsigned int)arg4;	// IMP=0x00100000000a9244
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3;	// IMP=0x00100000000a921f
- (void)_appendNullableObjectDescription:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 usingDebugDescription:(_Bool)arg4;	// IMP=0x00100000000a915f
- (void)_appendNullableObjectDescription:(id)arg1 toString:(id)arg2 withTitle:(id)arg3;	// IMP=0x00100000000a914a
- (void)_appendSubheader:(id)arg1 toString:(id)arg2;	// IMP=0x00100000000a9126
- (id)createDiagnosticInfo;	// IMP=0x00100000000a8098
- (id)init;	// IMP=0x00100000000a8042

@end
