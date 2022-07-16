//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isWifiCallingAvailable;	// 8 = 0x8
    _Bool _isVoLTECallingAvailable;	// 9 = 0x9
    _Bool _isCSCallingAvailable;	// 10 = 0xa
    _Bool _isEmergencyCallingOnWifiAllowed;	// 11 = 0xb
    _Bool _isEmergencyCallingOnWifiAvailable;	// 12 = 0xc
    _Bool _isCarrierSupportsEmergencyCallOnWifiNoLimit;	// 13 = 0xd
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007aa26
@property(nonatomic) _Bool isCarrierSupportsEmergencyCallOnWifiNoLimit; // @synthesize isCarrierSupportsEmergencyCallOnWifiNoLimit=_isCarrierSupportsEmergencyCallOnWifiNoLimit;
@property(nonatomic) _Bool isEmergencyCallingOnWifiAvailable; // @synthesize isEmergencyCallingOnWifiAvailable=_isEmergencyCallingOnWifiAvailable;
@property(nonatomic) _Bool isEmergencyCallingOnWifiAllowed; // @synthesize isEmergencyCallingOnWifiAllowed=_isEmergencyCallingOnWifiAllowed;
@property(nonatomic) _Bool isCSCallingAvailable; // @synthesize isCSCallingAvailable=_isCSCallingAvailable;
@property(nonatomic) _Bool isVoLTECallingAvailable; // @synthesize isVoLTECallingAvailable=_isVoLTECallingAvailable;
@property(nonatomic) _Bool isWifiCallingAvailable; // @synthesize isWifiCallingAvailable=_isWifiCallingAvailable;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007a945
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007a849
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007a751
- (id)description;	// IMP=0x000000000007a626

@end

