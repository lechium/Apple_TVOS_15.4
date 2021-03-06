//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class CPLMemoryAssetFlag, NSData, NSString;

@interface CPLMemoryAsset : PBCodable <NSCopying>
{
    CPLMemoryAssetFlag *_assetFlag;	// 8 = 0x8
    NSString *_assetIdentifier;	// 16 = 0x10
    NSData *_assetMovieData;	// 24 = 0x18
    NSString *_masterFingerprint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000056b01
@property(retain, nonatomic) NSString *masterFingerprint; // @synthesize masterFingerprint=_masterFingerprint;
@property(retain, nonatomic) NSData *assetMovieData; // @synthesize assetMovieData=_assetMovieData;
@property(retain, nonatomic) CPLMemoryAssetFlag *assetFlag; // @synthesize assetFlag=_assetFlag;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000569b3
- (unsigned long long)hash;	// IMP=0x000000000005692f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056803
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056719
- (void)copyTo:(id)arg1;	// IMP=0x0000000000056676
- (void)writeTo:(id)arg1;	// IMP=0x00000000000565df
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000565d2
- (id)dictionaryRepresentation;	// IMP=0x00000000000564d4
- (id)description;	// IMP=0x0000000000056425
@property(readonly, nonatomic) _Bool hasMasterFingerprint;
@property(readonly, nonatomic) _Bool hasAssetMovieData;
@property(readonly, nonatomic) _Bool hasAssetFlag;
@property(readonly, nonatomic) _Bool hasAssetIdentifier;

@end

