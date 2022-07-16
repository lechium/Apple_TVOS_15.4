//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLSettingsManagerInternal.h>

@interface CLDaemonSettingsManager : CLSettingsManagerInternal
{
    int _fDaemonPreferencesChangedNotificationToken;	// 8 = 0x8
    int _fMCProfileListChangedForDaemonSettingsNotificationToken;	// 12 = 0xc
}

- (void)flush;	// IMP=0x0020000000175c8f
- (id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;	// IMP=0x0010000000175bca
- (void)refresh;	// IMP=0x0010000000175b00
- (void)endService;	// IMP=0x0010000000175a99
- (void)beginService;	// IMP=0x0010000000175908
- (id)init;	// IMP=0x00100000001758cb

@end

