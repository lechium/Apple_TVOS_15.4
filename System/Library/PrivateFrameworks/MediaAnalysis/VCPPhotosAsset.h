//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, PHAsset;

@interface VCPPhotosAsset
{
    PHAsset *_asset;	// 8 = 0x8
    NSArray *_cachedResources;	// 16 = 0x10
    _Bool _onceExif;	// 24 = 0x18
    NSDictionary *_cachedExif;	// 32 = 0x20
    _Bool _onceScenes;	// 40 = 0x28
    NSMutableDictionary *_cachedScenes;	// 48 = 0x30
}

+ (id)assetWithPHAsset:(id)arg1;	// IMP=0x000000000018369d
- (void).cxx_destruct;	// IMP=0x0000000000184327
- (id)faces;	// IMP=0x00000000001841ad
- (id)scenes;	// IMP=0x0000000000183a25
- (id)allScenes;	// IMP=0x00000000001838c8
- (id)mainFileURL;	// IMP=0x000000000018382b
- (id)localIdentifier;	// IMP=0x000000000018380e
@property(readonly, nonatomic) NSArray *resources;
- (id)fingerprint;	// IMP=0x0000000000183793
- (id)modificationDate;	// IMP=0x0000000000183776
- (unsigned long long)pixelHeight;	// IMP=0x0000000000183759
- (unsigned long long)pixelWidth;	// IMP=0x000000000018373c
- (unsigned long long)mediaSubtypes;	// IMP=0x000000000018371f
- (long long)mediaType;	// IMP=0x0000000000183702
- (id)initWithPHAsset:(id)arg1;	// IMP=0x000000000018361b
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;	// IMP=0x000000000018469f
- (id)exif;	// IMP=0x000000000018437a
- (float)originalPhotoOffsetSeconds;	// IMP=0x0000000000184d24
- (float)photoOffsetSeconds;	// IMP=0x0000000000184c52
- (struct CGSize)originalMovieSize;	// IMP=0x0000000000185801
- (id)originalMovie;	// IMP=0x000000000018573b
- (id)streamedMovie;	// IMP=0x0000000000185563
- (id)movie;	// IMP=0x0000000000185350
- (CDStruct_e83c9415)slomoRange;	// IMP=0x000000000018506b
- (float)slowmoRate;	// IMP=0x0000000000185007
- (double)duration;	// IMP=0x0000000000184fea

@end

