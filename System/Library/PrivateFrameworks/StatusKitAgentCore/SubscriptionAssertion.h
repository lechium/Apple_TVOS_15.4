//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SubscriptionAssertion : NSManagedObject
{
}

+ (id)statusTypeIdentifierKeyPath;	// IMP=0x00000000000304b3
+ (id)channelIdentifierKeyPath;	// IMP=0x00000000000304a6
+ (id)applicationIdentifierKeyPath;	// IMP=0x0000000000030499
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x00000000000305f4
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x000000000003055a
+ (id)predicateForApplicationIdentifier:(id)arg1;	// IMP=0x00000000000304c0
+ (id)fetchRequest;	// IMP=0x000000000003ee3d

// Remaining properties
@property(copy, nonatomic) NSString *applicationIdentifier; // @dynamic applicationIdentifier;
@property(copy, nonatomic) NSString *channelIdentifier; // @dynamic channelIdentifier;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end

