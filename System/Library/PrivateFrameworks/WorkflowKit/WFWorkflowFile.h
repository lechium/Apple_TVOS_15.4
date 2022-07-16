//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSItemProviderWriting-Protocol.h>
#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowQuarantine;

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting>
{
    NSMutableDictionary *_rootObject;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    NSDate *_modificationDate;	// 32 = 0x20
    WFWorkflowQuarantine *_quarantine;	// 40 = 0x28
    WFFileRepresentation *_file;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
}

+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x00000000000c1d2f
- (void).cxx_destruct;	// IMP=0x00000000000c1b5e
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
@property(retain, nonatomic) WFWorkflowQuarantine *quarantine; // @synthesize quarantine=_quarantine;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDictionary *rootObject; // @synthesize rootObject=_rootObject;
- (_Bool)migrateRootObject;	// IMP=0x00000000000c1956
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c18a8
- (_Bool)writeToOutputStream:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000c170b
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1627
- (id)fileDataWithError:(id *)arg1;	// IMP=0x00000000000c160d
- (id)fileDataWithFormat:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000c151a
- (_Bool)writeToFileURL:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000c14aa
- (id)writeToDiskWithError:(id *)arg1;	// IMP=0x00000000000c1490
- (id)writeToDiskWithFormat:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000c1276
@property(copy, nonatomic) NSString *minimumClientVersion;
@property(copy, nonatomic) NSString *lastMigratedClientVersion;
@property(copy, nonatomic) NSArray *importQuestions;
@property(copy, nonatomic) NSArray *actions;
@property(nonatomic) _Bool hasOutputFallback;
@property(nonatomic) _Bool hasShortcutInputVariables;
@property(copy, nonatomic) NSArray *outputClasses;
@property(copy, nonatomic) NSDictionary *noInputBehavior;
@property(copy, nonatomic) NSArray *inputClasses;
@property(copy, nonatomic) NSArray *quickActionSurfacesForSharing;
@property(copy, nonatomic) NSArray *workflowTypes;
@property(retain, nonatomic) WFWorkflowIcon *icon;
- (id)recordRepresentationWithError:(id *)arg1;	// IMP=0x00000000000c0714
@property(readonly, nonatomic) unsigned long long estimatedSize;
- (id)descriptor;	// IMP=0x00000000000c05c3
- (id)initWithDescriptor:(id)arg1 performMigration:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000c023e
- (id)initWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c0224
- (id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(_Bool)arg3;	// IMP=0x00000000000c009e
- (id)initWithDictionary:(id)arg1 name:(id)arg2;	// IMP=0x00000000000c0086
- (id)initWithFileData:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bffe1
- (id)init;	// IMP=0x00000000000bff9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

