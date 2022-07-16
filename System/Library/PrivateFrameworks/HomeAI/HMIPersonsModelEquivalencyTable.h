//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMIPersonsModelEquivalencyTable : HMFObject <HMFLogging>
{
    NSDictionary *_personToEquivalencyCell;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000000c5756
- (void).cxx_destruct;	// IMP=0x00000000000c5776
@property(readonly) NSDictionary *personToEquivalencyCell; // @synthesize personToEquivalencyCell=_personToEquivalencyCell;
- (id)initWith;	// IMP=0x00000000000c5727
- (id)equivalencyCellForPerson:(id)arg1;	// IMP=0x00000000000c56a4
- (_Bool)facesAreSamePersonFromSet:(id)arg1 andSet:(id)arg2 distanceThreshold:(double)arg3 percentMatchingThreshold:(double)arg4;	// IMP=0x00000000000c52d8
- (_Bool)facesAreSamePersonFromSet:(id)arg1 andSet:(id)arg2;	// IMP=0x00000000000c52b6
- (id)initWithPersonsModels:(id)arg1 userDefinedPersonLinks:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c3962

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
