//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFData
{
    unsigned long long _cfinfoa;	// 8 = 0x8
    long long _length;	// 16 = 0x10
    long long _capacity;	// 24 = 0x18
    struct __CFAllocator *_bytesDeallocator;	// 32 = 0x20
    char *_bytes;	// 40 = 0x28
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005c2ec
- (Class)classForCoder;	// IMP=0x000000000005c39e
- (_Bool)_providesConcreteBacking;	// IMP=0x000000000005c39b
- (void)setLength:(unsigned long long)arg1;	// IMP=0x000000000005c393
- (void *)mutableBytes;	// IMP=0x000000000005c38e
- (const void *)bytes;	// IMP=0x000000000005c389
- (unsigned long long)length;	// IMP=0x000000000005c384
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c2ef
- (unsigned long long)retainCount;	// IMP=0x000000000005c2e7
- (_Bool)_isDeallocating;	// IMP=0x000000000005c2d7
- (_Bool)_tryRetain;	// IMP=0x000000000005c2c6
- (oneway void)release;	// IMP=0x000000000005c2c1
- (id)retain;	// IMP=0x000000000005c2bc
- (unsigned long long)hash;	// IMP=0x000000000005c2b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005c294

@end

