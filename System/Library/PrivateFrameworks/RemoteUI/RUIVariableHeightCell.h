//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RUIVariableHeightCell
{
    _Bool _supportsAccessory;	// 88 = 0x58
    long long _detailTextAlignment;	// 96 = 0x60
}

@property(nonatomic) long long detailTextAlignment; // @synthesize detailTextAlignment=_detailTextAlignment;
@property(nonatomic) _Bool supportsAccessory; // @synthesize supportsAccessory=_supportsAccessory;
- (double)height;	// IMP=0x0000000000007ac3
- (struct CGSize)sizeForTextLabel:(id)arg1 width:(double)arg2;	// IMP=0x0000000000007966
- (void)layoutSubviews;	// IMP=0x00000000000072df

@end

