//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CNMutableContactKeyVector
{
}

+ (id)new;	// IMP=0x000000000007bec4
+ (id)freezeIfClassIsImmutable:(id)arg1;	// IMP=0x000000000007beae
- (id)freeze;	// IMP=0x000000000007c697
- (void)subtractKeys:(id)arg1;	// IMP=0x000000000007c4cd
- (void)subtractKey:(id)arg1;	// IMP=0x000000000007c403
- (void)minusKeyVector:(id)arg1;	// IMP=0x000000000007c39a
- (void)addKey:(id)arg1;	// IMP=0x000000000007c2d5
- (void)addKeys:(id)arg1;	// IMP=0x000000000007c10d
- (void)intersectKeyVector:(id)arg1;	// IMP=0x000000000007c0a7
- (void)unionKeyVector:(id)arg1;	// IMP=0x000000000007c041
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007bf76
- (id)initWithKeyVector:(id)arg1;	// IMP=0x000000000007bee7
- (id)init;	// IMP=0x000000000007bece

@end

