//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFImage;

@interface WFImageIcon
{
    WFImage *_image;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f7ec2
- (void).cxx_destruct;	// IMP=0x00000000000f7eaf
@property(readonly, nonatomic) WFImage *image; // @synthesize image=_image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f7e74
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f7de7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f7ce0
- (unsigned long long)hash;	// IMP=0x00000000000f7cc3
- (id)initWithImage:(id)arg1;	// IMP=0x00000000000f7bc7

@end

