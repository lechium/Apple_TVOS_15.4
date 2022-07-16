//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSDate, NSDictionary, NSManagedObjectID, NSString, PHObjectPlaceholder;

@interface PHQuestionChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
}

+ (void)deleteQuestions:(id)arg1;	// IMP=0x0000000000142521
+ (id)changeRequestForQuestion:(id)arg1;	// IMP=0x0000000000142459
+ (id)creationRequestForQuestionWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7 creationDate:(id)arg8;	// IMP=0x000000000014232b
@property(copy, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) NSDictionary *additionalInfo;
@property(copy, nonatomic) NSString *entityIdentifier;
@property(nonatomic) double score;
@property(nonatomic) unsigned short displayType;
@property(nonatomic) unsigned short entityType;
@property(nonatomic) unsigned short state;
@property(nonatomic) unsigned short type;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x0000000000141483
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x00000000001413f8
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x0000000000141332
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000141085
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedQuestion;
- (id)initForNewObject;	// IMP=0x0000000000140fae

// Remaining properties
@property(readonly, nonatomic) long long accessScopeOptionsRequirement;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) _Bool shouldPerformConcurrentWork;
@property(readonly) Class superclass;

@end

