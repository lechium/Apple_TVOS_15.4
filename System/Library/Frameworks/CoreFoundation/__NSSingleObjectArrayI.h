//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSSingleObjectArrayI
{
    id _object;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015b7af
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000015b5eb
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015b87c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015b876
- (void)dealloc;	// IMP=0x000000000015b80d
- (id)objectEnumerator;	// IMP=0x000000000015b76e
- (id)lastObject;	// IMP=0x000000000015b762
- (_Bool)isEqualToArray:(id)arg1;	// IMP=0x000000000015b6ce
- (id)firstObject;	// IMP=0x000000000015b6c2
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015b643
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000015b5ee
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000015b579
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015b509
- (unsigned long long)count;	// IMP=0x000000000015b503

@end

