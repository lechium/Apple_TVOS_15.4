//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSNumber;

@interface ISPlayerContent : NSObject
{
    _Bool _photoHasColorAdjustments;	// 8 = 0x8
    _Bool _photoIsOriginal;	// 9 = 0x9
    _Bool _supportsVitality;	// 10 = 0xa
    int _photoEXIFOrientation;	// 12 = 0xc
    struct CGImage *_photo;	// 16 = 0x10
    AVPlayerItem *_videoPlayerItem;	// 24 = 0x18
    NSNumber *_variationIdentifier;	// 32 = 0x20
    CDStruct_1b6d18a9 _photoTime;	// 40 = 0x28
    CDStruct_1b6d18a9 _videoDuration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000017612
@property(readonly, nonatomic) NSNumber *variationIdentifier; // @synthesize variationIdentifier=_variationIdentifier;
@property(readonly, nonatomic) _Bool supportsVitality; // @synthesize supportsVitality=_supportsVitality;
@property(readonly, nonatomic) _Bool photoIsOriginal; // @synthesize photoIsOriginal=_photoIsOriginal;
@property(readonly, nonatomic) _Bool photoHasColorAdjustments; // @synthesize photoHasColorAdjustments=_photoHasColorAdjustments;
@property(readonly, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (unsigned long long)hash;	// IMP=0x00000000000174ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017249
- (void)dealloc;	// IMP=0x00000000000171ca
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(_Bool)arg2 photoEXIFOrientation:(int)arg3 photoTime:(CDStruct_1b6d18a9)arg4 videoDuration:(CDStruct_1b6d18a9)arg5 photoHasColorAdjustments:(_Bool)arg6 videoPlayerItem:(id)arg7 variationIdentifier:(id)arg8 supportsVitality:(_Bool)arg9;	// IMP=0x00000000000170d4

@end

