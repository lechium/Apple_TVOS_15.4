//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface MSVDefaultDictionary : NSMutableDictionary
{
    CDUnknownBlockType _defaultValue;	// 8 = 0x8
    NSMutableDictionary *_storage;	// 16 = 0x10
}

+ (id)dictionaryWithDictionary:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f15a
+ (id)dictionaryWithCapacity:(unsigned long long)arg1 defaultValue:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f102
+ (id)dictionaryWithDefaultValue:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f0b9
- (void).cxx_destruct;	// IMP=0x000000000001f070
@property(copy, nonatomic) CDUnknownBlockType defaultValue; // @synthesize defaultValue=_defaultValue;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000001f04d
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000001f030
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001f013
- (id)keyEnumerator;	// IMP=0x000000000001eff6
- (id)objectForKey:(id)arg1;	// IMP=0x000000000001ef0a
- (unsigned long long)count;	// IMP=0x000000000001eeed
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001eeb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ee95
- (id)initWithDictionary:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;	// IMP=0x000000000001edcc
- (id)initWithCapacity:(unsigned long long)arg1 defaultValue:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ed1e
- (id)initWithDefaultValue:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ec86
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001ebde
- (id)init;	// IMP=0x000000000001ebc5

@end
