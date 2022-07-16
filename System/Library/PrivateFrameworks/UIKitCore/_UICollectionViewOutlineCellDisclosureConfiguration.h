//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIColor, UIImage;

@interface _UICollectionViewOutlineCellDisclosureConfiguration : NSObject <NSCopying>
{
    CDUnknownBlockType _disclosureWasTappedHandler;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    long long _alignment;	// 24 = 0x18
    double _animationRotationAngle;	// 32 = 0x20
    UIColor *_disclosureColor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000237fe3
@property(retain, nonatomic) UIColor *disclosureColor; // @synthesize disclosureColor=_disclosureColor;
@property(nonatomic) double animationRotationAngle; // @synthesize animationRotationAngle=_animationRotationAngle;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000237f29
- (id)initWithImage:(id)arg1 alignment:(long long)arg2 animationRotationAngle:(double)arg3 disclosureColor:(id)arg4 disclosureWasTappedHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000237e44
- (id)initWithImage:(id)arg1 alignment:(long long)arg2;	// IMP=0x0000000000237e21
- (id)init;	// IMP=0x0000000000237dbb

@end

