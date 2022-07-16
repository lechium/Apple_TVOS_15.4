//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding>
{
    _Bool _unrestricted;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _purpose;	// 24 = 0x18
    NSSet *_addresses;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f5533
- (void).cxx_destruct;	// IMP=0x00000000000f5502
@property(readonly, nonatomic, getter=isUnrestricted) _Bool unrestricted; // @synthesize unrestricted=_unrestricted;
@property(readonly, nonatomic) NSSet *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f541a
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f5166

@end

