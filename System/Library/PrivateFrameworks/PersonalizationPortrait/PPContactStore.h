//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSString, PPClientFeedbackHelper, PPRecordMonitoringHelper;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPRecordMonitoringHelper *_monitoringHelper;	// 8 = 0x8
    PPClientFeedbackHelper *_clientFeedbackHelper;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002764f
- (_Bool)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027555
- (void)_loadContactNameRecordsWithDelegate:(id)arg1;	// IMP=0x00000000000274dc
- (void)_sendChangesToDelegates;	// IMP=0x0000000000027488
- (CDUnknownBlockType)_recordGenerator;	// IMP=0x000000000002747b
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027393
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000002735e
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027107
- (id)contactHandlesForSource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026f1c
- (id)contactHandlesForTopics:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026d31
- (id)upcomingRelevantContactsForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026b46
- (_Bool)iterContactNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026a65
- (_Bool)iterRankedContactsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026984
- (id)init;	// IMP=0x00000000000268e0

// Remaining properties
@property(retain, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;

@end

