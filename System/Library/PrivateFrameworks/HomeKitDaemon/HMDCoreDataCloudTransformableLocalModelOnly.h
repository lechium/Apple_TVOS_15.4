//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCoreDataCloudTransformable-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDCoreDataCloudTransformableLocalModelOnly : NSObject <HMFLogging, HMDCoreDataCloudTransformable>
{
}

+ (void)addToUpdates:(id)arg1 objectID:(id)arg2 properties:(id)arg3;	// IMP=0x0000000000b353f3
+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0000000000b353eb
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0000000000b3531c
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0000000000b35314
+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000b35253
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000b35192
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0000000000b350c3
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0000000000b34ff4
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0000000000b34f2a
+ (id)logCategory;	// IMP=0x0000000000b34f11
+ (id)new;	// IMP=0x0000000000b34e69
- (id)createLocalModelWithContext:(id)arg1;	// IMP=0x0000000000b357d6
- (id)fetchLocalModelWithContext:(id)arg1;	// IMP=0x0000000000b35720
- (id)init;	// IMP=0x0000000000b35678

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

