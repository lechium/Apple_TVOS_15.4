//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMutableCompositionTrackInternal, NSArray, NSString;

@interface AVMutableCompositionTrack
{
    AVMutableCompositionTrackInternal *_mutablePriv;	// 24 = 0x18
}

+ (_Bool)expectsPropertyRevisedNotifications;	// IMP=0x000000000007eabf
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription *)arg1 withFormatDescription:(struct opaqueCMFormatDescription *)arg2;	// IMP=0x000000000007eac7
- (void)setMetadata:(id)arg1;	// IMP=0x000000000007ea7d
- (void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2;	// IMP=0x000000000007ea65
- (void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2;	// IMP=0x000000000007ea50
- (void)_updateTrackAssociationToTrack:(id)arg1 type:(id)arg2 operation:(long long)arg3;	// IMP=0x000000000007e6c4
- (void)setAlternateGroupID:(long long)arg1;	// IMP=0x000000000007e682
- (long long)alternateGroupID;	// IMP=0x000000000007e5b5
@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSString *extendedLanguageTag;
@property(copy, nonatomic) NSString *languageCode;
@property(nonatomic) int naturalTimeScale;
- (void)_setTrackReaderPropertyValue:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000000007e310
- (_Bool)validateTrackSegments:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007df22
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000007de50
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000007dd96
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000007dcdc
- (_Bool)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;	// IMP=0x000000000007d600
- (_Bool)insertTimeRange:(CDStruct_e83c9415)arg1 ofTrack:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;	// IMP=0x000000000007d33f
@property(copy, nonatomic) NSArray *segments;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_notifySelfThatSegmentsDidChangeWithSuccess:(_Bool)arg1;	// IMP=0x000000000007cf06
- (void)_notifySelfThatSegmentsWillChange;	// IMP=0x000000000007ced1
- (void)_notifyAssetThatDurationDidChangeWithSuccess:(_Bool)arg1;	// IMP=0x000000000007ce31
- (void)_notifyAssetThatDurationWillChange;	// IMP=0x000000000007cdff

@end
