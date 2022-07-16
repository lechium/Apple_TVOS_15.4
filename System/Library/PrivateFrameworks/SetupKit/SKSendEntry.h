//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKSendEntry : NSObject
{
    unsigned int _xid;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    NSData *_eventData;	// 24 = 0x18
    NSString *_eventID;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    unsigned long long _queueTicks;	// 48 = 0x30
    NSString *_requestID;	// 56 = 0x38
    NSDictionary *_request;	// 64 = 0x40
    CDUnknownBlockType _responseHandler;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_timer;	// 80 = 0x50
    NSNumber *_xidObj;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000002281
@property(retain, nonatomic) NSNumber *xidObj; // @synthesize xidObj=_xidObj;
@property(nonatomic) unsigned int xid; // @synthesize xid=_xid;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSDictionary *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned long long queueTicks; // @synthesize queueTicks=_queueTicks;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

