//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UICellSpacingAccessory
{
    struct CGSize _size;	// 40 = 0x28
}

+ (id)accessoryWithIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000d1d977
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)view;	// IMP=0x0000000000d1da81
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000d1da69
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d1d9db

@end

