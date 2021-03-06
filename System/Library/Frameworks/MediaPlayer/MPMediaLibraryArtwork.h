//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject
{
    struct os_unfair_lock_s _stateLock;	// 8 = 0x8
    NSArray *_validSizes;	// 16 = 0x10
    MPMediaLibraryArtworkRequest *_artworkRequest;	// 24 = 0x18
    ML3Artwork *_artwork;	// 32 = 0x20
}

+ (void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b36d7
+ (void)cancelFetchingArtworkForRequest:(id)arg1;	// IMP=0x00000000001b354b
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b32db
+ (id)availableArtworkWithRequest:(id)arg1;	// IMP=0x00000000001b3156
+ (_Bool)needsToFetchArtworkForRequest:(id)arg1;	// IMP=0x00000000001b3025
+ (_Bool)artworkExistsForRequest:(id)arg1;	// IMP=0x00000000001b2f81
- (void).cxx_destruct;	// IMP=0x00000000001b2f50
@property(readonly, nonatomic) struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) ML3Artwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) __weak MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
@property(copy, nonatomic) NSDictionary *effectsMetadata;
@property(readonly, nonatomic) NSArray *validSizes; // @synthesize validSizes=_validSizes;
- (id)imageFileURLForEffect:(id)arg1;	// IMP=0x00000000001b2bf2
- (id)imageFileURLForSize:(struct CGSize)arg1;	// IMP=0x00000000001b2b68
@property(readonly, copy, nonatomic) NSURL *originalFileURL;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b2a8d
- (unsigned long long)hash;	// IMP=0x00000000001b2a49
- (id)init;	// IMP=0x00000000001b2a0e

@end

