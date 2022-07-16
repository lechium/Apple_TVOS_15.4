//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSEntityDescription, NSString;

@interface NSBatchInsertRequest
{
    id _entity;	// 8 = 0x8
    NSArray *_objectsToInsert;	// 16 = 0x10
    CDUnknownBlockType _insertDictionaryHandler;	// 24 = 0x18
    CDUnknownBlockType _insertManagedObjectHandler;	// 32 = 0x20
    struct _insertRequestFlags {
        unsigned int resultType:2;
        unsigned int entityIsName:1;
        unsigned int secureOperation:1;
        unsigned int _RESERVED:28;
    } _flags;	// 40 = 0x28
}

+ (id)batchInsertRequestWithEntityName:(id)arg1 managedObjectHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010883b
+ (id)batchInsertRequestWithEntityName:(id)arg1 dictionaryHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001087ff
+ (id)batchInsertRequestWithEntityName:(id)arg1 objects:(id)arg2;	// IMP=0x00000000001087c3
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 withPolicy:(id)arg3;	// IMP=0x0000000000003891
@property(copy) NSArray *objectsToInsert; // @synthesize objectsToInsert=_objectsToInsert;
@property(copy) CDUnknownBlockType managedObjectHandler;
@property(copy) CDUnknownBlockType dictionaryHandler;
- (void)_resolveEntityWithContext:(id)arg1;	// IMP=0x0000000000109013
- (_Bool)_secureOperation;	// IMP=0x0000000000108ffe
- (void)_setSecureOperation:(_Bool)arg1;	// IMP=0x0000000000108fe5
@property unsigned long long resultType;
- (unsigned long long)requestType;	// IMP=0x0000000000108fac
@property(readonly) NSEntityDescription *entity;
@property(readonly, copy) NSString *entityName;
- (id)description;	// IMP=0x0000000000108d8b
- (void)dealloc;	// IMP=0x0000000000108ce6
- (id)initWithEntityName:(id)arg1 managedObjectHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000108c50
- (id)initWithEntityName:(id)arg1 dictionaryHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000108bba
- (id)initWithEntity:(id)arg1 managedObjectHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000108b2c
- (id)initWithEntity:(id)arg1 dictionaryHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000108a9e
- (id)initWithEntity:(id)arg1 objects:(id)arg2;	// IMP=0x00000000001089f8
- (id)initWithEntityName:(id)arg1 objects:(id)arg2;	// IMP=0x000000000010893b
- (id)init;	// IMP=0x0000000000108877
- (id)encodeForXPC;	// IMP=0x0000000000003781

@end

