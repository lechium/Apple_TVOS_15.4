//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _SWCServiceDetails;

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLink
{
    struct LSBinding _binding;	// 8 = 0x8
    _SWCServiceDetails *_serviceDetails;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000045a8e
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;	// IMP=0x0000000000045918
+ (_Bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004557d
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;	// IMP=0x00000000000452d4
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000447f4
+ (_Bool)_areAppLinksEnabledForServiceDetails:(id)arg1 cachedSettings:(id *)arg2;	// IMP=0x00000000000445bc
+ (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 withApplicationIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004427a
+ (id)_SWCSettingsWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044149
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg1;	// IMP=0x0000000000043fff
+ (void)initialize;	// IMP=0x0000000000043fb8
- (id).cxx_construct;	// IMP=0x0000000000045cb5
- (void).cxx_destruct;	// IMP=0x0000000000045c6d
@property(retain, nonatomic) _SWCServiceDetails *serviceDetails; // @synthesize serviceDetails=_serviceDetails;
@property(readonly) struct LSBinding binding; // @synthesize binding=_binding;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045b19
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045a96
- (_Bool)removeSettingsReturningError:(id *)arg1;	// IMP=0x00000000000457a2
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045785
- (id)browserSettings;	// IMP=0x00000000000456f9
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000004525a
- (_Bool)isEnabled;	// IMP=0x00000000000451fb
- (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000444b5
- (id)_SWCSettingsReturningError:(id *)arg1;	// IMP=0x00000000000441c3
- (id)_SWCSpecifierForSettings;	// IMP=0x0000000000044097

@end

