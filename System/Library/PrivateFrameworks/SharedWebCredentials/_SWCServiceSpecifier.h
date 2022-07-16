//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSCopying-Protocol.h>
#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSNumber, NSString, _SWCApplicationIdentifier, _SWCDomain;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying>
{
    _SWCApplicationIdentifier *_applicationIdentifier;	// 8 = 0x8
    _SWCDomain *_domain;	// 16 = 0x10
    NSString *_serviceType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d1c7
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000cae4
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cabd
+ (id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000d6aa
- (void).cxx_destruct;	// IMP=0x000000000000d3f1
@property(readonly) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly) _SWCDomain *SWCDomain; // @synthesize SWCDomain=_domain;
@property(readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier; // @synthesize SWCApplicationIdentifier=_applicationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d3aa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d25b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d1cf
- (id)redactedDescription;	// IMP=0x000000000000d0f6
- (id)debugDescription;	// IMP=0x000000000000d057
- (id)description;	// IMP=0x000000000000d00f
- (unsigned long long)hash;	// IMP=0x000000000000cfb5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000cea6
@property(readonly, getter=isFullySpecified) _Bool fullySpecified;
- (id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;	// IMP=0x000000000000cd93
@property(readonly) NSString *domain; // @dynamic domain;
@property(readonly) NSString *applicationIdentifier; // @dynamic applicationIdentifier;
- (id)init;	// IMP=0x000000000000cd4e
- (id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;	// IMP=0x000000000000cc0c
@property(readonly, getter=isValid) _Bool valid;
- (_Bool)domainEncompassesDomainOfServiceSpecifier:(id)arg1;	// IMP=0x000000000000d57f
- (_Bool)domainEncompassesDomain:(id)arg1;	// IMP=0x000000000000d4a8
@property(readonly) BOOL domainModeOfOperation;
@property(readonly) NSNumber *domainPort;
@property(readonly, getter=isDomainWildcard) _Bool domainWildcard;
@property(readonly) NSString *domainHost;
@property(readonly) NSString *applicationIdentifierPrefix;
@property(readonly) NSString *bundleIdentifier;

@end
