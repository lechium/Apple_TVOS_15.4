//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFObject-Protocol.h>

@class HMIPerson, NSArray, NSSet, NSString;
@protocol HMIPersonManagerDataSource;

@interface HMIFetchPersonFaceCropsOperation : HMFOperation <HMFObject, HMFLogging>
{
    id <HMIPersonManagerDataSource> _dataSource;	// 8 = 0x8
    HMIPerson *_person;	// 16 = 0x10
    NSSet *_personFaceCrops;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000000a3bb6
+ (id)shortDescription;	// IMP=0x00000000000a3b78
- (void).cxx_destruct;	// IMP=0x00000000000a3c02
@property(readonly) NSSet *personFaceCrops; // @synthesize personFaceCrops=_personFaceCrops;
@property(readonly) HMIPerson *person; // @synthesize person=_person;
@property(readonly) id <HMIPersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)mainInsideAutoreleasePool;	// IMP=0x00000000000a3874
- (void)main;	// IMP=0x00000000000a3846
- (id)initWithDataSource:(id)arg1 person:(id)arg2;	// IMP=0x00000000000a376b

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

