//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImage;

@interface _UICellAccessoryConfigurationOutlineDisclosure
{
    _Bool _cellSelectionTogglesExpansionState;	// 32 = 0x20
    double _rotationAngle;	// 40 = 0x28
    UIColor *_selectedTintColor;	// 48 = 0x30
    UIImage *__customImage;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000218410
+ (id)new;	// IMP=0x00000000002182e3
- (void).cxx_destruct;	// IMP=0x00000000002188bd
@property(readonly, nonatomic) UIImage *_customImage; // @synthesize _customImage=__customImage;
@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(readonly, nonatomic) _Bool cellSelectionTogglesExpansionState; // @synthesize cellSelectionTogglesExpansionState=_cellSelectionTogglesExpansionState;
@property(retain, nonatomic) UIImage *image;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002186ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000218625
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000218545
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000218418
- (id)_identifier;	// IMP=0x0000000000218403
- (long long)_systemType;	// IMP=0x00000000002183f8
- (id)initWithCellSelectionTogglesExpansionState:(_Bool)arg1;	// IMP=0x0000000000218383
- (id)initWithImage:(id)arg1;	// IMP=0x0000000000218321
- (id)init;	// IMP=0x000000000021830a

@end

