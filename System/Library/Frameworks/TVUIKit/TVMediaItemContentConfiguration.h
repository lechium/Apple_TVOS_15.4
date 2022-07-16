//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVUIKit/BSDebugDescriptionProviding-Protocol.h>
#import <TVUIKit/BSDescriptionProviding-Protocol.h>
#import <TVUIKit/NSSecureCoding-Protocol.h>
#import <TVUIKit/UIContentConfiguration-Protocol.h>

@class NSString, TVMediaItemContentBadgeProperties, TVMediaItemContentTextProperties, UIImage, UIView;

@interface TVMediaItemContentConfiguration : NSObject <BSDescriptionProviding, BSDebugDescriptionProviding, UIContentConfiguration, NSSecureCoding>
{
    unsigned char _variant;	// 8 = 0x8
    float _playbackProgress;	// 12 = 0xc
    TVMediaItemContentTextProperties *_textProperties;	// 16 = 0x10
    TVMediaItemContentTextProperties *_secondaryTextProperties;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    NSString *_secondaryText;	// 48 = 0x30
    NSString *_badgeText;	// 56 = 0x38
    TVMediaItemContentBadgeProperties *_badgeProperties;	// 64 = 0x40
    UIView *_overlayView;	// 72 = 0x48
}

+ (id)wideCellConfiguration;	// IMP=0x000000000003e8ff
+ (id)_squareCellConfiguration;	// IMP=0x000000000003e8d8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003da25
- (void).cxx_destruct;	// IMP=0x000000000003ed97
@property(readonly, nonatomic, getter=_variant) unsigned char variant; // @synthesize variant=_variant;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) TVMediaItemContentBadgeProperties *badgeProperties; // @synthesize badgeProperties=_badgeProperties;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(nonatomic) float playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_setSwiftBridgingBadgeProperties:(id)arg1;	// IMP=0x000000000003ece1
- (void)_setSwiftBridgingSecondaryTextProperties:(id)arg1;	// IMP=0x000000000003ecd0
- (void)_setSwiftBridgingTextProperties:(id)arg1;	// IMP=0x000000000003ecbf
- (void)_appendToDescriptionBuilder:(id)arg1 skipIfEmpty:(_Bool)arg2;	// IMP=0x000000000003ea51
@property(readonly, nonatomic) TVMediaItemContentTextProperties *secondaryTextProperties; // @synthesize secondaryTextProperties=_secondaryTextProperties;
@property(readonly, nonatomic) TVMediaItemContentTextProperties *textProperties; // @synthesize textProperties=_textProperties;
- (id)updatedConfigurationForState:(id)arg1;	// IMP=0x000000000003e8be
- (id)makeContentView;	// IMP=0x000000000003e888
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003e750
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003e64a
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003e5fa
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003e555
- (id)succinctDescription;	// IMP=0x000000000003e505
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003df16
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003dd6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003dc53
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003da2d
- (id)_initWithContentConfiguration:(id)arg1;	// IMP=0x000000000003d820
- (id)_initWithVariant:(unsigned char)arg1;	// IMP=0x000000000003d7e5

// Remaining properties
@property(readonly) Class superclass;

@end

