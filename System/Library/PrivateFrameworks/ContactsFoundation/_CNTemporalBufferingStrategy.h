//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/_CNBufferingStrategy-Protocol.h>

@class NSString;
@protocol CNCancelable, CNScheduler;

@interface _CNTemporalBufferingStrategy : NSObject <_CNBufferingStrategy>
{
    double _interval;	// 8 = 0x8
    id <CNScheduler> _scheduler;	// 16 = 0x10
    id <CNCancelable> _sendToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000071da4
@property(retain) id <CNCancelable> sendToken; // @synthesize sendToken=_sendToken;
- (void)bufferDidSendResults:(id)arg1;	// IMP=0x0000000000071d27
- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;	// IMP=0x0000000000071bda
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2;	// IMP=0x0000000000071b4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

