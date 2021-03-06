//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMFReportingRequirements, NSString, NSXPCListenerEndpoint;

@interface DMFRegisterConfigurationSourceRequest
{
    NSString *_configurationSourceName;	// 8 = 0x8
    NSString *_organizationIdentifier;	// 16 = 0x10
    NSString *_machServiceName;	// 24 = 0x18
    NSXPCListenerEndpoint *_listenerEndpoint;	// 32 = 0x20
    DMFReportingRequirements *_reportingRequirements;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034991
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000034989
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000034981
+ (id)permittedPlatforms;	// IMP=0x0000000000034974
- (void).cxx_destruct;	// IMP=0x0000000000034e60
@property(copy, nonatomic) DMFReportingRequirements *reportingRequirements; // @synthesize reportingRequirements=_reportingRequirements;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(copy, nonatomic) NSString *configurationSourceName; // @synthesize configurationSourceName=_configurationSourceName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034c36
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034999

@end

