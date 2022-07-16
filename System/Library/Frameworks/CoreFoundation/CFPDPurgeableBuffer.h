//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPDPurgeableBuffer
{
    struct __CFData *handle;	// 8 = 0x8
    unsigned long long allocSize;	// 16 = 0x10
    _Bool safe;	// 24 = 0x18
    _Bool usedMalloc;	// 25 = 0x19
}

- (void)dealloc;	// IMP=0x0000000000040e00
- (_Bool)purgable;	// IMP=0x0000000000040df1
- (void)endAccessing;	// IMP=0x0000000000040d5a
- (_Bool)beginAccessing;	// IMP=0x0000000000040cb6
- (unsigned long long)length;	// IMP=0x0000000000040ca6
- (void *)bytes;	// IMP=0x0000000000040c7f
- (id)initWithPropertyList:(void *)arg1;	// IMP=0x0000000000040afb
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000000406d8

@end
