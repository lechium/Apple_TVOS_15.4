//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventDataSyncStateContext-Protocol.h>

@class HMFUnfairLock, NSString;

@interface HMDCloudSyncLogEventDataSyncStateManager : HMFObject <HMDLogEventDataSyncStateContext>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _firstDataSyncEventReceived;	// 16 = 0x10
    unsigned long long _dataSyncState;	// 24 = 0x18
}

+ (id)currentContext;	// IMP=0x0000000000508f87
- (void).cxx_destruct;	// IMP=0x0000000000508f74
@property _Bool firstDataSyncEventReceived; // @synthesize firstDataSyncEventReceived=_firstDataSyncEventReceived;
@property(setter=updateWithDataSyncState:) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (id)init;	// IMP=0x0000000000508e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

