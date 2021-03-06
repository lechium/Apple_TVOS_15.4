//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHCollectionPresentationHints-Protocol.h>

@class NSDictionary, NSString;

@interface PHMemoryPresentationHints : NSObject <PHCollectionPresentationHints>
{
    unsigned long long _recommendedMoods;	// 8 = 0x8
    unsigned long long _forbiddenMoods;	// 16 = 0x10
    unsigned long long _socialRelationships;	// 24 = 0x18
    long long _tripType;	// 32 = 0x20
    NSDictionary *_musicGenreDistribution;	// 40 = 0x28
    long long _qualityCategory;	// 48 = 0x30
}

+ (long long)tripTypeFromMemory:(id)arg1;	// IMP=0x0000000000150896
+ (unsigned long long)socialRelationshipsFromMemory:(id)arg1;	// IMP=0x000000000015088e
- (void).cxx_destruct;	// IMP=0x000000000015087e
@property(readonly, nonatomic) long long qualityCategory; // @synthesize qualityCategory=_qualityCategory;
@property(readonly, nonatomic) NSDictionary *musicGenreDistribution; // @synthesize musicGenreDistribution=_musicGenreDistribution;
@property(readonly, nonatomic) long long tripType; // @synthesize tripType=_tripType;
@property(readonly, nonatomic) unsigned long long socialRelationships; // @synthesize socialRelationships=_socialRelationships;
@property(readonly, nonatomic) unsigned long long forbiddenMoods; // @synthesize forbiddenMoods=_forbiddenMoods;
@property(readonly, nonatomic) unsigned long long recommendedMoods; // @synthesize recommendedMoods=_recommendedMoods;
@property(readonly, copy) NSString *description;
- (id)initWithMemory:(id)arg1;	// IMP=0x0000000000150526

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

