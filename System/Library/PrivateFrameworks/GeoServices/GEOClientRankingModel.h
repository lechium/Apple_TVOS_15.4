//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOClientRankingModel : NSObject
{
    NSArray *_features;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000011c8b5c
@property(readonly, nonatomic) NSArray *features; // @synthesize features=_features;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1;	// IMP=0x00000000011c894e
- (id)initWithFeatures:(id)arg1;	// IMP=0x00000000011c88db
- (id)init;	// IMP=0x00000000011c88b1

@end

