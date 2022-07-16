//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface SiriContextOverride : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_currentSpokenLanguageCode;	// 8 = 0x8
    NSNumber *_unlockedSinceBoot;	// 16 = 0x10
    NSNumber *_deviceIsBlocked;	// 24 = 0x18
    NSNumber *_deviceIsPasscodeLocked;	// 32 = 0x20
    NSNumber *_pocketStateShouldPreventVoiceTrigger;	// 40 = 0x28
    NSNumber *_pad;	// 48 = 0x30
    NSNumber *_smartCoverClosed;	// 56 = 0x38
    NSNumber *_accessibilityShortcutEnabled;	// 64 = 0x40
    NSNumber *_carDNDActive;	// 72 = 0x48
    NSNumber *_connectedToCarPlay;	// 80 = 0x50
    NSNumber *_connectedToTrustedCarPlay;	// 88 = 0x58
    NSNumber *_siriIsEnabled;	// 96 = 0x60
    NSNumber *_siriIsRestricted;	// 104 = 0x68
    NSNumber *_siriIsSupported;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000076e1
- (void).cxx_destruct;	// IMP=0x000000000000827a
@property(retain, nonatomic) NSNumber *siriIsSupported; // @synthesize siriIsSupported=_siriIsSupported;
@property(retain, nonatomic) NSNumber *siriIsRestricted; // @synthesize siriIsRestricted=_siriIsRestricted;
@property(retain, nonatomic) NSNumber *siriIsEnabled; // @synthesize siriIsEnabled=_siriIsEnabled;
@property(retain, nonatomic) NSNumber *connectedToTrustedCarPlay; // @synthesize connectedToTrustedCarPlay=_connectedToTrustedCarPlay;
@property(retain, nonatomic) NSNumber *connectedToCarPlay; // @synthesize connectedToCarPlay=_connectedToCarPlay;
@property(retain, nonatomic) NSNumber *carDNDActive; // @synthesize carDNDActive=_carDNDActive;
@property(retain, nonatomic) NSNumber *accessibilityShortcutEnabled; // @synthesize accessibilityShortcutEnabled=_accessibilityShortcutEnabled;
@property(retain, nonatomic) NSNumber *smartCoverClosed; // @synthesize smartCoverClosed=_smartCoverClosed;
@property(retain, nonatomic) NSNumber *pad; // @synthesize pad=_pad;
@property(retain, nonatomic) NSNumber *pocketStateShouldPreventVoiceTrigger; // @synthesize pocketStateShouldPreventVoiceTrigger=_pocketStateShouldPreventVoiceTrigger;
@property(retain, nonatomic) NSNumber *deviceIsPasscodeLocked; // @synthesize deviceIsPasscodeLocked=_deviceIsPasscodeLocked;
@property(retain, nonatomic) NSNumber *deviceIsBlocked; // @synthesize deviceIsBlocked=_deviceIsBlocked;
@property(retain, nonatomic) NSNumber *unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
@property(retain, nonatomic) NSString *currentSpokenLanguageCode; // @synthesize currentSpokenLanguageCode=_currentSpokenLanguageCode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007e3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007b1c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000076e9
- (_Bool)siriIsSupportedForSystemState:(id)arg1;	// IMP=0x0000000000007639
- (_Bool)siriIsRestrictedForSystemState:(id)arg1;	// IMP=0x0000000000007591
- (_Bool)siriIsEnabledForSystemState:(id)arg1;	// IMP=0x00000000000074e9
- (_Bool)isConnectedToTrustedCarPlayForSystemState:(id)arg1;	// IMP=0x000000000000743d
- (_Bool)isConnectedToCarPlayForSystemState:(id)arg1;	// IMP=0x0000000000007391
- (_Bool)carDNDActiveForSystemState:(id)arg1;	// IMP=0x00000000000072e9
- (_Bool)accessibilityShortcutEnabledForSystemState:(id)arg1;	// IMP=0x0000000000007241
- (_Bool)smartCoverClosedForSystemState:(id)arg1;	// IMP=0x0000000000007199
- (_Bool)isPadForSystemState:(id)arg1;	// IMP=0x00000000000070ed
- (_Bool)pocketStateShouldPreventVoiceTriggerForSystemState:(id)arg1;	// IMP=0x000000000000704a
- (_Bool)deviceIsPasscodeLockedForSystemState:(id)arg1;	// IMP=0x0000000000006fa2
- (_Bool)deviceIsBlockedForSystemState:(id)arg1;	// IMP=0x0000000000006efa
- (_Bool)hasUnlockedSinceBootForSystemState:(id)arg1;	// IMP=0x0000000000006e4e
- (id)currentSpokenLanguageCodeForSystemState:(id)arg1;	// IMP=0x0000000000006dcb
- (void)overrideSiriIsSupported:(_Bool)arg1;	// IMP=0x0000000000006d78
- (void)overrideSiriIsRestricted:(_Bool)arg1;	// IMP=0x0000000000006d25
- (void)overrideSiriIsEnabled:(_Bool)arg1;	// IMP=0x0000000000006cd2
- (void)overrideConnectedToCarPlay:(_Bool)arg1;	// IMP=0x0000000000006c7f
- (void)overrideConnectedToTrustedCarPlay:(_Bool)arg1;	// IMP=0x0000000000006c2c
- (void)overrideCarDNDActive:(_Bool)arg1;	// IMP=0x0000000000006bd9
- (void)overrideAccessibilityShortcutEnabled:(_Bool)arg1;	// IMP=0x0000000000006b86
- (void)overrideSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000006b33
- (void)overrideIsPad:(_Bool)arg1;	// IMP=0x0000000000006ae0
- (void)overridePocketStateShouldPreventVoiceTrigger:(_Bool)arg1;	// IMP=0x0000000000006a8d
- (void)overrideDeviceIsPasscodeLocked:(_Bool)arg1;	// IMP=0x0000000000006a3a
- (void)overrideDeviceIsBlocked:(_Bool)arg1;	// IMP=0x00000000000069e7
- (void)overrideHasUnlockedSinceBoot:(_Bool)arg1;	// IMP=0x0000000000006994
- (void)overrideCurrentSpokenLanguageCode:(id)arg1;	// IMP=0x0000000000006982

@end

