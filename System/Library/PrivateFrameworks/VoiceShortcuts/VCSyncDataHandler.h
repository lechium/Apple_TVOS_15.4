//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSyncDataHandling-Protocol.h>

@class NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface VCSyncDataHandler : NSObject <VCSyncDataHandling>
{
    NSHashTable *_servicesTable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (Class)changeClass;	// IMP=0x00000000000155a6
+ (int)messageType;	// IMP=0x0000000000015579
- (void).cxx_destruct;	// IMP=0x000000000001541d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *servicesTable; // @synthesize servicesTable=_servicesTable;
- (void)deregisterSyncService:(id)arg1;	// IMP=0x0000000000015357
- (void)registerSyncService:(id)arg1;	// IMP=0x0000000000015233
- (_Bool)deleteSyncedData:(id *)arg1;	// IMP=0x0000000000015206
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000151c0
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001518a
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000015138
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000015102
- (void)requestFullResync;	// IMP=0x0000000000014fd5
- (void)requestSync;	// IMP=0x0000000000014ea8
@property(readonly, copy, nonatomic) NSArray *services;
- (id)init;	// IMP=0x0000000000014c94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
