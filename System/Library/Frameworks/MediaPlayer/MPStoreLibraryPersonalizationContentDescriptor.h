//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject
{
    MPModelObject *_model;	// 8 = 0x8
    long long _personalizationStyle;	// 16 = 0x10
}

+ (id)_lightweightPersonalizationPropertiesForLyrics;	// IMP=0x0000000000296565
+ (id)_lightweightPersonalizationPropertiesForStoreAsset;	// IMP=0x0000000000296496
+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;	// IMP=0x00000000002963d2
+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)arg1;	// IMP=0x0000000000295a35
- (void).cxx_destruct;	// IMP=0x000000000029671c
@property(readonly, nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property(readonly, nonatomic) MPModelObject *model; // @synthesize model=_model;
- (id)description;	// IMP=0x0000000000296668
- (id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2;	// IMP=0x0000000000296608

@end
