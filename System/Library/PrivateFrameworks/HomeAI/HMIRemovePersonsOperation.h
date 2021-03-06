//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class NSSet;
@protocol HMIHomePersonManagerDataSource;

@interface HMIRemovePersonsOperation : HMFOperation
{
    id <HMIHomePersonManagerDataSource> _dataSource;	// 8 = 0x8
    NSSet *_personUUIDs;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000006a4ac
- (void).cxx_destruct;	// IMP=0x000000000006a4e2
@property(readonly) NSSet *personUUIDs; // @synthesize personUUIDs=_personUUIDs;
@property(readonly) id <HMIHomePersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)mainInsideAutoreleasePool;	// IMP=0x000000000006a190
- (void)main;	// IMP=0x000000000006a162
- (id)initWithDataSource:(id)arg1 personUUIDs:(id)arg2;	// IMP=0x000000000006a0b8

@end

