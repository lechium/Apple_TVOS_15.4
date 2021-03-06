//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface AXUIClientMessenger : NSObject
{
    NSString *_clientIdentifier;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
}

+ (id)clientMessengerWithIdentifier:(id)arg1;	// IMP=0x0000000000003813
- (void).cxx_destruct;	// IMP=0x0000000000003bc9
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)description;	// IMP=0x0000000000003af3
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000003a5b
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000399c
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003977
- (id)initWithClientIdentifier:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000038d9
- (id)init;	// IMP=0x000000000000389a

@end

