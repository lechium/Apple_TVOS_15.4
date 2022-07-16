//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSNetService, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface SDStreamManager : NSObject
{
    NSString *_serviceType;	// 8 = 0x8
    NSNetService *_service;	// 16 = 0x10
    NSMutableDictionary *_managers;	// 24 = 0x18
    NSMutableArray *_companionServices;	// 32 = 0x20
    NSMutableArray *_incomingStreams;	// 40 = 0x28
    NSMutableDictionary *_continuationStreams;	// 48 = 0x30
    long long _connectedStreams;	// 56 = 0x38
    NSTimer *_publishTimer;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x0020000000032996
- (void).cxx_destruct;	// IMP=0x0020000000034b25
@property(retain) NSTimer *publishTimer; // @synthesize publishTimer=_publishTimer;
@property long long connectedStreams; // @synthesize connectedStreams=_connectedStreams;
@property(retain) NSMutableDictionary *continuationStreams; // @synthesize continuationStreams=_continuationStreams;
@property(retain) NSMutableArray *incomingStreams; // @synthesize incomingStreams=_incomingStreams;
@property(retain) NSMutableArray *companionServices; // @synthesize companionServices=_companionServices;
@property(retain) NSMutableDictionary *managers; // @synthesize managers=_managers;
@property(retain) NSNetService *service; // @synthesize service=_service;
@property(retain) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (MISSING_TYPE *)companionStreamClosedStreams: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000034964
- (void)continuationStream:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000034677
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x001000000003451a
- (void)netServiceDidStop:(id)arg1;	// IMP=0x00100000000344be
- (void)netService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x001000000003434b
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x00100000000342a6
- (void)unregisterManager:(id)arg1;	// IMP=0x0010000000034256
- (void)registerManager:(id)arg1;	// IMP=0x00100000000341e9
- (void)closeStreamsForIdentifier:(id)arg1;	// IMP=0x0010000000034161
- (void)removeService:(id)arg1;	// IMP=0x001000000003400a
- (void)addService:(id)arg1;	// IMP=0x0010000000033e5a
- (void)unpublish;	// IMP=0x0010000000033d68
- (void)publish;	// IMP=0x0010000000033b37
- (void)publishTimerFired:(id)arg1;	// IMP=0x0010000000033a62
- (void)restartPublishTimer;	// IMP=0x00100000000339a4
- (void)unregisterConnectedStreams;	// IMP=0x00100000000338b2
- (void)getContinuationStreamsForMessage:(id)arg1 bundleID:(id)arg2 usingID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000331bd
- (void)registerConnectedStreams;	// IMP=0x0010000000033127
- (_Bool)servicesContainIdentifier:(id)arg1;	// IMP=0x0010000000032f69
- (void)activityContinuationPayloadSent:(id)arg1;	// IMP=0x0010000000032d6a
- (void)debugInfoRequested:(id)arg1;	// IMP=0x0010000000032c1b
- (void)removeObservers;	// IMP=0x0010000000032bc8
- (void)addObservers;	// IMP=0x0010000000032b3f
- (void)dealloc;	// IMP=0x0010000000032b01
- (id)initWithServiceType:(id)arg1;	// IMP=0x0010000000032a05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

