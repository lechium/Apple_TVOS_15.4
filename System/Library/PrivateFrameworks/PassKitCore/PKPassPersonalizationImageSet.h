//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKImage;

@interface PKPassPersonalizationImageSet
{
    PKImage *_logoImage;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000038c1d3
+ (_Bool)shouldCache;	// IMP=0x000000000038c1ae
+ (long long)imageSetType;	// IMP=0x000000000038c1a3
- (void).cxx_destruct;	// IMP=0x000000000038c3ea
@property(retain, nonatomic) PKImage *logoImage; // @synthesize logoImage=_logoImage;
- (unsigned long long)hash;	// IMP=0x000000000038c376
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038c30d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000038c28a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038c1db
- (void)preheatImages;	// IMP=0x000000000038c1b6
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;	// IMP=0x000000000038c09f

@end

