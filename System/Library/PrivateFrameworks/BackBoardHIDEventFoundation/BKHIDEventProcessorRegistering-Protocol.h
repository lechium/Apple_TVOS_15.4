//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardHIDEventFoundation/NSObject-Protocol.h>

@protocol BKHIDEventProcessor;

@protocol BKHIDEventProcessorRegistering <NSObject>
- (id <BKHIDEventProcessor>)eventProcessorOfClass:(Class)arg1;
- (void)addEventProcessor:(id <BKHIDEventProcessor>)arg1;
@end

