//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorLocationItem
{
    _UIStatusBarImageView *_prominentImageView;	// 8 = 0x8
    long long _previousType;	// 16 = 0x10
}

+ (id)prominentDisplayIdentifier;	// IMP=0x0000000001104cbb
+ (id)groupWithPriority:(long long)arg1;	// IMP=0x0000000000a881ec
- (void).cxx_destruct;	// IMP=0x0000000001105822
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(retain, nonatomic) _UIStatusBarImageView *prominentImageView; // @synthesize prominentImageView=_prominentImageView;
- (id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000110574d
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000110520b
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x00000000011050be
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000001105010
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x0000000001104e40
- (void)_create_prominentImageView;	// IMP=0x0000000001104de6
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000001104d2b
- (id)indicatorEntryKey;	// IMP=0x0000000001104d17
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x0000000001104cd4

@end

