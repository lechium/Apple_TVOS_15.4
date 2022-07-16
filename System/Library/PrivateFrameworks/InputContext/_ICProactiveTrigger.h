//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InputContext/NSCopying-Protocol.h>
#import <InputContext/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _triggerSourceType;	// 8 = 0x8
    NSSet *_availableApps;	// 16 = 0x10
    NSDictionary *_attributedString;	// 24 = 0x18
    NSString *_contentType;	// 32 = 0x20
}

+ (_Bool)isEquivalentDictionary:(id)arg1 second:(id)arg2;	// IMP=0x00000000000031a3
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002eed
- (void).cxx_destruct;	// IMP=0x0000000000003610
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSDictionary *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSSet *availableApps; // @synthesize availableApps=_availableApps;
@property(readonly, nonatomic) unsigned char triggerSourceType; // @synthesize triggerSourceType=_triggerSourceType;
- (_Bool)isEqualToProactiveTrigger:(id)arg1;	// IMP=0x0000000000003499
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000313b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000030cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003047
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002ef5
- (unsigned long long)hash;	// IMP=0x0000000000002e94
- (id)description;	// IMP=0x0000000000002e67
- (id)initWithContext:(id)arg1 inputContextHistory:(id)arg2 contentType:(id)arg3;	// IMP=0x0000000000002df8
- (id)initWithSource:(unsigned char)arg1 attributes:(id)arg2;	// IMP=0x0000000000002d26

@end
