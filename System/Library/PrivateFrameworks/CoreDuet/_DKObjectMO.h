//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, _DKEventMO, _DKSourceMO;

@interface _DKObjectMO : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000000005ea4c

// Remaining properties
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) _DKEventMO *event; // @dynamic event;
@property(copy, nonatomic) NSDate *localCreationDate; // @dynamic localCreationDate;
@property(retain, nonatomic) NSSet *relationObject; // @dynamic relationObject;
@property(retain, nonatomic) NSSet *relationSubject; // @dynamic relationSubject;
@property(retain, nonatomic) _DKSourceMO *source; // @dynamic source;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;
@property(copy, nonatomic) NSNumber *uuidHash; // @dynamic uuidHash;

@end

