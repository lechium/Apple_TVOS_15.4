//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSDate, NSString, WFCoreDataTrigger, WFCoreDataWorkflow;

@interface WFCoreDataRunEvent : NSManagedObject <WFRecordStorage>
{
}

+ (id)fetchRequest;	// IMP=0x000000000025e08c
- (id)descriptor;	// IMP=0x00000000000920df

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) int outcome; // @dynamic outcome;
@property(retain, nonatomic) WFCoreDataWorkflow *shortcut; // @dynamic shortcut;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(readonly) Class superclass;
@property(retain, nonatomic) WFCoreDataTrigger *trigger; // @dynamic trigger;

@end

