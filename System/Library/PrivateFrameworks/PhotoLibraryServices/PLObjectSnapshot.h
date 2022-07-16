//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSKnownKeysDictionary, PLManagedObject;

@interface PLObjectSnapshot : NSObject
{
    PLManagedObject *_managedObject;	// 8 = 0x8
    NSKnownKeysDictionary *_snapshotValues;	// 16 = 0x10
    struct __CFDictionary *_indexMaps;	// 24 = 0x18
}

+ (struct __CFDictionary *)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2;	// IMP=0x00000000002a24a8
+ (id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(_Bool)arg3;	// IMP=0x00000000002a1ea6
- (void).cxx_destruct;	// IMP=0x00000000002a1d12
@property(readonly, nonatomic) PLManagedObject *managedObject; // @synthesize managedObject=_managedObject;
- (void)setAssetsSnapshot:(id)arg1;	// IMP=0x00000000002a1c4c
- (id)_allSnapshotValuesDescription;	// IMP=0x00000000002a1b7d
- (id)_snapshotValueForProperty:(id)arg1;	// IMP=0x00000000002a1adc
- (id)description;	// IMP=0x00000000002a19ad
- (id)filteredIndexesForFilter:(id)arg1;	// IMP=0x00000000002a1956
- (id)indexMapStateForDerivedObject:(id)arg1;	// IMP=0x00000000002a192c
- (_Bool)hasSnapshotValueForProperty:(id)arg1;	// IMP=0x00000000002a18f9
- (id)snapshotValueForProperty:(id)arg1;	// IMP=0x00000000002a1886
- (id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(struct __CFDictionary *)arg4 useCommitedValues:(_Bool)arg5;	// IMP=0x00000000002a1184
- (void)dealloc;	// IMP=0x00000000002a1145
- (id)init;	// IMP=0x00000000002a1137

@end
