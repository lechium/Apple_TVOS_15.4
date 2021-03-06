//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WeatherUserDefaults : NSObject <WeatherPreferencesPersistence>
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008d18
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008cae
- (_Bool)synchronize;	// IMP=0x0000000000008c6a
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000008bf2
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000008b7b
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000008af8
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000008a75
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000089f2
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000008980
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000088fa
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000008877
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x00000000000087f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

