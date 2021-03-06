//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTEncryptionStatusInfo : NSObject <NSCopying, NSSecureCoding>
{
    long long _status;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059eb6
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059e46
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059ded
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059d87
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000059cff
- (id)initWithStatus:(long long)arg1;	// IMP=0x0000000000059cc2

@end

