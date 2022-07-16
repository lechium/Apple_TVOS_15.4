//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSURL;

@interface HMDCloudPairedMetadataDiagnostics : HMFObject
{
    NSURL *_privacyPolicyURL;	// 8 = 0x8
    NSURL *_uploadDestination;	// 16 = 0x10
    unsigned long long _consentVersion;	// 24 = 0x18
    unsigned long long _uploadType;	// 32 = 0x20
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000007881c6
- (void).cxx_destruct;	// IMP=0x0000000000788184
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) unsigned long long uploadType; // @synthesize uploadType=_uploadType;
@property(readonly, nonatomic) unsigned long long consentVersion; // @synthesize consentVersion=_consentVersion;
@property(readonly, nonatomic) NSURL *uploadDestination; // @synthesize uploadDestination=_uploadDestination;
@property(readonly, nonatomic) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;	// IMP=0x0000000000787d73
- (id)initWithAccessoryIdentifier:(id)arg1 privacyPolicyURL:(id)arg2 uploadDestination:(id)arg3 consentVersion:(unsigned long long)arg4 uploadType:(unsigned long long)arg5;	// IMP=0x0000000000787c79
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;	// IMP=0x000000000078784e

@end

