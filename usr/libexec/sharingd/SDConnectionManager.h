//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, SDServiceManager;
@protocol SDConnectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface SDConnectionManager : NSObject
{
    id <SDConnectionManagerDelegate> _delegate;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSXPCConnection *_xpcConnection;	// 32 = 0x20
    NSMutableArray *_companionStreams;	// 40 = 0x28
    SDServiceManager *_serviceManager;	// 48 = 0x30
    NSMutableDictionary *_deviceStreamMap;	// 56 = 0x38
    NSMutableArray *_unlockSessions;	// 64 = 0x40
    NSMutableArray *_streamIdentifiers;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00200000000b15ed
- (void).cxx_destruct;	// IMP=0x00200000000b283c
@property(retain) NSMutableArray *streamIdentifiers; // @synthesize streamIdentifiers=_streamIdentifiers;
@property(retain) NSMutableArray *unlockSessions; // @synthesize unlockSessions=_unlockSessions;
@property(retain) NSMutableDictionary *deviceStreamMap; // @synthesize deviceStreamMap=_deviceStreamMap;
@property(retain) SDServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain) NSMutableArray *companionStreams; // @synthesize companionStreams=_companionStreams;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property __weak id <SDConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id);	// IMP=0x00100000000b26fd
- (void)unlockSessionDidFinish:(id)arg1;	// IMP=0x00100000000b2642
- (void)companionStreamClosedStreams:(id)arg1;	// IMP=0x00100000000b262c
- (void)appleAccountSignedOut;	// IMP=0x00100000000b25b4
- (void)appleAccountSignedIn;	// IMP=0x00100000000b253c
- (void)createUnlockManagerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b24b5
- (void)createStreamsForMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b2206
- (void)createCompanionServiceManagerWithIdentifier:(id)arg1 clientProxy:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b1ec6
- (void)cleanUpConnections;	// IMP=0x00100000000b1ba2
- (void)start;	// IMP=0x00100000000b178f
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000b1642

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
