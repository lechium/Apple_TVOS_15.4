//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVSampleCursorInternal;

@interface AVSampleCursor : NSObject <NSCopying>
{
    AVSampleCursorInternal *_sampleCursor;	// 8 = 0x8
}

+ (id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor *)arg1;	// IMP=0x000000000011096d
+ (void)initialize;	// IMP=0x000000000011095c
- (long long)samplesRequiredForDecoderRefresh;	// IMP=0x0000000000111c4e
- (CDStruct_43f4b5b8)currentSampleStorageRange;	// IMP=0x0000000000111bdf
- (long long)currentSampleIndexInChunk;	// IMP=0x0000000000111b6d
- (CDStruct_20587683)currentChunkInfo;	// IMP=0x0000000000111aae
- (CDStruct_43f4b5b8)currentChunkStorageRange;	// IMP=0x0000000000111a32
- (id)currentChunkStorageURL;	// IMP=0x0000000000111933
- (id)currentSampleDependencyAttachments;	// IMP=0x00000000001118c5
- (CDStruct_8f3a66c8)currentSampleAudioDependencyInfo;	// IMP=0x0000000000111803
- (CDStruct_157d85a6)currentSampleDependencyInfo;	// IMP=0x0000000000111646
- (CDStruct_2a4d9400)currentSampleSyncInfo;	// IMP=0x0000000000111537
- (const struct opaqueCMFormatDescription *)copyCurrentSampleFormatDescription;	// IMP=0x00000000001114e8
- (CDStruct_1b6d18a9)currentSampleDuration;	// IMP=0x0000000000111496
- (struct opaqueCMSampleBuffer *)createSampleBufferFromCurrentSampleToEndCursor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000111409
- (struct opaqueCMSampleBuffer *)createSampleBufferForCurrentSampleReturningError:(id *)arg1;	// IMP=0x0000000000111398
- (_Bool)canProvideSampleBuffers;	// IMP=0x000000000011138b
- (_Bool)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)arg1;	// IMP=0x0000000000111310
- (_Bool)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)arg1;	// IMP=0x0000000000111298
- (long long)comparePositionInDecodeOrderWithPositionOfCursor:(id)arg1;	// IMP=0x000000000011122e
- (CDStruct_1b6d18a9)decodeTimeStamp;	// IMP=0x00000000001111ca
- (CDStruct_1b6d18a9)presentationTimeStamp;	// IMP=0x000000000011117e
- (CDStruct_1b6d18a9)stepByPresentationTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000011112e
- (CDStruct_1b6d18a9)stepByPresentationTime:(CDStruct_1b6d18a9)arg1 wasPinned:(_Bool *)arg2;	// IMP=0x0000000000110fb5
- (CDStruct_1b6d18a9)stepByDecodeTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000110f65
- (CDStruct_1b6d18a9)stepByDecodeTime:(CDStruct_1b6d18a9)arg1 wasPinned:(_Bool *)arg2;	// IMP=0x0000000000110def
- (long long)stepInPresentationOrderByCount:(long long)arg1;	// IMP=0x0000000000110d99
- (long long)stepInDecodeOrderByCount:(long long)arg1;	// IMP=0x0000000000110d43
- (struct OpaqueFigSampleCursor *)_figSampleCursor;	// IMP=0x0000000000110d35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000110c9c
- (void)dealloc;	// IMP=0x0000000000110c3e
- (id)description;	// IMP=0x0000000000110b3d
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor *)arg1;	// IMP=0x00000000001109b0
- (id)init;	// IMP=0x000000000011099c

@end

