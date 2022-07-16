//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEDNSSettings, NSArray;

@interface NEDNSSettingsBundle : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _enabled;	// 8 = 0x8
    NSArray *_onDemandRules;	// 16 = 0x10
    NEDNSSettings *_settings;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007eb9e
- (void).cxx_destruct;	// IMP=0x000000000007f33e
@property(copy) NEDNSSettings *settings; // @synthesize settings=_settings;
@property(copy) NSArray *onDemandRules; // @synthesize onDemandRules=_onDemandRules;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)description;	// IMP=0x000000000007f2ce
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000007f1d6
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x000000000007ef49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ee2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ed58
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007ebf4
- (id)init;	// IMP=0x000000000007eba6

@end
