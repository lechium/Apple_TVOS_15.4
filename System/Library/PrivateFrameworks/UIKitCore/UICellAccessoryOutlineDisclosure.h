//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

@interface UICellAccessoryOutlineDisclosure
{
    long long _style;	// 48 = 0x30
    CDUnknownBlockType _actionHandler;	// 56 = 0x38
    UIImage *__customImage;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009c52e3
- (void).cxx_destruct;	// IMP=0x00000000009c5660
@property(retain, nonatomic, getter=_customImage, setter=_setCustomImage:) UIImage *_customImage; // @synthesize _customImage=__customImage;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double rotationAngle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009c54dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009c544d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009c53ad
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009c52eb
- (id)_identifier;	// IMP=0x00000000009c52d6
- (long long)_systemTypePlacementForHeader:(_Bool)arg1;	// IMP=0x00000000009c52cb
- (long long)_systemType;	// IMP=0x00000000009c52c0
- (id)init;	// IMP=0x00000000009c5271

@end

