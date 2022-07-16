//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLRecordChangeDiffTracker, CPLScopedIdentifier, NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>
{
    CPLRecordChangeDiffTracker *_attachedDiffTracker;	// 8 = 0x8
    NSString *_uploadIdentifier;	// 16 = 0x10
    _Bool _shouldNotTrustCloudCache;	// 24 = 0x18
    _Bool _shouldFilterDefaultValuesForNewProperties;	// 25 = 0x19
    _Bool _isSparseFullChange;	// 26 = 0x1a
    _Bool _shouldOnlyUploadNewResources;	// 27 = 0x1b
    _Bool _didCacheRealResourceSizeInStorage;	// 28 = 0x1c
    unsigned long long _cachedRealResourceSizeInStorage;	// 32 = 0x20
    _Bool _inTrash;	// 40 = 0x28
    _Bool _inExpunged;	// 41 = 0x29
    _Bool _serverRecordIsCorrupted;	// 42 = 0x2a
    CPLScopedIdentifier *_scopedIdentifier;	// 48 = 0x30
    NSDate *_recordModificationDate;	// 56 = 0x38
    unsigned long long _changeType;	// 64 = 0x40
    NSDate *_dateDeleted;	// 72 = 0x48
    CPLScopedIdentifier *_resourceCopyFromScopedIdentifier;	// 80 = 0x50
    NSString *_realIdentifier;	// 88 = 0x58
    NSData *_recordChangeData;	// 96 = 0x60
}

