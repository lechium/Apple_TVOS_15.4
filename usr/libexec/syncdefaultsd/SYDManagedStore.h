//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSString, SYDManagedDatabase;

@interface SYDManagedStore : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) SYDManagedDatabase *database; // @dynamic database;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *keyValues; // @dynamic keyValues;
@property(retain, nonatomic) NSData *syncAnchorServerSystemFieldsRecordData; // @dynamic syncAnchorServerSystemFieldsRecordData;
@property(nonatomic) long long totalDataLength; // @dynamic totalDataLength;
@end

