//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet2
{
    NSKeyValueGetter *_valueGetter;	// 32 = 0x20
}

- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000001fc1b9
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001fc185
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000001fc151
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000001fc109
- (unsigned long long)count;	// IMP=0x00000000001fc0db
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000001fc039
- (void)_proxyNonGCFinalize;	// IMP=0x00000000001fbfc8
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000001fbf3b

@end

