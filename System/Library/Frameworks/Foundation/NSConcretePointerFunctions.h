//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions
{
    struct NSSlice slice;	// 8 = 0x8
}

+ (_Bool)initializeSlice:(struct NSSlice *)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000f620e
+ (void)initializeBackingStore:(struct NSSlice *)arg1 sentinel:(_Bool)arg2;	// IMP=0x00000000000f612c
- (_Bool)usesWeakReadAndWriteBarriers;	// IMP=0x00000000000f69e4
- (_Bool)usesStrongWriteBarrier;	// IMP=0x00000000000f69d3
- (CDUnknownFunctionPointerType)relinquishFunction;	// IMP=0x00000000000f69c1
- (CDUnknownFunctionPointerType)acquireFunction;	// IMP=0x00000000000f69af
- (CDUnknownFunctionPointerType)descriptionFunction;	// IMP=0x00000000000f699d
- (CDUnknownFunctionPointerType)isEqualFunction;	// IMP=0x00000000000f698b
- (CDUnknownFunctionPointerType)hashFunction;	// IMP=0x00000000000f6979
- (CDUnknownFunctionPointerType)sizeFunction;	// IMP=0x00000000000f6967
- (void)setUsesWeakReadAndWriteBarriers:(_Bool)arg1;	// IMP=0x00000000000f6951
- (void)setUsesStrongWriteBarrier:(_Bool)arg1;	// IMP=0x00000000000f693b
- (void)setRelinquishFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000000f6929
- (void)setAcquireFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000000f6917
- (void)setDescriptionFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000000f6905
- (void)setIsEqualFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000000f68ec
- (void)setHashFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000000f68d3
- (void)setSizeFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000000f68c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f68b5
- (unsigned long long)hash;	// IMP=0x00000000000f68ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f683d
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000f67d5

@end

