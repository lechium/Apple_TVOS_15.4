//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSPlaceholderDictionary
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017fa06
- (void)dealloc;	// IMP=0x000000000017fd68
- (unsigned long long)retainCount;	// IMP=0x000000000017fd60
- (oneway void)release;	// IMP=0x000000000017fd5f
- (id)retain;	// IMP=0x000000000017fd5b
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x000000000017fce8
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x000000000017fc9b
- (id)init;	// IMP=0x000000000017fc50
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000017fc08
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x000000000017fb1d
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000017fa08
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000017f937
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000017f878
- (id)keyEnumerator;	// IMP=0x000000000017f7b9
- (id)objectForKey:(id)arg1;	// IMP=0x000000000017f6fa
- (unsigned long long)count;	// IMP=0x000000000017f63b

@end

