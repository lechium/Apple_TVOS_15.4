//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMeaningCriteria-Protocol.h>

@class NSString;

@interface PGMeaningPublicEventCriteria : NSObject <PGMeaningCriteria>
{
    NSString *_publicEventCategory;	// 8 = 0x8
    NSString *_publicEventCategoryNameString;	// 16 = 0x10
}

+ (id)_publicEventCategoryForPublicEventCategoryName:(id)arg1;	// IMP=0x00000000004a96ea
+ (id)criteriaWithDictionary:(id)arg1;	// IMP=0x00000000004a9628
+ (id)criteriaKey;	// IMP=0x00000000004a961b
- (void).cxx_destruct;	// IMP=0x00000000004a9e63
@property(retain, nonatomic) NSString *publicEventCategoryNameString; // @synthesize publicEventCategoryNameString=_publicEventCategoryNameString;
@property(retain, nonatomic) NSString *publicEventCategory; // @synthesize publicEventCategory=_publicEventCategory;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;	// IMP=0x00000000004a9c9d
- (_Bool)passesForAssets:(id)arg1;	// IMP=0x00000000004a9c95
- (_Bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;	// IMP=0x00000000004a9b33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
