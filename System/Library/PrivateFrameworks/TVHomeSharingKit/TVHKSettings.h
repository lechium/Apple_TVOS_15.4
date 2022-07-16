//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVHKPreferences;

@interface TVHKSettings : NSObject
{
    id _preferencesDomainObserver;	// 8 = 0x8
    TVHKPreferences *_preferences;	// 16 = 0x10
}

+ (id)new;	// IMP=0x0000000000034c72
- (void).cxx_destruct;	// IMP=0x000000000003503a
@property(retain, nonatomic) TVHKPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) id preferencesDomainObserver; // @synthesize preferencesDomainObserver=_preferencesDomainObserver;
- (void)_updateSettingWithBlock:(CDUnknownBlockType)arg1 shouldNotify:(_Bool)arg2 forKey:(id)arg3;	// IMP=0x0000000000034f5f
- (void)_refreshFromPreferences;	// IMP=0x0000000000034f59
- (void)_initializeFromPreferences;	// IMP=0x0000000000034f53
- (void)dealloc;	// IMP=0x0000000000034eb8
- (id)initWithPreferencesDomain:(id)arg1;	// IMP=0x0000000000034d10
- (id)init;	// IMP=0x0000000000034ca1

@end

