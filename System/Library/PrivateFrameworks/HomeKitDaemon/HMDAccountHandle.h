//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMCBacked-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDRemoteAddressable-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CKUserIdentityLookupInfo, CNContact, IDSURI, NSString, NSUUID, Protocol;
@protocol NSCopying;

@interface HMDAccountHandle : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMCBacked, HMDRemoteAddressable, NSCopying, NSSecureCoding>
{
    _Bool _local;	// 8 = 0x8
    _Bool _locallyTracked;	// 9 = 0x9
    NSUUID *_modelIdentifier;	// 16 = 0x10
    NSUUID *_modelParentIdentifier;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    IDSURI *_URI;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0000000000546287
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000054627f
+ (id)accountHandleForDestination:(id)arg1;	// IMP=0x00000000005461fe
- (void).cxx_destruct;	// IMP=0x0000000000545b10
@property(getter=isLocallyTracked) _Bool locallyTracked; // @synthesize locallyTracked=_locallyTracked;
@property(readonly, copy) IDSURI *URI; // @synthesize URI=_URI;
@property(readonly, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSUUID *modelParentIdentifier; // @synthesize modelParentIdentifier=_modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
- (id)logIdentifier;	// IMP=0x0000000000545a3e
- (id)remoteDestinationString;	// IMP=0x00000000005459ee
- (_Bool)isBackingStorageEqual:(id)arg1;	// IMP=0x000000000054590e
- (id)modelBackedObjects;	// IMP=0x00000000005458ae
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000545816
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000005455fb
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000545063
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000544ee0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000544d7a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000544bb0
@property(readonly, copy) CKUserIdentityLookupInfo *cloudKitLookupInfo;
@property(readonly, copy) CNContact *contact;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054499b
@property(readonly) long long type;
- (id)attributeDescriptions;	// IMP=0x000000000054468f
- (id)shortDescription;	// IMP=0x00000000005445cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005444f9
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *value;
@property(readonly) id <NSCopying> backingModelKey;
- (_Bool)updateBackingModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000544324
@property(readonly) Protocol *backingModelType;
- (id)initWithBackingModel:(id)arg1;	// IMP=0x00000000005441c4
- (id)initWithObjectModel:(id)arg1;	// IMP=0x000000000054408e
- (id)initWithURI:(id)arg1 local:(_Bool)arg2;	// IMP=0x0000000000543eef
- (id)initWithURI:(id)arg1;	// IMP=0x0000000000543edb
- (id)init;	// IMP=0x0000000000543e33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

