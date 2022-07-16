//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TransientSubscriptionHistory : NSManagedObject
{
}

+ (id)channelIdentifierKeyPath;	// IMP=0x0000000000008e14
+ (id)lastSubscriptionDateKeyPath;	// IMP=0x0000000000008e07
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x0000000000008ebb
+ (id)predicateForLastSubscriptionDate:(id)arg1;	// IMP=0x0000000000008e21
+ (id)sortDescriptorForLastSubscriptionDateAscending:(_Bool)arg1;	// IMP=0x0000000000008f55
+ (id)fetchRequest;	// IMP=0x000000000003ee5d

// Remaining properties
@property(copy, nonatomic) NSString *channelIdentifier; // @dynamic channelIdentifier;
@property(copy, nonatomic) NSDate *lastSubscriptionDate; // @dynamic lastSubscriptionDate;

@end

