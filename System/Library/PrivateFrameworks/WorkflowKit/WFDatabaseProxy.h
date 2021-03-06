//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection, WFDatabase;

@interface WFDatabaseProxy : NSObject
{
    WFDatabase *_database;	// 8 = 0x8
    NSXPCConnection *_databaseProxyHostConnection;	// 16 = 0x10
}

+ (void)setDefaultDatabase:(id)arg1;	// IMP=0x00000000001d575e
+ (id)defaultDatabase;	// IMP=0x00000000001d574d
- (void).cxx_destruct;	// IMP=0x00000000001d4ee0
@property(readonly, nonatomic) NSXPCConnection *databaseProxyHostConnection; // @synthesize databaseProxyHostConnection=_databaseProxyHostConnection;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(unsigned long long)arg4 count:(unsigned long long)arg5 reference:(id)arg6 error:(id *)arg7;	// IMP=0x00000000001d4bdb
- (id)approvalResultForContentAttributionSet:(id)arg1 contentDestination:(id)arg2 actionUUID:(id)arg3 actionIdentifier:(id)arg4 actionIndex:(unsigned long long)arg5 reference:(id)arg6 allowedOnceStates:(id)arg7 error:(id *)arg8;	// IMP=0x00000000001d48a5
- (void)updateAppDescriptor:(id)arg1 atKey:(id)arg2 actionUUID:(id)arg3 actionIndex:(id)arg4 actionIdentifier:(id)arg5 workflowID:(id)arg6 error:(id *)arg7;	// IMP=0x00000000001d467a
- (void)setTrustedToRunScripts:(_Bool)arg1 forReference:(id)arg2 onDomain:(id)arg3;	// IMP=0x00000000001d4582
- (_Bool)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;	// IMP=0x00000000001d43d6
- (id)createWorkflowWithWorkflowRecord:(id)arg1 nameCollisionBehavior:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001d4088
- (id)configuredTriggersForWorkflowID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3e20
- (id)folderForWorkflowReference:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3bd9
- (id)collectionWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3992
- (id)sortedVisibleFoldersWithError:(id *)arg1;	// IMP=0x00000000001d3723
- (id)sortedWorkflowsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d348a
- (id)sortedVisibleWorkflowsInCollection:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d31f1
- (id)sortedVisibleWorkflowsByNameWithError:(id *)arg1;	// IMP=0x00000000001d2f82
- (id)workflowRecordForWorkflowReference:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d2d1d
- (id)uniqueVisibleReferenceForWorkflowName:(id)arg1;	// IMP=0x00000000001d2b88
- (id)referenceForWorkflowID:(id)arg1;	// IMP=0x00000000001d29f3
- (id)hostProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d2970
- (id)initWithDatabase:(id)arg1 databaseProxyHost:(id)arg2;	// IMP=0x00000000001d2896
- (id)initWithDatabaseProxyHost:(id)arg1;	// IMP=0x00000000001d2815
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000001d2801

@end

