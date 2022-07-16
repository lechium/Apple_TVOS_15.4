//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/NSFastEnumeration-Protocol.h>

@interface NSConstantDictionary <NSFastEnumeration>
{
    unsigned long long _options;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    const id *_keys;	// 24 = 0x18
    const id *_objects;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b72f
+ (id)new;	// IMP=0x000000000009b723
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000009adb7
- (id)copy;	// IMP=0x000000000009b7af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b7ab
- (void)dealloc;	// IMP=0x000000000009b7a9
- (oneway void)release;	// IMP=0x000000000009b7a8
- (unsigned long long)retainCount;	// IMP=0x000000000009b7a0
- (_Bool)_isDeallocating;	// IMP=0x000000000009b79d
- (_Bool)_tryRetain;	// IMP=0x000000000009b79a
- (id)retain;	// IMP=0x000000000009b796
- (id)autorelease;	// IMP=0x000000000009b792
- (id)init;	// IMP=0x000000000009b790
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b762
- (id)mutableCopy;	// IMP=0x000000000009b734
- (id)objectEnumerator;	// IMP=0x000000000009b6eb
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000009b50e
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b3e4
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b2fc
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b22f
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009b1a6
- (id)allValues;	// IMP=0x000000000009b179
- (id)allKeys;	// IMP=0x000000000009b14c
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000000009b06f
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009afde
- (id)keyEnumerator;	// IMP=0x000000000009afa3
- (id)objectForKey:(id)arg1;	// IMP=0x000000000009adc6
- (unsigned long long)count;	// IMP=0x000000000009adba
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009ada7

@end
