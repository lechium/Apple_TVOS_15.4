//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSSecureCoding-Protocol.h>

@class PGAudioAssetFilter, PGCustomFoodieAssetFilter, PGPeopleAssetFilter, PGSceneAssetFilter, PGSocialGroupAssetFilter;

@interface PGAssetCollectionFeatureDefinition : NSObject <NSSecureCoding>
{
    PGSceneAssetFilter *_sceneAssetFilter;	// 8 = 0x8
    PGPeopleAssetFilter *_peopleAssetFilter;	// 16 = 0x10
    PGSocialGroupAssetFilter *_socialGroupAssetFilter;	// 24 = 0x18
    PGAudioAssetFilter *_audioAssetFilter;	// 32 = 0x20
    PGCustomFoodieAssetFilter *_customAssetFilter;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003dd275
- (void).cxx_destruct;	// IMP=0x00000000003dd22c
@property(readonly, nonatomic) PGCustomFoodieAssetFilter *customAssetFilter; // @synthesize customAssetFilter=_customAssetFilter;
@property(readonly, nonatomic) PGAudioAssetFilter *audioAssetFilter; // @synthesize audioAssetFilter=_audioAssetFilter;
@property(readonly, nonatomic) PGSocialGroupAssetFilter *socialGroupAssetFilter; // @synthesize socialGroupAssetFilter=_socialGroupAssetFilter;
@property(readonly, nonatomic) PGPeopleAssetFilter *peopleAssetFilter; // @synthesize peopleAssetFilter=_peopleAssetFilter;
@property(readonly, nonatomic) PGSceneAssetFilter *sceneAssetFilter; // @synthesize sceneAssetFilter=_sceneAssetFilter;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003dcef2
- (id)description;	// IMP=0x00000000003dccd1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003dcb7d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003dc7a8
- (id)initWithAssetFilterByName:(id)arg1;	// IMP=0x00000000003dc5d9

@end
