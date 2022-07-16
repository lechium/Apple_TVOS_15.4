//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol PLMomentGenerationDataManagement;

@interface PLFrequentLocationManager : NSObject
{
    _Bool _invalidateCurrentFrequentLocations;	// 8 = 0x8
    id <PLMomentGenerationDataManagement> _momentGenerationDataManager;	// 16 = 0x10
    NSSet *_currentFrequentLocations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000273d05
@property(retain, nonatomic) NSSet *currentFrequentLocations; // @synthesize currentFrequentLocations=_currentFrequentLocations;
@property(nonatomic) __weak id <PLMomentGenerationDataManagement> momentGenerationDataManager; // @synthesize momentGenerationDataManager=_momentGenerationDataManager;
- (id)_createFrequentLocationsWithAllMoments:(id)arg1;	// IMP=0x0000000000273981
- (void)invalidateCurrentFrequentLocations;	// IMP=0x0000000000273977
- (_Bool)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1;	// IMP=0x00000000002735c9
- (id)initWithMomentGenerationDataManager:(id)arg1;	// IMP=0x000000000027351d

@end

