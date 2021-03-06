//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIContentViewConfiguration-Protocol.h>

@class NSString, _UIContentViewImageViewConfiguration, _UIContentViewLabelConfiguration;

@interface _UIValueCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins:1;
        unsigned int hasCustomizedDirectionalLayoutMargins:1;
        unsigned int hasCustomizedImageToTextPadding:1;
        unsigned int hasCustomizedTextToValuePadding:1;
    } _configurationFlags;	// 8 = 0x8
    unsigned long long _axesPreservingSuperviewLayoutMargins;	// 16 = 0x10
    double _imageToTextPadding;	// 24 = 0x18
    long long _defaultStyle;	// 32 = 0x20
    _UIContentViewImageViewConfiguration *_imageView;	// 40 = 0x28
    _UIContentViewLabelConfiguration *_textLabel;	// 48 = 0x30
    _UIContentViewLabelConfiguration *_valueLabel;	// 56 = 0x38
    struct UIOffset _textToValuePadding;	// 64 = 0x40
    struct NSDirectionalEdgeInsets _directionalLayoutMargins;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a5bc79
+ (id)defaultConfiguration;	// IMP=0x0000000000a5b83d
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1;	// IMP=0x0000000000a5b185
+ (id)defaultListCellConfigurationForState:(unsigned long long)arg1;	// IMP=0x0000000000a5ad19
+ (id)outlineCellConfiguration;	// IMP=0x0000000000a5ad05
+ (id)listCellConfiguration;	// IMP=0x0000000000a5acf1
- (void).cxx_destruct;	// IMP=0x0000000000a5cc16
@property(readonly, nonatomic) _UIContentViewLabelConfiguration *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) _UIContentViewImageViewConfiguration *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct UIOffset textToValuePadding;
@property(nonatomic) double imageToTextPadding;
@property(nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property(nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a5c3d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a5c2f4
- (void)applyToContentView:(id)arg1;	// IMP=0x0000000000a5c228
- (id)createContentView;	// IMP=0x0000000000a5c1f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a5bf8f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a5bc81
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000a5b959
- (id)updatedConfigurationForState:(unsigned long long)arg1;	// IMP=0x0000000000a5b945

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

