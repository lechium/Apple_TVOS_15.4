//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPhotoInfoProvider-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEODefaultPhotoInfoProvider : NSObject <GEOPhotoInfoProvider>
{
    NSArray *_sortedPhotoInfos;	// 8 = 0x8
}

+ (id)sortedPhotoInfoFromPhotoVersions:(id)arg1;	// IMP=0x00000000011ccb17
- (void).cxx_destruct;	// IMP=0x00000000011cd518
- (int)designatedURLType;	// IMP=0x00000000011cd510
- (id)bestPhotoForSize:(struct CGSize)arg1 options:(id)arg2;	// IMP=0x00000000011cd22e
- (id)largestPhoto;	// IMP=0x00000000011cd218
- (double)sizeRatio;	// IMP=0x00000000011cd178
- (id)initWithPhotoContent:(id)arg1;	// IMP=0x00000000011ccf7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
