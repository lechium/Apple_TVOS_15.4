//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFWorkflowStorage-Protocol.h>

@class NSString, WFDatabaseProxy, WFWorkflowReference;

@interface WFDatabaseProxyWorkflowStorage : NSObject <WFWorkflowStorage>
{
    WFWorkflowReference *_reference;	// 8 = 0x8
    WFDatabaseProxy *_database;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024b032
@property(readonly, nonatomic) WFDatabaseProxy *database; // @synthesize database=_database;
@property(readonly, nonatomic) WFWorkflowReference *reference; // @synthesize reference=_reference;
- (_Bool)reloadRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024b016
- (_Bool)saveRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024b00e
- (id)initWithReference:(id)arg1 database:(id)arg2;	// IMP=0x000000000024af66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

