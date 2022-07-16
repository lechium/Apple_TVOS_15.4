//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isMe;	// 8 = 0x8
    NSString *_addressIdentifier;	// 16 = 0x10
    double _wifiConfidence;	// 24 = 0x18
    long long _wifiFingerprintLabelType;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022efc
+ (id)fingerprintLabelTypeToString:(long long)arg1;	// IMP=0x0000000000022511
- (void).cxx_destruct;	// IMP=0x00000000000231aa
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long wifiFingerprintLabelType; // @synthesize wifiFingerprintLabelType=_wifiFingerprintLabelType;
@property(nonatomic) double wifiConfidence; // @synthesize wifiConfidence=_wifiConfidence;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *addressIdentifier; // @synthesize addressIdentifier=_addressIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000230df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023027
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022f04
- (_Bool)isEqualToMapItemExtendedAttributes:(id)arg1;	// IMP=0x0000000000022d1e
- (unsigned long long)hash;	// IMP=0x0000000000022c18
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022bb0
- (id)description;	// IMP=0x0000000000022af1
- (id)initWithAddressIdentifier:(id)arg1 isMe:(_Bool)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4;	// IMP=0x0000000000022a58
- (id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(_Bool)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5;	// IMP=0x000000000002277e
- (id)initWithExtendedAttributesMO:(id)arg1;	// IMP=0x000000000002261a
- (id)init;	// IMP=0x00000000000225eb

@end
