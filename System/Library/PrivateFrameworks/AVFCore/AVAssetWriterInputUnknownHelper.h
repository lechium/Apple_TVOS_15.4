//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputUnknownHelper
{
}

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;	// IMP=0x00000000000a28cb
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;	// IMP=0x00000000000a2f14
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000a2dbd
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000a2da8
- (_Bool)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id *)arg3;	// IMP=0x00000000000a2a1d
- (void)setSampleReferenceBaseURL:(id)arg1;	// IMP=0x00000000000a29ec
- (void)setMediaDataLocation:(id)arg1;	// IMP=0x00000000000a29bb
- (void)setPreferredMediaChunkSize:(long long)arg1;	// IMP=0x00000000000a298a
- (void)setPreferredMediaChunkAlignment:(long long)arg1;	// IMP=0x00000000000a2959
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a292e
- (void)setSourcePixelBufferAttributes:(id)arg1;	// IMP=0x00000000000a28fd
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000a28eb
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;	// IMP=0x00000000000a289c
- (void)setProvisionalAlternateGroupID:(short)arg1;	// IMP=0x00000000000a286d
- (void)setAlternateGroupID:(short)arg1;	// IMP=0x00000000000a283e
- (void)setLayer:(long long)arg1;	// IMP=0x00000000000a280d
- (void)setPreferredVolume:(float)arg1;	// IMP=0x00000000000a27d8
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;	// IMP=0x00000000000a27a9
- (void)setExtendedLanguageTag:(id)arg1;	// IMP=0x00000000000a26e1
- (void)setLanguageCode:(id)arg1;	// IMP=0x00000000000a2619
- (_Bool)_validateLanguageCode:(id)arg1;	// IMP=0x00000000000a25a4
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x00000000000a2562
- (void)setMaximizePowerEfficiency:(_Bool)arg1;	// IMP=0x00000000000a2533
- (void)setExpectsMediaDataInRealTime:(_Bool)arg1;	// IMP=0x00000000000a2504
- (void)setMediaTimeScale:(int)arg1;	// IMP=0x00000000000a243a
- (void)setMetadata:(id)arg1;	// IMP=0x00000000000a2409
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000a23de
- (long long)status;	// IMP=0x00000000000a23d6
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x00000000000a21a5
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000a205e

@end
