//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSData, NSSet, NSString, WFCoreDataRunEvent, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>
{
}

+ (id)recordPropertyMap;	// IMP=0x0000000000094234
+ (id)fetchRequest;	// IMP=0x000000000025e0cc
- (id)trigger;	// IMP=0x0000000000091eaa
- (id)descriptor;	// IMP=0x0000000000091d3d

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(retain, nonatomic) NSSet *events; // @dynamic events;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) int notificationLevel; // @dynamic notificationLevel;
@property(retain, nonatomic) WFCoreDataRunEvent *runEvents; // @dynamic runEvents;
@property(retain, nonatomic) WFCoreDataWorkflow *shortcut; // @dynamic shortcut;
@property(nonatomic) _Bool shouldNotify; // @dynamic shouldNotify;
@property(nonatomic) _Bool shouldPrompt; // @dynamic shouldPrompt;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSData *suggestionData; // @dynamic suggestionData;
@property(readonly) Class superclass;

@end

