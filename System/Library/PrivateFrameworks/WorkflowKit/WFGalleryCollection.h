//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSMutableCopying-Protocol.h>
#import <WorkflowKit/WFCloudKitItem-Protocol.h>
#import <WorkflowKit/WFSortableGalleryObject-Protocol.h>

@class CKRecordID, NSArray, NSData, NSDate, NSString;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>
{
    CKRecordID *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_collectionDescription;	// 24 = 0x18
    NSArray *_workflows;	// 32 = 0x20
    long long _minVersion;	// 40 = 0x28
    NSArray *_supportedIdioms;	// 48 = 0x30
    NSDate *_modifiedAt;	// 56 = 0x38
    NSString *_language;	// 64 = 0x40
    CKRecordID *_base;	// 72 = 0x48
    NSString *_persistentIdentifier;	// 80 = 0x50
}

+ (id)properties;	// IMP=0x0000000000111693
+ (id)recordType;	// IMP=0x0000000000111686
- (void).cxx_destruct;	// IMP=0x000000000011140f
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt=_modifiedAt;
@property(copy, nonatomic) NSArray *supportedIdioms; // @synthesize supportedIdioms=_supportedIdioms;
@property(readonly, nonatomic) long long minVersion; // @synthesize minVersion=_minVersion;
@property(readonly, nonatomic) NSArray *workflows; // @synthesize workflows=_workflows;
@property(readonly, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011103f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000110d6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000110474
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;	// IMP=0x0000000000110463
- (unsigned long long)referenceActionForKey:(id)arg1;	// IMP=0x0000000000110443

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *recordSystemFieldsData;
@property(readonly) Class superclass;

@end
