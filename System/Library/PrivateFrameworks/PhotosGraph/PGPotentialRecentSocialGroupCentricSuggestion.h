//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject
{
    float _weight;	// 8 = 0x8
    NSArray *_personLocalIdentifiers;	// 16 = 0x10
    NSArray *_personWeights;	// 24 = 0x18
    NSArray *_momentLocalIdentifiers;	// 32 = 0x20
    NSArray *_assets;	// 40 = 0x28
    NSDate *_notSeenSinceDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002bab84
@property(retain, nonatomic) NSDate *notSeenSinceDate; // @synthesize notSeenSinceDate=_notSeenSinceDate;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSArray *momentLocalIdentifiers; // @synthesize momentLocalIdentifiers=_momentLocalIdentifiers;
@property(readonly, nonatomic) NSArray *personWeights; // @synthesize personWeights=_personWeights;
@property(readonly, nonatomic) NSArray *personLocalIdentifiers; // @synthesize personLocalIdentifiers=_personLocalIdentifiers;
- (id)initWithPersonLocalIdentifiers:(id)arg1 personWeights:(id)arg2 momentLocalIdentifiers:(id)arg3 weight:(float)arg4 notSeenSinceDate:(id)arg5;	// IMP=0x00000000002baa33

@end
