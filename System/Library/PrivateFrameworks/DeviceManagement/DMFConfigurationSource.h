//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class DMFReportingRequirements, NSString;

@interface DMFConfigurationSource : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSString *_organizationIdentifier;	// 24 = 0x18
    NSString *_machServiceName;	// 32 = 0x20
    DMFReportingRequirements *_reportingRequirements;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000128d9
- (void).cxx_destruct;	// IMP=0x0000000000012d09
@property(retain, nonatomic) DMFReportingRequirements *reportingRequirements; // @synthesize reportingRequirements=_reportingRequirements;
@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012b3e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000128e1
- (id)debugDescription;	// IMP=0x0000000000012826
- (id)description;	// IMP=0x000000000001277e
- (id)init;	// IMP=0x000000000001274f

@end

