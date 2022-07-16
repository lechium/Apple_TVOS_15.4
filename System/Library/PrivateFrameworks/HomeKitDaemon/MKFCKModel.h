//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCoreDataCloudTransformable-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface MKFCKModel <HMDCoreDataCloudTransformable>
{
}

+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000760b9b
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000076096e
+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x000000000076089f
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000007607d0
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0000000000760706
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0000000000760637
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0000000000760568
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x000000000076049e
+ (id)logCategory;	// IMP=0x0000000000760485
+ (id)modelWithModelID:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x000000000076037f
+ (id)predicateWithModelIDs:(id)arg1;	// IMP=0x0000000000760353
+ (id)predicateWithModelID:(id)arg1;	// IMP=0x0000000000760327
- (id)createLocalModelWithContext:(id)arg1;	// IMP=0x000000000075fbe2
- (id)fetchLocalModelWithContext:(id)arg1;	// IMP=0x000000000075f954
- (void)awakeFromInsert;	// IMP=0x000000000075f8cb
- (id)hmd_debugIdentifier;	// IMP=0x000000000075f81c
@property(readonly, copy) NSString *description;
- (id)relationshipForLocalName:(id)arg1 localModel:(id)arg2;	// IMP=0x000000000075f561
- (_Bool)copyPropertiesFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000075f46f
- (_Bool)copyPropertiesIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000075f392
@property(readonly, nonatomic) _Bool shouldSkipValidationDuringImport;
- (_Bool)validateConflictResolutionUUID:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000076114c
- (_Bool)validateWriterVersion:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000760f2d
- (_Bool)validateWriterTimestamp:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000760d83
- (_Bool)validateModelID:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000760c41

// Remaining properties
@property(readonly, copy, nonatomic) NSUUID *conflictResolutionUUID; // @dynamic conflictResolutionUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSUUID *primitiveConflictResolutionUUID; // @dynamic primitiveConflictResolutionUUID;
@property(copy, nonatomic) NSString *primitiveWriterVersion; // @dynamic primitiveWriterVersion;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end
