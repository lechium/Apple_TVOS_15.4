//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString;

@interface PLQuestion
{
}

+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2;	// IMP=0x000000000026eff3
+ (id)entityName;	// IMP=0x000000000026efe6
- (void)delete;	// IMP=0x000000000026f0b0

// Remaining properties
@property(retain, nonatomic) NSDictionary *additionalInfo; // @dynamic additionalInfo;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) unsigned short displayType; // @dynamic displayType;
@property(retain, nonatomic) NSString *entityIdentifier; // @dynamic entityIdentifier;
@property(nonatomic) unsigned short entityType; // @dynamic entityType;
@property(nonatomic) double score; // @dynamic score;
@property(nonatomic) unsigned short state; // @dynamic state;
@property(nonatomic) unsigned short type; // @dynamic type;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

