//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler
{
    VCDaemonXPCEventHandler *_eventHandler;	// 8 = 0x8
}

+ (int)messageType;	// IMP=0x000000000005234e
- (void).cxx_destruct;	// IMP=0x0000000000050fde
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (_Bool)deleteSyncedData:(id *)arg1;	// IMP=0x0000000000050edd
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000506fa
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000506e3
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000505f9
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000050468
- (void)installedApplicationsDidChange:(id)arg1;	// IMP=0x00000000000503c4
- (void)dealloc;	// IMP=0x00000000000502da
- (id)initWithEventHandler:(id)arg1;	// IMP=0x0000000000050114

@end

