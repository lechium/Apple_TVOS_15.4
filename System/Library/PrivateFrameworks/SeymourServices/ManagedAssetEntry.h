//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface ManagedAssetEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000003da7c0

// Remaining properties
@property(nonatomic) int loadStatus; // @dynamic loadStatus;
@property(nonatomic, copy) NSString *localURL; // @dynamic localURL;
@property(nonatomic, copy) NSString *remoteURL; // @dynamic remoteURL;
@property(nonatomic) long long size; // @dynamic size;

@end
