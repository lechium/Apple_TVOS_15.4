//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _DKSimulatorSyncUtilities : NSObject
{
}

+ (void)_triggerInsertAndTombstoneNotificationsInKnowledgeStorage:(id)arg1 forNonLocalNewEventsFromBeginDate:(id)arg2 toEndDate:(id)arg3;	// IMP=0x000000000013cceb
+ (void)registerSimulatedSyncNotificationsWithKnowledgeStorage:(id)arg1;	// IMP=0x000000000013c83d
+ (void)removeSourceDeviceIDFromLocalObjects:(id)arg1;	// IMP=0x000000000013c5dd
+ (void)addLocalDeviceIDSourceOnObjects:(id)arg1;	// IMP=0x000000000013c36e
+ (id)predicateForEventsWithLocalSourceDeviceID;	// IMP=0x000000000013c302
+ (id)streamNamesToSync;	// IMP=0x000000000013c1dd
+ (id)deviceID;	// IMP=0x000000000013c11c

@end

