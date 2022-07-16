//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVAdminService-Protocol.h>
#import <CoreKnowledge/CKVAdminServiceProvider-Protocol.h>

@class CKVXPCServiceBridge, NSString;

@interface CKVAdminXPCServiceWrapper : NSObject <CKVAdminServiceProvider, CKVAdminService>
{
    CKVXPCServiceBridge *_xpcServiceBridge;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000df022
- (oneway void)captureVocabularySnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000def9b
- (oneway void)enumerateItemsWithBatchSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000def1d
- (oneway void)triggerMigration:(CDUnknownBlockType)arg1;	// IMP=0x00000000000deeaa
- (oneway void)finishEventSimulation:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dee37
- (oneway void)handleSimulatedEvent:(unsigned short)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dedbe
- (oneway void)startEventSimulation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ded45
- (id)adminService;	// IMP=0x00000000000ded3c
- (id)init;	// IMP=0x00000000000deca3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

