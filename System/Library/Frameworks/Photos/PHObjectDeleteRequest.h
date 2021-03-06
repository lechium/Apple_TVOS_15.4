//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHDeleteChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString;

@interface PHObjectDeleteRequest <PHDeleteChangeRequest>
{
    NSString *_uuid;	// 16 = 0x10
    NSManagedObjectID *_objectID;	// 24 = 0x18
    _Bool _clientEntitled;	// 32 = 0x20
    NSString *_clientName;	// 40 = 0x28
}

+ (id)_deleteRequestsForObjects:(id)arg1;	// IMP=0x0000000000043f14
+ (id)deleteRequestsForObjects:(id)arg1 ofType:(Class)arg2 forSelector:(SEL)arg3;	// IMP=0x0000000000043e80
+ (id)deleteRequestForObject:(id)arg1;	// IMP=0x0000000000043dd9
- (void).cxx_destruct;	// IMP=0x0000000000043d97
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
- (id)uuid;	// IMP=0x0000000000043d54
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x0000000000043cf3
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000043ceb
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x0000000000043c14
- (id)init;	// IMP=0x0000000000043bd0
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x0000000000043a60
- (id)initForNewObject;	// IMP=0x0000000000043a1c
- (id)initWithUUID:(id)arg1 request:(id)arg2 objectID:(id)arg3;	// IMP=0x000000000004394e
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x00000000000438b7

// Remaining properties
@property(readonly, nonatomic) long long accessScopeOptionsRequirement;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

