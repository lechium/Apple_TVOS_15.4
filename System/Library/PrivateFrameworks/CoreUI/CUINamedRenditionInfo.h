//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CUINamedRenditionInfo : NSObject <NSCopying>
{
    void *_bitmap;	// 8 = 0x8
    const struct _renditionkeyfmt *_keyFormat;	// 16 = 0x10
}

- (void)incrementIndex:(unsigned long long *)arg1 inValues:(id)arg2 forAttribute:(int)arg3;	// IMP=0x0000000000020ec4
- (void)decrementValue:(long long *)arg1 forAttribute:(int)arg2;	// IMP=0x0000000000020770
- (unsigned long long)numberOfBitsSet;	// IMP=0x000000000002075f
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x000000000002041e
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x00000000000200dd
- (_Bool)diverseContentPresentForAttribute:(int)arg1;	// IMP=0x0000000000020052
- (_Bool)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2;	// IMP=0x000000000001ffbf
- (_Bool)contentPresentForAttribute:(int)arg1;	// IMP=0x000000000001ff4e
- (unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x000000000001febf
- (unsigned short)getValueOfAttribute:(int)arg1;	// IMP=0x000000000001fdfb
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x000000000001fab1
- (id)bitwiseAndWith:(id)arg1;	// IMP=0x000000000001fa43
- (id)debugDescription;	// IMP=0x000000000001f6eb
- (id)description;	// IMP=0x000000000001f680
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f638
- (_Bool)isEqualToNamedRenditionInfo:(id)arg1;	// IMP=0x000000000001f626
- (id)archivedData;	// IMP=0x000000000001f591
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f51d
- (void)dealloc;	// IMP=0x000000000001f4e3
- (id)initWithKeyFormat:(const struct _renditionkeyfmt *)arg1;	// IMP=0x000000000001f409
- (id)initWithData:(id)arg1 andKeyFormat:(const struct _renditionkeyfmt *)arg2;	// IMP=0x000000000001f38b

@end

