//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PPSpotlightScoringFeatureVector : NSObject
{
    NSMutableSet *_features;	// 8 = 0x8
}

+ (id)featureVectorVersion;	// IMP=0x00000000000368ee
+ (id)decodeFeatureVectorFromData:(id)arg1 version:(id)arg2;	// IMP=0x0000000000036305
- (void).cxx_destruct;	// IMP=0x0000000000036176
- (id)qidStrings;	// IMP=0x00000000000360e4
- (_Bool)containsQidString:(id)arg1;	// IMP=0x000000000003607c
- (void)addQidString:(id)arg1;	// IMP=0x000000000003601b
- (id)encodeAsData;	// IMP=0x0000000000035d8d
- (id)init;	// IMP=0x0000000000035d37

@end

