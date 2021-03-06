//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEVPNProtocol, NSArray;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _onDemandEnabled;	// 9 = 0x9
    _Bool _disconnectOnDemandEnabled;	// 10 = 0xa
    _Bool _onDemandUserOverrideDisabled;	// 11 = 0xb
    NSArray *_onDemandRules;	// 16 = 0x10
    NEVPNProtocol *_protocol;	// 24 = 0x18
    long long _tunnelType;	// 32 = 0x20
    NSArray *_exceptionApps;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ab914
- (void).cxx_destruct;	// IMP=0x00000000001ace9d
@property(copy) NSArray *exceptionApps; // @synthesize exceptionApps=_exceptionApps;
@property long long tunnelType; // @synthesize tunnelType=_tunnelType;
@property(copy) NEVPNProtocol *protocol; // @synthesize protocol=_protocol;
@property(copy) NSArray *onDemandRules; // @synthesize onDemandRules=_onDemandRules;
@property(nonatomic, getter=isOnDemandUserOverrideDisabled) _Bool onDemandUserOverrideDisabled; // @synthesize onDemandUserOverrideDisabled=_onDemandUserOverrideDisabled;
@property(nonatomic, getter=isDisconnectOnDemandEnabled) _Bool disconnectOnDemandEnabled; // @synthesize disconnectOnDemandEnabled=_disconnectOnDemandEnabled;
@property(getter=isOnDemandEnabled) _Bool onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001ac9de
- (id)copyLegacyDictionary;	// IMP=0x00000000001ac553
- (id)description;	// IMP=0x00000000001ac53d
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001ac316
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001abf64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001abd43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001abbb4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ab958
- (id)init;	// IMP=0x00000000001ab91c

@end

