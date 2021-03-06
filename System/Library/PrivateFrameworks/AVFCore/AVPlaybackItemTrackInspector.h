//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemTrackInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 32 = 0x20
    int _trackID;	// 40 = 0x28
    unsigned int _mediaType;	// 44 = 0x2c
    AVWeakReference *_weakReferenceToAsset;	// 48 = 0x30
}

- (unsigned long long)hash;	// IMP=0x00000000000eb06c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eafce
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000eafb6
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000eaf75
- (struct CGSize)dimensions;	// IMP=0x00000000000eaf59
- (struct CGSize)naturalSize;	// IMP=0x00000000000eaf3d
- (float)peakDataRate;	// IMP=0x00000000000eaf34
- (float)estimatedDataRate;	// IMP=0x00000000000eaf0f
- (CDStruct_e83c9415)timeRange;	// IMP=0x00000000000eaeb3
- (_Bool)isEnabled;	// IMP=0x00000000000eae91
- (id)formatDescriptions;	// IMP=0x00000000000eae75
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000eadfe
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x00000000000eaded
- (id)mediaType;	// IMP=0x00000000000ead9b
- (unsigned int)_figMediaType;	// IMP=0x00000000000ead8b
- (int)trackID;	// IMP=0x00000000000ead7b
- (id)asset;	// IMP=0x00000000000ead5e
- (void)dealloc;	// IMP=0x00000000000ead07
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x00000000000eab42

@end

