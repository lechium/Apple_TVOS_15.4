//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, MLMediaLibraryService, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject
{
    MLMediaLibraryService *_xpcService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    unsigned long long _statementThreshold;	// 24 = 0x18
    NSMutableArray *_statementQueue;	// 32 = 0x20
    NSString *_databasePath;	// 40 = 0x28
    ML3DatabaseConnection *_connection;	// 48 = 0x30
    NSUUID *_existingTransactionIdentifier;	// 56 = 0x38
    unsigned long long _priorityLevel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000199e16
@property(nonatomic) unsigned long long priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(retain, nonatomic) NSUUID *existingTransactionIdentifier; // @synthesize existingTransactionIdentifier=_existingTransactionIdentifier;
@property(readonly, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) NSMutableArray *statementQueue; // @synthesize statementQueue=_statementQueue;
@property(nonatomic) unsigned long long statementThreshold; // @synthesize statementThreshold=_statementThreshold;
- (_Bool)_onQueueFlushAndWait:(_Bool)arg1;	// IMP=0x0000000000199a85
- (_Bool)flushAndWait:(_Bool)arg1;	// IMP=0x00000000001999f4
- (_Bool)enqueueStatement:(id)arg1;	// IMP=0x0000000000199853
- (void)dealloc;	// IMP=0x0000000000199810
- (id)init;	// IMP=0x00000000001997ce
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000199694

@end

