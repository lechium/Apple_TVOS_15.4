//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilitySharedSupport/IDSServiceDelegate-Protocol.h>
#import <AccessibilitySharedSupport/MCNearbyServiceAdvertiserDelegate-Protocol.h>
#import <AccessibilitySharedSupport/MCNearbyServiceBrowserDelegate-Protocol.h>
#import <AccessibilitySharedSupport/MCSessionDelegate-Protocol.h>

@class AXSSInterDeviceSecurityHelper, IDSService, MCNearbyServiceAdvertiser, MCNearbyServiceBrowser, MCPeerID, MCSession, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol AXSSInterDeviceActionReceiver, AXSSInterDeviceConnectionListener, AXSSInterDeviceSearchObserver;

@interface AXSSInterDeviceCommunicator : NSObject <IDSServiceDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate, MCNearbyServiceAdvertiserDelegate>
{
    id <AXSSInterDeviceConnectionListener> _connectionListener;	// 8 = 0x8
    id <AXSSInterDeviceActionReceiver> _actionReceiver;	// 16 = 0x10
    id <AXSSInterDeviceSearchObserver> _searchObserver;	// 24 = 0x18
    IDSService *_service;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    MCPeerID *_localPeerID;	// 48 = 0x30
    MCSession *_session;	// 56 = 0x38
    MCNearbyServiceBrowser *_browser;	// 64 = 0x40
    MCNearbyServiceAdvertiser *_advertiser;	// 72 = 0x48
    NSMutableArray *_availableDevices;	// 80 = 0x50
    NSMutableDictionary *_deviceTypesByPeerID;	// 88 = 0x58
    MCPeerID *_receiver;	// 96 = 0x60
    MCPeerID *_forwarder;	// 104 = 0x68
    unsigned long long _switchEventIndex;	// 112 = 0x70
    NSTimer *_dummyPacketTimer;	// 120 = 0x78
    unsigned long long _numberOfBurstPacketsRemaining;	// 128 = 0x80
    AXSSInterDeviceSecurityHelper *_securityHelper;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000002fb88
@property(retain, nonatomic) AXSSInterDeviceSecurityHelper *securityHelper; // @synthesize securityHelper=_securityHelper;
@property(nonatomic) unsigned long long numberOfBurstPacketsRemaining; // @synthesize numberOfBurstPacketsRemaining=_numberOfBurstPacketsRemaining;
@property(retain, nonatomic) NSTimer *dummyPacketTimer; // @synthesize dummyPacketTimer=_dummyPacketTimer;
@property(nonatomic) unsigned long long switchEventIndex; // @synthesize switchEventIndex=_switchEventIndex;
@property(retain, nonatomic) MCPeerID *forwarder; // @synthesize forwarder=_forwarder;
@property(retain, nonatomic) MCPeerID *receiver; // @synthesize receiver=_receiver;
@property(retain, nonatomic) NSMutableDictionary *deviceTypesByPeerID; // @synthesize deviceTypesByPeerID=_deviceTypesByPeerID;
@property(retain, nonatomic) NSMutableArray *availableDevices; // @synthesize availableDevices=_availableDevices;
@property(retain, nonatomic) MCNearbyServiceAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(retain, nonatomic) MCNearbyServiceBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) MCPeerID *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <AXSSInterDeviceSearchObserver> searchObserver; // @synthesize searchObserver=_searchObserver;
@property(nonatomic) __weak id <AXSSInterDeviceActionReceiver> actionReceiver; // @synthesize actionReceiver=_actionReceiver;
@property(nonatomic) __weak id <AXSSInterDeviceConnectionListener> connectionListener; // @synthesize connectionListener=_connectionListener;
- (void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;	// IMP=0x000000000002f8fd
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002f5d4
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;	// IMP=0x000000000002f503
- (void)browser:(id)arg1 lostPeer:(id)arg2;	// IMP=0x000000000002f213
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;	// IMP=0x000000000002ee0a
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002ec2a
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;	// IMP=0x000000000002e608
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;	// IMP=0x000000000002e5c2
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;	// IMP=0x000000000002e57c
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;	// IMP=0x000000000002e536
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x000000000002dfc0
- (void)_removePeerFromAvailableDevices:(id)arg1;	// IMP=0x000000000002dd6d
- (void)_handlePerformSysdiagnoseMessage;	// IMP=0x000000000002dc9b
- (void)_handleHighlightMessage;	// IMP=0x000000000002dab8
- (void)_handleSelectionMessageWithPayload:(id)arg1;	// IMP=0x000000000002d7e9
- (void)_handleSwitchEventMessageWithPayload:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000000002d4af
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000002d3c3
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000000002d319
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000002cf59
- (void)_sendDummyPacket;	// IMP=0x000000000002cc73
- (void)performSysdiagnoseOnReceiver;	// IMP=0x000000000002c914
- (void)forwardSwitchEvent:(id)arg1;	// IMP=0x000000000002c63c
- (void)_sendDataToReceiver:(id)arg1;	// IMP=0x000000000002c3a2
- (id)_messageForSwitchEvent:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000000002c235
- (void)selectSearchResult:(id)arg1 settings:(id)arg2;	// IMP=0x000000000002ba3b
- (id)_messageForSelection:(_Bool)arg1 settings:(id)arg2;	// IMP=0x000000000002b8ea
- (void)highlightSearchResult:(id)arg1;	// IMP=0x000000000002b652
@property(readonly, nonatomic) NSArray *searchResults;
- (void)stop;	// IMP=0x000000000002b4eb
- (void)_advertise;	// IMP=0x000000000002b14c
- (void)_handleTimeoutAsPotentialReceiver;	// IMP=0x000000000002b030
- (void)_cancelAdvertising;	// IMP=0x000000000002af14
- (void)search;	// IMP=0x000000000002ac52
@property(readonly, nonatomic) _Bool canSearch;
@property(readonly, nonatomic) _Bool isIdle;
@property(readonly, nonatomic) _Bool isSearching;
@property(readonly, nonatomic) _Bool isForwardingSwitchEvents;
@property(readonly, nonatomic) _Bool isReceivingSwitchEvents;
- (_Bool)_setUpSessionIfNecessary;	// IMP=0x000000000002a820
- (void)_broadcastICloudMessage:(id)arg1;	// IMP=0x000000000002a4c9
- (void)_tearDownConnectivity;	// IMP=0x000000000002a44c
- (void)_tearDownBrowser;	// IMP=0x000000000002a386
- (void)_tearDownSession;	// IMP=0x000000000002a2c0
- (void)_tearDownAdvertiser;	// IMP=0x000000000002a1fa
- (id)_stringForState:(long long)arg1;	// IMP=0x0000000000029b25
- (id)_stateDescription;	// IMP=0x0000000000029af4
- (void)dealloc;	// IMP=0x0000000000029a8f
- (id)init;	// IMP=0x0000000000029790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

