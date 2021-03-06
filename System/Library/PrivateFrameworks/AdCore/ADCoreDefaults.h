//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADCoreDefaults : NSObject
{
    NSMutableDictionary *_factoryDefaults;	// 8 = 0x8
    struct __CFString *_defaultsBundleID;	// 16 = 0x10
}

+ (void)setArray:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002efd1
+ (id)arrayForKey:(id)arg1;	// IMP=0x000000000002ef6d
+ (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002ef5b
+ (id)stringForKey:(id)arg1;	// IMP=0x000000000002eef7
+ (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000002ee71
+ (double)doubleForKey:(id)arg1;	// IMP=0x000000000002ede8
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000002ed67
+ (long long)integerForKey:(id)arg1;	// IMP=0x000000000002ece1
+ (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000002ec60
+ (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000002ebda
+ (_Bool)defaultIsSetForKey:(id)arg1;	// IMP=0x000000000002eb1c
+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002ea66
+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;	// IMP=0x000000000002e98c
+ (id)factoryDefaults;	// IMP=0x000000000002e93c
+ (void)addFactoryDefaults:(id)arg1;	// IMP=0x000000000002e8c5
+ (id)sharedInstance;	// IMP=0x000000000002e13e
- (void).cxx_destruct;	// IMP=0x000000000002f012
@property(nonatomic) struct __CFString *defaultsBundleID; // @synthesize defaultsBundleID=_defaultsBundleID;
@property(retain, nonatomic) NSMutableDictionary *factoryDefaults; // @synthesize factoryDefaults=_factoryDefaults;
- (id)init;	// IMP=0x000000000002e1f7

@end

