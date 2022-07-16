//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel, UIView, _UICollectionViewOutlineCellDisclosureConfiguration;

@interface _UICollectionViewOutlineCell
{
    _Bool _automaticallyTogglesExpansionState;	// 8 = 0x8
    _Bool _selectionFollowsTintColor;	// 9 = 0x9
    UIView *_outlineContentView;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    _UICollectionViewOutlineCellDisclosureConfiguration *_disclosureConfiguration;	// 40 = 0x28
    CDUnknownBlockType _disclosureWasTappedHandler;	// 48 = 0x30
    double _highlightCornerRadius;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000237d57
@property(nonatomic) _Bool selectionFollowsTintColor; // @synthesize selectionFollowsTintColor=_selectionFollowsTintColor;
@property(nonatomic) double highlightCornerRadius; // @synthesize highlightCornerRadius=_highlightCornerRadius;
@property(copy, nonatomic) CDUnknownBlockType disclosureWasTappedHandler; // @synthesize disclosureWasTappedHandler=_disclosureWasTappedHandler;
@property(copy, nonatomic) _UICollectionViewOutlineCellDisclosureConfiguration *disclosureConfiguration; // @synthesize disclosureConfiguration=_disclosureConfiguration;
@property(nonatomic) _Bool automaticallyTogglesExpansionState; // @synthesize automaticallyTogglesExpansionState=_automaticallyTogglesExpansionState;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *outlineContentView; // @synthesize outlineContentView=_outlineContentView;
@property(retain, nonatomic) id identifier;

@end
