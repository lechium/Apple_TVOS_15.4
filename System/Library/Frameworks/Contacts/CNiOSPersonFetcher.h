//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactsEnvironment, CNiOSPersonFetchRequest;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetcher : NSObject
{
    CNiOSPersonFetchRequest *_fetchRequest;	// 8 = 0x8
    void *_addressBook;	// 16 = 0x10
    CNContactsEnvironment *_environment;	// 24 = 0x18
}

+ (id)peopleForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000041d1b
- (void).cxx_destruct;	// IMP=0x000000000004240b
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) CNiOSPersonFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (id)sortPeople:(id)arg1;	// IMP=0x00000000000422f7
- (_Bool)shouldSortInMemory;	// IMP=0x0000000000042294
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000042011
- (id)fetchPeopleReturningMatchInfos:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000041f9b
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041ed6
- (void)dealloc;	// IMP=0x0000000000041e97
- (id)initWithAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3;	// IMP=0x0000000000041dd5

@end

