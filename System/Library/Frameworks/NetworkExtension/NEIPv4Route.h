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

@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSString *_destinationAddress;	// 8 = 0x8
    NSString *_destinationSubnetMask;	// 16 = 0x10
    NSString *_gatewayAddress;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000131ba6
+ (id)defaultRoute;	// IMP=0x000000000013196d
+ (void)initGlobals;	// IMP=0x000000000013190a
- (void).cxx_destruct;	// IMP=0x0000000000132335
@property(copy) NSString *gatewayAddress; // @synthesize gatewayAddress=_gatewayAddress;
@property(readonly) NSString *destinationSubnetMask; // @synthesize destinationSubnetMask=_destinationSubnetMask;
@property(readonly) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001321b0
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001320c5
- (id)copyLegacyDictionary;	// IMP=0x0000000000131f55
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x0000000000131d5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000131c91
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000131bae
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000131a96
- (_Bool)isDefaultRoute;	// IMP=0x0000000000131992
- (id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2;	// IMP=0x0000000000131871

@end

