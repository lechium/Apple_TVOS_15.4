//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, NSURL, NSUUID;

@interface _CDAttachmentRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSUUID *cloudIdentifier; // @dynamic cloudIdentifier;
@property(retain, nonatomic) NSString *contentText; // @dynamic contentText;
@property(retain, nonatomic) NSURL *contentURL; // @dynamic contentURL;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *interactions; // @dynamic interactions;
@property(retain, nonatomic) NSString *photoLocalIdentifier; // @dynamic photoLocalIdentifier;
@property(nonatomic) long long sizeInBytes; // @dynamic sizeInBytes;
@property(retain, nonatomic) NSString *uti; // @dynamic uti;
@end

