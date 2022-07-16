//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, _CDMutablePerfMetric, _DKPerformSyncUpHistoryAdditionsOperation, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryDeletionsOperation
{
    _DKPerformSyncUpHistoryAdditionsOperation *_sibling;	// 8 = 0x8
    id <_DKSyncLocalKnowledgeStorage> _localStorage;	// 16 = 0x10
    id <_DKSyncRemoteKnowledgeStorage> _transport;	// 24 = 0x18
    _DKSyncPeer *_me;	// 32 = 0x20
    _DKSync2Policy *_policy;	// 40 = 0x28
    _DKSyncType *_type;	// 48 = 0x30
    _CDMutablePerfMetric *_perfMetric;	// 56 = 0x38
    struct _CDPerfEvent _perfEvent;	// 64 = 0x40
    NSArray *_streamNames;	// 80 = 0x50
    NSDate *_now;	// 88 = 0x58
    _DKSyncHistory *_history;	// 96 = 0x60
    unsigned long long _batchNumber;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000f11c4
- (void)endOperation;	// IMP=0x00000000000f1118
- (void)main;	// IMP=0x00000000000edc2b
- (_Bool)isAsynchronous;	// IMP=0x00000000000edc23

@end

