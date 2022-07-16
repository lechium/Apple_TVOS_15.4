//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface DMFConfigurationOrganization : NSObject <NSSecureCoding>
{
    _Bool _active;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSArray *_registeredConfigurationSources;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000122c9
- (void).cxx_destruct;	// IMP=0x0000000000012711
@property(copy, nonatomic) NSArray *registeredConfigurationSources; // @synthesize registeredConfigurationSources=_registeredConfigurationSources;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012538
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000122d1
- (id)debugDescription;	// IMP=0x000000000001220b
- (id)description;	// IMP=0x0000000000012158
- (id)init;	// IMP=0x0000000000012129

@end

