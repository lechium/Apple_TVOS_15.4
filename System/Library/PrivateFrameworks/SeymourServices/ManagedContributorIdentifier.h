//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface ManagedContributorIdentifier : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000003e2e90

// Remaining properties
@property(nonatomic, retain) NSSet *catalogProgramContributors; // @dynamic catalogProgramContributors;
@property(nonatomic, retain) NSSet *catalogWorkoutContributors; // @dynamic catalogWorkoutContributors;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;

@end

