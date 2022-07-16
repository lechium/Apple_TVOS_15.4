//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRINamespaceManagementProtocol-Protocol.h>

@class _PASXPCClientHelper;

@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol>
{
    _PASXPCClientHelper *_helper;	// 8 = 0x8
    _PASXPCClientHelper *_internalHelper;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005bde
- (id)activeRolloutInformation:(id *)arg1;	// IMP=0x000000000000584d
- (unsigned long long)statusOfDownloadForFactors:(id)arg1 withNamespace:(id)arg2 factorsState:(id)arg3 notificationKey:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000005261
- (_Bool)promoteFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000004dda
- (_Bool)rejectFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000004953
- (_Bool)setProvisionalFactorPackId:(id)arg1 forNamespaceName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000044f8
- (id)loadNamespaceMetadataForNamespaceName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000040cb
- (_Bool)setPurgeabilityLevelsForFactors:(id)arg1 forNamespaceName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000003cd9
- (_Bool)deregisterNamespaceWithNamespaceName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003911
- (_Bool)removeLevelsForFactors:(id)arg1 withNamespace:(id)arg2 factorsState:(id)arg3 removeImmediately:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000000331e
- (_Bool)immediateDownloadForNamespaceNames:(id)arg1 allowExpensiveNetworking:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000002bb5
- (void)downloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 queue:(id)arg3 factorsState:(id)arg4 options:(id)arg5 progress:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000001f8e
- (_Bool)startNamespaceDownloadWithName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000001ba5
- (_Bool)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id *)arg6;	// IMP=0x00000000000016f6
- (id)init;	// IMP=0x00000000000014a4

@end

