//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASettingSettingsAction-Protocol.h>

@class NSString;

@interface SASettingOpenBatteryUsage <SASettingSettingsAction>
{
}

+ (id)openBatteryUsageWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000123c6
+ (id)openBatteryUsage;	// IMP=0x00000000000123b4
- (_Bool)requiresResponse;	// IMP=0x00000000000123d0
- (id)encodedClassName;	// IMP=0x00000000000123a7
- (id)groupIdentifier;	// IMP=0x0000000000012393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

