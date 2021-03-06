//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXAssetVariationOption : NSObject <NSCopying>
{
    _Bool _recommended;	// 8 = 0x8
    _Bool _current;	// 9 = 0x9
    long long _variationType;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
}

+ (id)_localizedNameForVariationType:(long long)arg1;	// IMP=0x0000000000772647
+ (id)variationOptionWithType:(long long)arg1 recommended:(_Bool)arg2 current:(_Bool)arg3;	// IMP=0x00000000007725da
- (void).cxx_destruct;	// IMP=0x00000000007725ca
@property(readonly, nonatomic, getter=isCurrent) _Bool current; // @synthesize current=_current;
@property(readonly, nonatomic, getter=isRecommended) _Bool recommended; // @synthesize recommended=_recommended;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) long long variationType; // @synthesize variationType=_variationType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000772599
- (unsigned long long)hash;	// IMP=0x0000000000772516
- (_Bool)isEqualToVariationOption:(id)arg1;	// IMP=0x0000000000772470
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000772413

@end

