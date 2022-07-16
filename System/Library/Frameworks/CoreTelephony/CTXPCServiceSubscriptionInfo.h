//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_subscriptions;	// 8 = 0x8
    NSArray *_subscriptionsInUse;	// 16 = 0x10
    NSArray *_subscriptionsValid;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c0382
- (void).cxx_destruct;	// IMP=0x00000000000c03c7
@property(retain, nonatomic) NSArray *subscriptionsValid; // @synthesize subscriptionsValid=_subscriptionsValid;
@property(retain, nonatomic) NSArray *subscriptionsInUse; // @synthesize subscriptionsInUse=_subscriptionsInUse;
@property(retain, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c024b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c0228
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0194
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c00c4
- (id)redactedDescription;	// IMP=0x00000000000bfb1d
- (id)description;	// IMP=0x00000000000bfa76

@end

