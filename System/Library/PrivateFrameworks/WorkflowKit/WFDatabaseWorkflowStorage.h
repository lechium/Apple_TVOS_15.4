//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFWorkflowStorage-Protocol.h>

@class NSString, WFDatabase, WFWorkflowReference;

@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage>
{
    WFWorkflowReference *_descriptor;	// 8 = 0x8
    WFDatabase *_database;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014942c
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) WFWorkflowReference *descriptor; // @synthesize descriptor=_descriptor;
- (_Bool)reloadRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000149369
- (_Bool)saveRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001492cb
- (id)reference;	// IMP=0x00000000001492b9
- (id)initWithDescriptor:(id)arg1 database:(id)arg2;	// IMP=0x0000000000149211

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

