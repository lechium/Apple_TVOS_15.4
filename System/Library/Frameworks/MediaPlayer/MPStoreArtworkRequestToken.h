//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSourceVisualIdenticality-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class ICStoreArtworkInfo, ICStoreVideoArtworkInfo, NSString, NSURL;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality>
{
    long long _artworkInfoType;	// 8 = 0x8
    ICStoreArtworkInfo *_imageArtworkInfo;	// 16 = 0x10
    ICStoreVideoArtworkInfo *_videoArtworkInfo;	// 24 = 0x18
    NSString *_cropStyle;	// 32 = 0x20
    NSString *_format;	// 40 = 0x28
    NSString *_sourceEditorialArtworkKind;	// 48 = 0x30
    NSURL *_artworkURL;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002c9271
+ (id)tokenWithVideoArtworkInfo:(id)arg1;	// IMP=0x00000000002c9205
+ (id)tokenWithImageArtworkInfo:(id)arg1;	// IMP=0x00000000002c919c
- (void).cxx_destruct;	// IMP=0x00000000002c9148
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) NSString *sourceEditorialArtworkKind; // @synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *cropStyle; // @synthesize cropStyle=_cropStyle;
@property(copy, nonatomic) ICStoreVideoArtworkInfo *videoArtworkInfo; // @synthesize videoArtworkInfo=_videoArtworkInfo;
@property(copy, nonatomic) ICStoreArtworkInfo *imageArtworkInfo; // @synthesize imageArtworkInfo=_imageArtworkInfo;
@property(nonatomic) long long artworkInfoType; // @synthesize artworkInfoType=_artworkInfoType;
- (id)stringRepresentation;	// IMP=0x00000000002c9036
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c8fb6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002c8db4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002c8cdc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c8bba
- (id)init;	// IMP=0x00000000002c8b55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

