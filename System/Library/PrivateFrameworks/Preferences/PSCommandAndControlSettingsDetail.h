//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsBoolDetail-Protocol.h>

@class NSString;

@interface PSCommandAndControlSettingsDetail : NSObject <PSSettingsBoolDetail>
{
}

+ (_Bool)isEnabled;	// IMP=0x00000000000b3e85
+ (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000b3e79
+ (id)iconImage;	// IMP=0x00000000000b3e18
+ (id)preferencesURL;	// IMP=0x00000000000b3df8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

