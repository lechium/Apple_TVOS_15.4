//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSPersistentHistoryTransaction, NSSet;

@interface NSPersistentHistoryChange : NSObject <NSCopying>
{
}

+ (id)stringForChangeType:(long long)arg1;	// IMP=0x0000000000091331
+ (id)shortStringForChangeType:(long long)arg1;	// IMP=0x00000000000912f8
+ (id)entityDescriptionWithContext:(id)arg1;	// IMP=0x0000000000091054
+ (id)entityDescription;	// IMP=0x0000000000090ffb
+ (id)fetchRequest;	// IMP=0x0000000000090fa2
@property(readonly, copy) NSSet *updatedProperties;
@property(readonly) long long changeID;
@property(readonly) NSPersistentHistoryTransaction *transaction;
@property(readonly) long long changeType;
@property(readonly, copy) NSManagedObjectID *changedObjectID;
@property(readonly, copy) NSDictionary *tombstone;
- (id)description;	// IMP=0x00000000000910f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000910e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000910db

@end

