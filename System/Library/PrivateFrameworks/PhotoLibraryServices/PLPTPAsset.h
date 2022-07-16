//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>
#import <PhotoLibraryServices/NSMutableCopying-Protocol.h>

@class NSData, NSNumber, NSString, PLPTPAssetHandle, UTType;

@interface PLPTPAsset : NSObject <NSMutableCopying, NSCopying>
{
    NSData *_event;	// 8 = 0x8
    PLPTPAssetHandle *_assetHandle;	// 16 = 0x10
    NSString *_filename;	// 24 = 0x18
    NSString *_createdFilename;	// 32 = 0x20
    _Bool _deleted;	// 40 = 0x28
    NSString *_originalFilename;	// 48 = 0x30
    NSString *_fullDirectoryPath;	// 56 = 0x38
    _Bool _exifAvailable;	// 64 = 0x40
    NSNumber *_objectCompressedSize;	// 72 = 0x48
    NSString *_originatingAssetID;	// 80 = 0x50
    NSNumber *_thumbOffset;	// 88 = 0x58
    NSNumber *_thumbCompressedSize;	// 96 = 0x60
    struct CGSize _imagePixSize;	// 104 = 0x68
    struct CGSize _thumbPixSize;	// 120 = 0x78
    long long _desiredOrientation;	// 136 = 0x88
    NSString *_modificationDateString;	// 144 = 0x90
    NSString *_captureDateString;	// 152 = 0x98
    NSString *_durationString;	// 160 = 0xa0
    NSString *_locationString;	// 168 = 0xa8
    NSString *_groupUUID;	// 176 = 0xb0
    NSString *_burstUUID;	// 184 = 0xb8
    _Bool _burstPicked;	// 192 = 0xc0
    _Bool _burstFavorite;	// 193 = 0xc1
    _Bool _burstFirstPicked;	// 194 = 0xc2
    _Bool _highFrameRateVideo;	// 195 = 0xc3
    _Bool _timeLapseVideo;	// 196 = 0xc4
    NSString *_relatedUUID;	// 200 = 0xc8
    NSString *_spatialOverCaptureGroupIdentifier;	// 208 = 0xd0
    long long _conversionGroup;	// 216 = 0xd8
    unsigned int _videoCodec;	// 224 = 0xe0
    UTType *_contentType;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000048af13
@property(readonly, copy, nonatomic) NSData *event; // @synthesize event=_event;
@property(readonly, nonatomic) UTType *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) unsigned int videoCodec; // @synthesize videoCodec=_videoCodec;
@property(readonly, nonatomic) long long conversionGroup; // @synthesize conversionGroup=_conversionGroup;
@property(readonly, copy, nonatomic) NSString *relatedUUID; // @synthesize relatedUUID=_relatedUUID;
@property(readonly, nonatomic, getter=isTimeLapseVideo) _Bool timeLapseVideo; // @synthesize timeLapseVideo=_timeLapseVideo;
@property(readonly, nonatomic, getter=isHighFrameRateVideo) _Bool highFrameRateVideo; // @synthesize highFrameRateVideo=_highFrameRateVideo;
@property(readonly, nonatomic, getter=isBurstFirstPicked) _Bool burstFirstPicked; // @synthesize burstFirstPicked=_burstFirstPicked;
@property(readonly, nonatomic, getter=isBurstFavorite) _Bool burstFavorite; // @synthesize burstFavorite=_burstFavorite;
@property(readonly, nonatomic, getter=isBurstPicked) _Bool burstPicked; // @synthesize burstPicked=_burstPicked;
@property(readonly, copy, nonatomic) NSString *burstUUID; // @synthesize burstUUID=_burstUUID;
@property(readonly, copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier; // @synthesize spatialOverCaptureGroupIdentifier=_spatialOverCaptureGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(readonly, copy, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(readonly, copy, nonatomic) NSString *captureDateString; // @synthesize captureDateString=_captureDateString;
@property(readonly, copy, nonatomic) NSString *modificationDateString; // @synthesize modificationDateString=_modificationDateString;
@property(readonly, nonatomic) long long desiredOrientation; // @synthesize desiredOrientation=_desiredOrientation;
@property(readonly, nonatomic) struct CGSize thumbPixSize; // @synthesize thumbPixSize=_thumbPixSize;
@property(readonly, nonatomic) struct CGSize imagePixSize; // @synthesize imagePixSize=_imagePixSize;
@property(readonly, copy, nonatomic) NSNumber *thumbCompressedSize; // @synthesize thumbCompressedSize=_thumbCompressedSize;
@property(readonly, copy, nonatomic) NSNumber *thumbOffset; // @synthesize thumbOffset=_thumbOffset;
@property(readonly, copy, nonatomic) NSString *originatingAssetID; // @synthesize originatingAssetID=_originatingAssetID;
@property(readonly, copy, nonatomic) NSNumber *objectCompressedSize; // @synthesize objectCompressedSize=_objectCompressedSize;
@property(readonly, nonatomic, getter=isExifAvailable) _Bool exifAvailable; // @synthesize exifAvailable=_exifAvailable;
@property(readonly, copy, nonatomic) NSString *fullDirectoryPath; // @synthesize fullDirectoryPath=_fullDirectoryPath;
@property(readonly, copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSString *createdFilename; // @synthesize createdFilename=_createdFilename;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) PLPTPAssetHandle *assetHandle; // @synthesize assetHandle=_assetHandle;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;	// IMP=0x000000000048a9f8
@property(readonly, copy, nonatomic) NSString *cacheKey;
- (id)description;	// IMP=0x000000000048a977
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048a949
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048a93e
- (id)initWithPTPAsset:(id)arg1;	// IMP=0x000000000048a5e2

@end
