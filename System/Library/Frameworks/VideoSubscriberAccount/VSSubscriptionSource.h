//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>
{
    long long _kind;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039018
+ (id)subscriptionSourceForAppWithBundleID:(id)arg1;	// IMP=0x0000000000038e12
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)arg1;	// IMP=0x0000000000038ced
+ (id)subscriptionSourceForWebsiteWithURL:(id)arg1;	// IMP=0x0000000000038bf6
+ (id)currentSource;	// IMP=0x00000000000388f8
- (void).cxx_destruct;	// IMP=0x00000000000391cb
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (id)description;	// IMP=0x0000000000039159
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000390ff
- (unsigned long long)hash;	// IMP=0x00000000000390c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039076
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039020
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038f98
- (id)init;	// IMP=0x0000000000038f34

@end
