//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BYPreferencesController : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSMutableDictionary *_preferences;	// 16 = 0x10
}

+ (void)flushEverything;	// IMP=0x000000000000a0f0
+ (void)persistEverything;	// IMP=0x0000000000009ff1
+ (id)genericPreferencesEphemeral;	// IMP=0x00000000000098c3
+ (id)buddyPreferencesInternal;	// IMP=0x00000000000097f9
+ (id)buddyPreferencesEphemeral;	// IMP=0x00000000000097a4
+ (id)buddyPreferencesExcludedFromBackup;	// IMP=0x0000000000009738
+ (id)buddyPreferences;	// IMP=0x00000000000096cc
- (void).cxx_destruct;	// IMP=0x000000000000a1e6
@property(retain, nonatomic) NSMutableDictionary *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)flush;	// IMP=0x000000000000a0b1
- (void)persist;	// IMP=0x0000000000009d97
- (void)reset;	// IMP=0x0000000000009d5a
- (void)removeObjectForKey:(id)arg1 onlyFromMemory:(_Bool)arg2;	// IMP=0x0000000000009ca9
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000009c37
- (void)setObject:(id)arg1 forKey:(id)arg2 persistImmediately:(_Bool)arg3;	// IMP=0x0000000000009b83
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009afd
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000009a9a
- (id)objectForKey:(id)arg1 includeCache:(_Bool)arg2;	// IMP=0x00000000000099a9
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000009992
- (id)initWithDomain:(id)arg1;	// IMP=0x0000000000009940
- (id)init;	// IMP=0x00000000000098d5

@end

