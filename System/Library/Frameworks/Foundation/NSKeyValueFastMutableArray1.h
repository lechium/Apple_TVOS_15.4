//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueNonmutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray1
{
    NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;	// 32 = 0x20
}

- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000009e98a
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009e8d6
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000009e844
- (unsigned long long)count;	// IMP=0x000000000009e816
- (void)_proxyNonGCFinalize;	// IMP=0x000000000009e7a5
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000009e718

@end

