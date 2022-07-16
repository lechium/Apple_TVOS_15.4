//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAsset, AVMediaSelectionOption, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAssetMediaSelectionGroup
{
    AVAsset *_asset;	// 16 = 0x10
    NSDictionary *_dictionary;	// 24 = 0x18
    NSArray *_groupMediaCharacteristics;	// 32 = 0x20
    NSArray *_options;	// 40 = 0x28
    AVMediaSelectionOption *_defaultOption;	// 48 = 0x30
    _Bool _isStreamingGroup;	// 56 = 0x38
}

- (id)mediaSelectionOptionWithPropertyList:(id)arg1;	// IMP=0x00000000000fd6da
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;	// IMP=0x00000000000fd6c0
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(_Bool)arg4;	// IMP=0x00000000000fd404
- (id)defaultOption;	// IMP=0x00000000000fd3f3
- (_Bool)_isStreamingGroup;	// IMP=0x00000000000fd3e3
- (id)_groupMediaCharacteristics;	// IMP=0x00000000000fd3d2
- (id)dictionary;	// IMP=0x00000000000fd3c1
- (id)asset;	// IMP=0x00000000000fd3b0
- (id)options;	// IMP=0x00000000000fd39f
- (unsigned long long)hash;	// IMP=0x00000000000fd352
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fd29f
- (void)dealloc;	// IMP=0x00000000000fd22b
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;	// IMP=0x00000000000fcf00
- (id)init;	// IMP=0x00000000000fceea

@end

