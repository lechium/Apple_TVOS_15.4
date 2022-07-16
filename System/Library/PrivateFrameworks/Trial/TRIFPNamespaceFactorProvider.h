//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRINamespaceFactorProviding-Protocol.h>

@class NSSet, NSString, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIFactorPackId;

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding>
{
    NSString *_parentId;	// 8 = 0x8
    int _deploymentId;	// 16 = 0x10
    NSString *_namespaceName;	// 24 = 0x18
    NSSet *_namespaceCompatibilityVersions;	// 32 = 0x20
    NSString<TRIFactorPackId> *_factorPackId;	// 40 = 0x28
    id <TRIFactorLevelCaching> _factorLevels;	// 48 = 0x30
    TRIReferenceManagedDirReaderLock *_dirLock;	// 56 = 0x38
    _Bool _promotable;	// 64 = 0x40
}

+ (id)_factorLevelsWithFactorPackData:(id)arg1 loadedFromProtoPath:(id)arg2 referencePath:(id)arg3 outFactorPackId:(id *)arg4 outNamespaceName:(id *)arg5 outNCVs:(id *)arg6;	// IMP=0x000000000001088d
- (void).cxx_destruct;	// IMP=0x0000000000011473
@property(readonly, nonatomic) _Bool promotable; // @synthesize promotable=_promotable;
- (void)dispose;	// IMP=0x0000000000011454
- (id)factorLevels;	// IMP=0x00000000000113af
- (id)levelForFactor:(id)arg1;	// IMP=0x0000000000011314
- (id)rolloutId;	// IMP=0x0000000000011306
- (int)deploymentId;	// IMP=0x00000000000112fd
- (id)experimentId;	// IMP=0x00000000000112ef
- (id)treatmentId;	// IMP=0x00000000000112e1
- (unsigned int)namespaceCompatibilityVersion;	// IMP=0x0000000000011196
- (id)namespaceName;	// IMP=0x0000000000011188
- (unsigned int)namespaceId;	// IMP=0x0000000000011133
- (id)initWithPath:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 promotable:(_Bool)arg4;	// IMP=0x00000000000104b4
- (id)initWithParentId:(id)arg1 deploymentId:(int)arg2 promotable:(_Bool)arg3;	// IMP=0x0000000000010433
- (id)init;	// IMP=0x000000000001042d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

