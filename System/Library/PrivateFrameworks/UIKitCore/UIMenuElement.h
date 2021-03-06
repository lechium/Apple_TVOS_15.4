//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIImage;
@protocol _UIMenuImageOrName;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_subtitle;	// 8 = 0x8
    NSString *_accessibilityIdentifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    id <_UIMenuImageOrName> _imageOrName;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000ef9462
- (void).cxx_destruct;	// IMP=0x0000000000ef9a6f
@property(readonly, nonatomic) id <_UIMenuImageOrName> imageOrName; // @synthesize imageOrName=_imageOrName;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setAccessibilityIdentifier:(id)arg1;	// IMP=0x0000000000ef9a33
- (id)accessibilityIdentifier;	// IMP=0x0000000000ef9a29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ef9a1e
- (void)_willBePreparedForInitialDisplay:(id)arg1;	// IMP=0x0000000000ef9a18
- (void)_setImage:(id)arg1;	// IMP=0x0000000000ef99cd
- (void)_setSubtitle:(id)arg1;	// IMP=0x0000000000ef9993
- (void)_setTitle:(id)arg1;	// IMP=0x0000000000ef9959
- (id)_mutableCopy;	// IMP=0x0000000000ef9947
- (id)_immutableCopy;	// IMP=0x0000000000ef98ca
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ef98c2
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ef98bc
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ef98b4
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3 deferredElementVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000ef98ae
@property(readonly, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ef9717
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3;	// IMP=0x0000000000ef963a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ef947a
@property(readonly, nonatomic) _Bool isLoadingPlaceholder;
@property(readonly, nonatomic) _Bool isLeaf;

@end

