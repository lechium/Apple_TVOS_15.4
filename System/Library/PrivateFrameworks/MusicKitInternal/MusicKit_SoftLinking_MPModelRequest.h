//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelRequest;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelRequest : NSObject
{
    MPModelRequest *_underlyingRequest;	// 8 = 0x8
}

+ (id)_artistSupportedProperties;	// IMP=0x0000000000008be0
+ (id)_playlistEntrySupportedProperties;	// IMP=0x00000000000089b8
+ (id)_playlistSupportedProperties;	// IMP=0x000000000000782d
+ (id)_recentlyAddedObjectSupportedProperties;	// IMP=0x000000000000760b
+ (id)_genreSupportedProperties;	// IMP=0x00000000000074bb
+ (id)_albumSupportedProperties;	// IMP=0x00000000000062d9
+ (id)_songSupportedProperties;	// IMP=0x0000000000003fef
+ (id)_supportedPropertiesForModelType:(long long)arg1;	// IMP=0x0000000000003fa8
+ (id)defaultUnpersonalizedRequest;	// IMP=0x000000000000385c
- (void).cxx_destruct;	// IMP=0x0000000000008d1e
@property(readonly, nonatomic) MPModelRequest *_underlyingRequest;
- (id)_initWithUnderlyingRequest:(id)arg1;	// IMP=0x0000000000003f2f

@end

