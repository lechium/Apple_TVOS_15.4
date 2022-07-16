//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSAccountApplicationProvider : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localizedDisplayName;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b653
+ (id)new;	// IMP=0x000000000001b32a
- (void).cxx_destruct;	// IMP=0x000000000001b815
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
- (id)description;	// IMP=0x000000000001b794
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b73a
- (unsigned long long)hash;	// IMP=0x000000000001b701
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b6b1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b65b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b5d3
- (id)initWithLocalizedDisplayName:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000001b38d
- (id)init;	// IMP=0x000000000001b2bb

@end
