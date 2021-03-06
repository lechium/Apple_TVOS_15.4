//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DNDApplicationIdentifier, NSString;

@interface DNDModeConfigurationAppForegroundTrigger
{
    DNDApplicationIdentifier *_applicationIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000019ab3
- (void).cxx_destruct;	// IMP=0x0000000000019c02
@property(readonly, copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019b56
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019abb
- (id)description;	// IMP=0x0000000000019a0f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000198a9
- (unsigned long long)hash;	// IMP=0x0000000000019853
- (_Bool)hasSecureData;	// IMP=0x000000000001984b
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)initWithApplicationIdentifier:(id)arg1 enabledSetting:(unsigned long long)arg2;	// IMP=0x00000000000197aa
- (id)initWithBundleIdentifier:(id)arg1 enabledSetting:(unsigned long long)arg2;	// IMP=0x0000000000019724

@end

