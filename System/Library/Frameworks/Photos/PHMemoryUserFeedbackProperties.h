//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHUserFeedback;

@interface PHMemoryUserFeedbackProperties
{
    PHUserFeedback *_userFeedback;	// 16 = 0x10
}

+ (id)propertiesToFetch;	// IMP=0x0000000000078477
+ (id)propertiesToSortBy;	// IMP=0x00000000000783dc
+ (id)entityName;	// IMP=0x00000000000783cf
+ (_Bool)isToMany;	// IMP=0x00000000000783c7
+ (id)keyPathToPrimaryObject;	// IMP=0x00000000000783ba
+ (id)keyPathFromPrimaryObject;	// IMP=0x00000000000783ad
+ (id)propertySetName;	// IMP=0x00000000000783a0
- (void).cxx_destruct;	// IMP=0x0000000000077e61
@property(readonly, nonatomic) PHUserFeedback *userFeedback; // @synthesize userFeedback=_userFeedback;
- (id)initWithFetchDictionary:(id)arg1 memory:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x0000000000077ca6

@end
