//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue
{
}

+ (id)sharedInstance;	// IMP=0x000000000003ac19
- (void)_noteQueueDidUnlock;	// IMP=0x000000000003b084
- (void)_noteQueueDidLock;	// IMP=0x000000000003b043
- (void)_noteWillExecuteEvent:(id)arg1;	// IMP=0x000000000003afe1
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003af79
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000003af11
- (_Bool)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;	// IMP=0x000000000003ae0d
- (void)executeOrPrependEvents:(id)arg1;	// IMP=0x000000000003adf9
- (void)executeOrPrependEvent:(id)arg1;	// IMP=0x000000000003ad4f
- (void)executeOrAppendEvent:(id)arg1;	// IMP=0x000000000003aca0

@end

