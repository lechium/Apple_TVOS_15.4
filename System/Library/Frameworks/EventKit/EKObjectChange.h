//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKObjectID;

@interface EKObjectChange : NSObject
{
    int _changeType;	// 8 = 0x8
    EKObjectID *_changedObjectID;	// 16 = 0x10
    long long _changeID;	// 24 = 0x18
    long long _sequenceNumber;	// 32 = 0x20
}

+ (id)objectChangeWithProperties:(id)arg1;	// IMP=0x000000000004f366
+ (long long)objectType;	// IMP=0x000000000004f351
+ (int)entityType;	// IMP=0x000000000004f2f3
+ (void)callClientResultsHandler:(CDUnknownBlockType)arg1 changesTruncated:(_Bool)arg2 latestToken:(long long)arg3 changes:(id)arg4;	// IMP=0x000000000004f1ae
+ (CDUnknownBlockType)processFetchResults:(CDUnknownBlockType)arg1;	// IMP=0x000000000004eeca
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inCalendar:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004edb0
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inSource:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ec96
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inStore:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ebc1
+ (void)fetchObjectChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004eba7
+ (void)fetchObjectChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004eb8d
+ (void)fetchObjectChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004eb73
+ (id)CADObjectChangeIDsFromEKObjectChanges:(id)arg1;	// IMP=0x000000000004e942
+ (CDUnknownBlockType)_filterObjectChangesNotConformingToOwnerIDProvidingProtocol:(CDUnknownBlockType)arg1;	// IMP=0x00000000000172ff
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inCalendar:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017254
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inSource:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000171a9
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inStore:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000170fe
- (void).cxx_destruct;	// IMP=0x000000000004f7a5
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) long long changeID; // @synthesize changeID=_changeID;
@property(readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) EKObjectID *changedObjectID; // @synthesize changedObjectID=_changedObjectID;
- (id)serializedPropertiesForConsumingChange;	// IMP=0x000000000004f5f8
- (id)description;	// IMP=0x000000000004f24f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004f1ec
- (unsigned long long)hash;	// IMP=0x000000000004f1c4
- (id)initWithChangeProperties:(id)arg1;	// IMP=0x000000000004e808

@end

