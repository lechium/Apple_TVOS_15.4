//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle, NSString;

@interface RENamedImage
{
    NSString *_name;	// 8 = 0x8
    NSBundle *_bundle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000db645
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000db580
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000db496
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000db38b
- (unsigned long long)hash;	// IMP=0x00000000000db33e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000db2e3
- (id)initWithName:(id)arg1 inBundle:(id)arg2;	// IMP=0x00000000000db235

@end

