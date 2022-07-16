//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIContentViewConfiguration-Protocol.h>

@class NSString, _UIContentViewEditingConfiguration, _UIContentViewImageViewConfiguration, _UIContentViewLabelConfiguration;

@interface _UIBasicCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins:1;
        unsigned int hasCustomizedDirectionalLayoutMargins:1;
        unsigned int hasCustomizedImageToTextPadding:1;
    } _configurationFlags;	// 8 = 0x8
    unsigned long long _axesPreservingSuperviewLayoutMargins;	// 16 = 0x10
    double _imageToTextPadding;	// 24 = 0x18
    _UIContentViewEditingConfiguration *_textLabelEditingConfiguration;	// 32 = 0x20
    long long _defaultStyle;	// 40 = 0x28
    _UIContentViewImageViewConfiguration *_imageView;	// 48 = 0x30
    _UIContentViewLabelConfiguration *_textLabel;	// 56 = 0x38
    struct NSDirectionalEdgeInsets _directionalLayoutMargins;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000f974d5
+ (id)defaultConfiguration;	// IMP=0x0000000000f970f4
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1;	// IMP=0x0000000000f96d18
+ (id)defaultOutlineParentCellConfigurationForState:(unsigned long long)arg1;	// IMP=0x0000000000f9696d
+ (id)defaultListCellConfigurationForState:(unsigned long long)arg1;	// IMP=0x0000000000f9661e
+ (id)outlineCellConfiguration;	// IMP=0x0000000000f9660a
+ (id)outlineRootParentCellConfiguration;	// IMP=0x0000000000f965f6
+ (id)listCellConfiguration;	// IMP=0x0000000000f965e2
- (void).cxx_destruct;	// IMP=0x0000000000f982f3
@property(readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) _UIContentViewImageViewConfiguration *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) _UIContentViewEditingConfiguration *_textLabelEditingConfiguration; // @synthesize _textLabelEditingConfiguration;
@property(nonatomic) double imageToTextPadding;
@property(nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property(nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f97afd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f97a21
- (void)applyToContentView:(id)arg1;	// IMP=0x0000000000f97955
- (id)createContentView;	// IMP=0x0000000000f9791f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000f97744
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f974dd
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000f9720d
- (id)updatedConfigurationForState:(unsigned long long)arg1;	// IMP=0x0000000000f971f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

