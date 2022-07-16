//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface APSOutgoingItem : NSObject
{
    CDUnknownBlockType _sendBlock;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    NSDate *_timestamp;	// 32 = 0x20
    long long _sendInterface;	// 40 = 0x28
    _Bool _sent;	// 48 = 0x30
    _Bool _hasTimedOut;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x0020000000081b2b
@property(nonatomic) long long sendInterface; // @synthesize sendInterface=_sendInterface;
@property(readonly, copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)setHasTimedOut:(_Bool)arg1;	// IMP=0x0010000000081ae5
- (_Bool)hasTimedOut;	// IMP=0x0010000000081adc
@property(nonatomic) _Bool sent; // @synthesize sent=_sent;
- (id)initWithSendBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 timeout:(double)arg3;	// IMP=0x00100000000819f8

@end

