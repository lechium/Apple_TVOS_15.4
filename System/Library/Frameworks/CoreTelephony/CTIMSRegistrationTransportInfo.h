//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isRegistered;	// 8 = 0x8
    int _contextType;	// 12 = 0xc
    int _transportType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007ad56
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int contextType; // @synthesize contextType=_contextType;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007acae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ac10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ab71
- (id)description;	// IMP=0x000000000007aa9a

@end

