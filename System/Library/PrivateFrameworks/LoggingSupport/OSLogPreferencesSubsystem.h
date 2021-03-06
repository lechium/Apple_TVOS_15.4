//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface OSLogPreferencesSubsystem : NSObject
{
    NSString *_systemPrefsFile;	// 8 = 0x8
    NSDictionary *_systemPrefs;	// 16 = 0x10
    NSString *_internalPrefsFile;	// 24 = 0x18
    NSDictionary *_internalPrefs;	// 32 = 0x20
    NSString *_prefsFile;	// 40 = 0x28
    NSMutableDictionary *_prefs;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003881d
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_resetCategory:(id)arg1;	// IMP=0x00000000000387ac
- (void)_setSignpostPersisted:(_Bool)arg1 forCategory:(id)arg2;	// IMP=0x000000000003870c
- (void)_setSignpostEnabled:(_Bool)arg1 forCategory:(id)arg2;	// IMP=0x000000000003866c
- (void)_setPersistedLevel:(long long)arg1 forCategory:(id)arg2;	// IMP=0x00000000000385e4
- (void)_setEnabledLevel:(long long)arg1 forCategory:(id)arg2;	// IMP=0x000000000003855c
- (id)_levelPrefsForCategory:(id)arg1;	// IMP=0x00000000000384c4
- (id)_prefsForCategory:(id)arg1;	// IMP=0x0000000000038403
- (_Bool)_signpostPersistedForCategory:(id)arg1;	// IMP=0x000000000003837e
- (_Bool)_signpostEnabledForCategory:(id)arg1;	// IMP=0x00000000000382a9
- (long long)_persistedLevelForCategory:(id)arg1;	// IMP=0x000000000003822e
- (long long)_enabledLevelForCategory:(id)arg1;	// IMP=0x00000000000381b3
- (long long)_defaultPersistedLevelForCategory:(id)arg1;	// IMP=0x00000000000380a9
- (long long)_defaultEnabledLevelForCategory:(id)arg1;	// IMP=0x0000000000037f9f
- (void)resetAll;	// IMP=0x0000000000037f58
- (void)reset;	// IMP=0x0000000000037f1a
@property(nonatomic) long long persistedLevel;
@property(nonatomic) long long enabledLevel;
- (long long)defaultPersistedLevel;	// IMP=0x0000000000037e5c
- (long long)defaultEnabledLevel;	// IMP=0x0000000000037e48
@property(readonly, nonatomic) long long effectivePersistedLevel;
@property(readonly, nonatomic) long long effectiveEnabledLevel;
@property(readonly, nonatomic) _Bool isLocked;
@property(readonly, nonatomic) NSArray *categories;
- (id)initWithName:(id)arg1;	// IMP=0x000000000003787c

@end

