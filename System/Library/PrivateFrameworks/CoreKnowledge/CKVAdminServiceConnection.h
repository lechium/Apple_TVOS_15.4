//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/CKVAdminService-Protocol.h>

@class CKVIndexManager, CKVTaskController, CKVTaskHandler;

@interface CKVAdminServiceConnection <CKVAdminService>
{
    CKVTaskHandler *_taskHandler;	// 8 = 0x8
    CKVIndexManager *_indexManager;	// 16 = 0x10
    CKVTaskController *_daemonTaskController;	// 24 = 0x18
    _Bool _eventSimulationActive;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c73b9
- (_Bool)_isEventSimulationInactive:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c72ef
- (_Bool)_isCustomerInstall:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7222
- (oneway void)captureVocabularySnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7146
- (oneway void)enumerateItemsWithBatchSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c7086
- (oneway void)triggerMigration:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6fd5
- (oneway void)handleSimulatedEvent:(unsigned short)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6f1d
- (oneway void)finishEventSimulation:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6e6c
- (oneway void)startEventSimulation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6db5
- (id)initWithServiceQueue:(id)arg1 taskHandler:(id)arg2 indexManager:(id)arg3 daemonTaskController:(id)arg4;	// IMP=0x00000000000c6c97

@end
