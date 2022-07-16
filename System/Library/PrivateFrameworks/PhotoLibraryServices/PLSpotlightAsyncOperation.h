//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface PLSpotlightAsyncOperation : NSOperation
{
    unsigned long long _operationState;	// 8 = 0x8
}

- (_Bool)isAsynchronous;	// IMP=0x00000000004a7607
- (_Bool)isFinished;	// IMP=0x00000000004a75ed
- (_Bool)isExecuting;	// IMP=0x00000000004a75d3
- (void)cancel;	// IMP=0x00000000004a75bc
- (void)main;	// IMP=0x00000000004a7542
- (void)start;	// IMP=0x00000000004a74e9
- (id)_keyObserverStringForOperationState:(unsigned long long)arg1;	// IMP=0x00000000004a74b5
@property unsigned long long operationState; // @synthesize operationState=_operationState;

@end