+ (id)newDeleteChangeWithIdentifier:(id)arg1;	// IMP=0x00000000000de187
+ (id)newRecordWithIdentifier:(id)arg1;	// IMP=0x00000000000de131
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2;	// IMP=0x00000000000de0f2
+ (_Bool)shouldReallyQuarantineRecord;	// IMP=0x00000000000de0ea
+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned long long)arg1;	// IMP=0x00000000000de0e2
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned long long)arg1;	// IMP=0x00000000000de0da
+ (id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(_Bool)arg2 onlyUploadNewResources:(_Bool)arg3;	// IMP=0x00000000000ddf90
+ (id)descriptionForChangeType:(unsigned long long)arg1;	// IMP=0x00000000000ddf79
+ (long long)maxInlineDataSize;	// IMP=0x00000000000ddf6e
+ (id)newChangeWithType:(unsigned long long)arg1;	// IMP=0x00000000000ddf2f
+ (id)newDeleteChangeWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000ddefa
+ (id)newChangeWithScopedIdentifier:(id)arg1 changeType:(unsigned long long)arg2;	// IMP=0x00000000000ddebb
+ (id)newRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000dde65
+ (id)newRecordInScopeWithIdentifier:(id)arg1;	// IMP=0x00000000000ddd9f
+ (id)newRecord;	// IMP=0x00000000000ddd86
+ (id)descriptionForDirection:(unsigned long long)arg1;	// IMP=0x00000000000ddd1b
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005ac7e
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;	// IMP=0x000000000005abb5
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;	// IMP=0x000000000005ab3a
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;	// IMP=0x000000000005aac8
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;	// IMP=0x000000000005aa56
+ (Class)relatedRecordClass;	// IMP=0x0000000000146c22
- (void).cxx_destruct;	// IMP=0x00000000000e31d0
@property(nonatomic) _Bool serverRecordIsCorrupted; // @synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted;
@property(copy, nonatomic) NSData *recordChangeData; // @synthesize recordChangeData=_recordChangeData;
@property(copy, nonatomic) NSString *realIdentifier; // @synthesize realIdentifier=_realIdentifier;
@property(nonatomic) _Bool inExpunged; // @synthesize inExpunged=_inExpunged;
@property(nonatomic) _Bool inTrash; // @synthesize inTrash=_inTrash;
@property(copy, nonatomic) CPLScopedIdentifier *resourceCopyFromScopedIdentifier; // @synthesize resourceCopyFromScopedIdentifier=_resourceCopyFromScopedIdentifier;
@property(copy, nonatomic) NSDate *dateDeleted; // @synthesize dateDeleted=_dateDeleted;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) NSDate *recordModificationDate; // @synthesize recordModificationDate=_recordModificationDate;
@property(copy, nonatomic) CPLScopedIdentifier *scopedIdentifier; // @synthesize scopedIdentifier=_scopedIdentifier;
- (_Bool)isScopeChange;	// IMP=0x00000000000e30f7
- (_Bool)isAssetChange;	// IMP=0x00000000000e30ef
- (_Bool)isMasterChange;	// IMP=0x00000000000e30e7
- (void)applyChangeType:(unsigned long long)arg1 fromChange:(id)arg2;	// IMP=0x00000000000e3014
- (void)applyChange:(id)arg1;	// IMP=0x00000000000e2dff
- (void)clearChangeType:(unsigned long long)arg1;	// IMP=0x00000000000e2db3
- (id)copyChangeType:(unsigned long long)arg1;	// IMP=0x00000000000e2c52
- (void)enumerateChangeTypesForChangeType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e2b99
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;	// IMP=0x00000000000e2ad7
- (void)copyDerivatives:(unsigned long long *)arg1 count:(int)arg2 avoidResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;	// IMP=0x00000000000e2856
- (unsigned long long)baseVideoComplemenentResourceType;	// IMP=0x00000000000e279d
- (unsigned long long)baseDerivativeResourceType;	// IMP=0x00000000000e26e4
- (id)resourcePerType;	// IMP=0x00000000000e262b
- (_Bool)allResourcesAreAvailable;	// IMP=0x00000000000e245d
- (_Bool)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;	// IMP=0x00000000000e2444
- (unsigned long long)fullChangeTypeForFullRecord;	// IMP=0x00000000000e2426
- (_Bool)_canLowerQuota;	// IMP=0x00000000000e241e
- (void)_setShouldNotTrustCloudCache:(_Bool)arg1;	// IMP=0x00000000000e2415
- (_Bool)_shouldNotTrustCloudCache;	// IMP=0x00000000000e240c
- (void)_setUploadIdentifier:(id)arg1;	// IMP=0x00000000000e23df
- (id)_uploadIdentifier;	// IMP=0x00000000000e23d1
- (unsigned long long)estimatedRecordSize;	// IMP=0x00000000000e2367
- (_Bool)validateChangeWithError:(id *)arg1;	// IMP=0x00000000000e230a
- (_Bool)validateFullRecord;	// IMP=0x00000000000e2302
- (id)onlyAddedResources;	// IMP=0x00000000000e2072
- (_Bool)changeIsOnlyAddingResourcesToRecord:(id)arg1 addedResources:(id *)arg2;	// IMP=0x00000000000e1c44
- (_Bool)allowsToOnlyUploadNewResources;	// IMP=0x00000000000e1c3c
- (_Bool)shouldOnlyUploadNewResources;	// IMP=0x00000000000e1c33
- (void)markToOnlyUploadNewResources;	// IMP=0x00000000000e1ae0
- (void)markAsSparseFullChange;	// IMP=0x00000000000e198d
- (_Bool)isSparseFullChange;	// IMP=0x00000000000e1984
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;	// IMP=0x00000000000e196a
- (_Bool)shouldFilterDefaultValuesForNewProperties;	// IMP=0x00000000000e1961
- (void)setShouldFilterDefaultValuesForNewProperties:(_Bool)arg1;	// IMP=0x00000000000e1953
- (_Bool)shouldApplyPropertiesWithSelector:(SEL)arg1;	// IMP=0x00000000000e18f0
- (id)resourcesDescription;	// IMP=0x00000000000e14f5
- (id)cplFullDescription;	// IMP=0x00000000000e12c3
- (long long)dequeueOrder;	// IMP=0x00000000000e1274
- (void)awakeFromStorage;	// IMP=0x00000000000e10fa
- (void)prepareForStorage;	// IMP=0x00000000000e0fac
- (void)clearIdentifiers;	// IMP=0x00000000000e0f65
- (id)allRelatedScopedIdentifiers;	// IMP=0x00000000000e0e50
- (id)proposedLocalScopedIdentifier;	// IMP=0x00000000000e0e08
- (id)secondaryScopedIdentifier;	// IMP=0x00000000000e0d6c
- (void)setSecondaryIdentifier:(id)arg1;	// IMP=0x00000000000e0d66
- (id)secondaryIdentifier;	// IMP=0x00000000000e0d5e
- (id)relatedScopedIdentifier;	// IMP=0x00000000000e0cc2
- (void)setRelatedIdentifier:(id)arg1;	// IMP=0x00000000000e0cbc
- (id)relatedIdentifier;	// IMP=0x00000000000e0cb4
- (id)propertiesForChangeType:(unsigned long long)arg1;	// IMP=0x00000000000e0b78
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2;	// IMP=0x00000000000e06e9
- (_Bool)resourceChangeWillOnlyChangeDerivatives:(id)arg1;	// IMP=0x00000000000e0103
- (id)attachedDiffTracker;	// IMP=0x00000000000e00f5
- (void)attachDiffTracker:(id)arg1;	// IMP=0x00000000000e00e4
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3;	// IMP=0x00000000000e00cf
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 diffTracker:(id)arg4;	// IMP=0x00000000000e001e
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 changeType:(unsigned long long)arg4 diffTracker:(id)arg5;	// IMP=0x00000000000dfa1d
- (_Bool)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 diffTracker:(id)arg5;	// IMP=0x00000000000df5d8
- (unsigned long long)hash;	// IMP=0x00000000000df5c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000df4da
- (id)redactedDescription;	// IMP=0x00000000000df3b2
- (id)description;	// IMP=0x00000000000df1d1
- (id)propertiesDescription;	// IMP=0x00000000000df1c4
- (unsigned long long)originalResourceSize;	// IMP=0x00000000000defd4
- (unsigned long long)realUploadResourceSize;	// IMP=0x00000000000dedcc
- (unsigned long long)realResourceSize;	// IMP=0x00000000000debf8
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1;	// IMP=0x00000000000deb78
- (unsigned long long)totalResourceSize;	// IMP=0x00000000000de9e4
- (id)resourceForType:(unsigned long long)arg1;	// IMP=0x00000000000de885
- (void)setResources:(id)arg1;	// IMP=0x00000000000de7d2
- (id)resources;	// IMP=0x00000000000de728
- (_Bool)supportsDirectDeletion;	// IMP=0x00000000000de6e0
- (_Bool)supportsDeletion;	// IMP=0x00000000000de6d8
- (_Bool)supportsResourceType:(unsigned long long)arg1;	// IMP=0x00000000000de6d0
- (_Bool)supportsResources;	// IMP=0x00000000000de6c8
- (_Bool)isDelete;	// IMP=0x00000000000de6b7
- (_Bool)isFullRecord;	// IMP=0x00000000000de6a9
- (_Bool)hasChangeType:(unsigned long long)arg1;	// IMP=0x00000000000de655
- (_Bool)isInScopeWithIdentifier:(id)arg1;	// IMP=0x00000000000de4bf
- (id)realScopedIdentifier;	// IMP=0x00000000000de423
- (void)setScopeIndex:(long long)arg1;	// IMP=0x00000000000de25b
- (id)_unscopedIdentifier;	// IMP=0x00000000000de234
@property(copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059ebd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059d86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059d74
- (id)storedClassNameForCPLArchiver:(id)arg1;	// IMP=0x0000000000059d06
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x0000000000064f6d
- (id)proposedCloudScopedIdentifierWithError:(id *)arg1;	// IMP=0x0000000000068883
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006841d
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000068064
- (id)scopedIdentifiersForMapping;	// IMP=0x0000000000067f1f
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingStorageView:(id)arg4;	// IMP=0x00000000000acda0
- (id)asRecordView;	// IMP=0x00000000000ea416
- (_Bool)validateRecordForTracker:(id)arg1;	// IMP=0x00000000000f4582
- (Class)relatedRecordClass;	// IMP=0x0000000000146c08

@end
