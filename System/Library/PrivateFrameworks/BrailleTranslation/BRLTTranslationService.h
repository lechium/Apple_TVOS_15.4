//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BRLTTranslationService : NSObject
{
    _Bool _invalid;	// 8 = 0x8
    _Bool _interrupted;	// 9 = 0x9
    NSString *_serviceIdentifier;	// 16 = 0x10
    CDUnknownBlockType _invalidationHandler;	// 24 = 0x18
    NSXPCConnection *_queue_connection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)connections;	// IMP=0x0000000000003c9a
+ (id)connectionForLoopbackService:(id)arg1;	// IMP=0x0000000000003b88
+ (id)connectionForServiceIdentifier:(id)arg1;	// IMP=0x0000000000003ad1
+ (id)serviceForIdentifier:(id)arg1 loopback:(_Bool)arg2;	// IMP=0x00000000000038d0
+ (id)serviceForIdentifier:(id)arg1;	// IMP=0x00000000000038bc
- (void).cxx_destruct;	// IMP=0x0000000000004baa
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *queue_connection; // @synthesize queue_connection=_queue_connection;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (id)description;	// IMP=0x0000000000004a37
- (void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004866
- (void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004600
- (void)_queue_loadBundle;	// IMP=0x0000000000004562
- (id)_queue_serviceProxy;	// IMP=0x0000000000004436
- (void)_queue_invalidate;	// IMP=0x000000000000433f
- (void)_queue_resume;	// IMP=0x0000000000003ee2
@property(readonly, nonatomic, getter=isLoopback) _Bool loopback;
- (id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000003cff

@end

