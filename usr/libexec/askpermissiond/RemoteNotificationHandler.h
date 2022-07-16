//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface RemoteNotificationHandler : NSObject
{
    APSConnection *_apsConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_apsQueue;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x00200000000101a5
- (void).cxx_destruct;	// IMP=0x0020000000011e07
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apsQueue; // @synthesize apsQueue=_apsQueue;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (id)_storeDSIDs;	// IMP=0x0010000000011b65
- (id)_cloudDSID;	// IMP=0x0010000000011ae4
- (void)_handleStoreNotificationPayload:(id)arg1;	// IMP=0x00100000000111f8
- (void)_handleCloudNotificationPayload:(id)arg1;	// IMP=0x0010000000010b8e
- (void)_startConnection;	// IMP=0x001000000001086e
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000001042d
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000001031f
- (void)handleLegacyStoreNotificationPayload:(id)arg1;	// IMP=0x0010000000010251
- (void)start;	// IMP=0x00100000000101fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

