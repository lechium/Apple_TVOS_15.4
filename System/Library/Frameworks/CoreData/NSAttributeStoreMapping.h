//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping
{
    int _externalType;	// 24 = 0x18
    unsigned int _externalPrecision;	// 28 = 0x1c
    int _externalScale;	// 32 = 0x20
}

- (id)sqlType;	// IMP=0x000000000007223c
- (void)setExternalType:(int)arg1;	// IMP=0x000000000007222c
- (int)externalType;	// IMP=0x000000000007221c
- (id)attribute;	// IMP=0x000000000007220a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007213c
- (id)initWithProperty:(id)arg1;	// IMP=0x00000000000720d5

@end
