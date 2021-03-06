//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (WFAdditions)
+ (double)timeIntervalValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(double)arg3;	// IMP=0x0000000000047d52
+ (id)stringValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0000000000047bb2
+ (long long)integerValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;	// IMP=0x0000000000047a31
+ (double)doubleValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(double)arg3;	// IMP=0x00000000000478b8
+ (float)floatValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(float)arg3;	// IMP=0x000000000004773f
- (id)wf_filter:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b3f3
- (double)wf_doubleForKeyPath:(id)arg1;	// IMP=0x000000000002b364
- (float)wf_floatForKeyPath:(id)arg1;	// IMP=0x000000000002b2d5
- (long long)wf_integerForKeyPath:(id)arg1;	// IMP=0x000000000002b24b
- (id)wf_temperatureWithCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2;	// IMP=0x000000000002b132
- (id)wf_numberForKeyPath:(id)arg1;	// IMP=0x000000000002b0ce
- (id)wf_URLForKeyPath:(id)arg1;	// IMP=0x000000000002b06a
- (id)wf_stringForKeyPath:(id)arg1;	// IMP=0x000000000002b006
- (id)wf_arrayForKeyPath:(id)arg1;	// IMP=0x000000000002afa2
- (id)wf_dictionaryForKeyPath:(id)arg1;	// IMP=0x000000000002af3e
- (id)wf_objectForKeyPath:(id)arg1;	// IMP=0x000000000002af27
- (id)wf_objectOfKind:(Class)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000002ac98
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0000000000047eeb
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000047e8b
- (id)numberForKey:(id)arg1;	// IMP=0x0000000000047e2b
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000000047dcb
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000047d6b
@end

