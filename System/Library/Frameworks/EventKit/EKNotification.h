//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKObjectID, NSString, NSURL;

@interface EKNotification
{
}

+ (id)knownRelationshipSingleValueKeys;	// IMP=0x000000000004549e
+ (Class)frozenClass;	// IMP=0x000000000004548d
- (_Bool)save:(id *)arg1;	// IMP=0x0000000000045691
- (id)calendar;	// IMP=0x0000000000045675
@property(copy, nonatomic) NSString *UUID;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSURL *hostURL;
@property(copy, nonatomic) NSString *externalID;
@property(readonly, nonatomic) EKObjectID *objectID;

@end

