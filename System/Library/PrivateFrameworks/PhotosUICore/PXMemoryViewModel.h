//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableMemoryViewModel-Protocol.h>

@class NSString;
@protocol PXDisplayAsset;

@interface PXMemoryViewModel <PXMutableMemoryViewModel>
{
    _Bool _isHighlighted;	// 8 = 0x8
    NSString *_localizedDateText;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
    id <PXDisplayAsset> _keyAsset;	// 32 = 0x20
    long long _specSet;	// 40 = 0x28
    long long _variant;	// 48 = 0x30
    struct UIEdgeInsets _layoutMargins;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006ebaf
@property(readonly, nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) long long specSet; // @synthesize specSet=_specSet;
@property(readonly, nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSString *localizedDateText; // @synthesize localizedDateText=_localizedDateText;
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000006eafb
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;	// IMP=0x000000000006ea7f
- (void)setVariant:(long long)arg1;	// IMP=0x000000000006ea41
- (void)setSpecSet:(long long)arg1;	// IMP=0x000000000006ea03
- (void)setIsHighlighted:(_Bool)arg1;	// IMP=0x000000000006e9c5
- (void)setKeyAsset:(id)arg1;	// IMP=0x000000000006e950
- (void)setLocalizedTitle:(id)arg1;	// IMP=0x000000000006e8db
- (void)setLocalizedDateText:(id)arg1;	// IMP=0x000000000006e866
- (id)init;	// IMP=0x000000000006e7f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
