//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSXPCConnection;

@interface _TtC10CoreParsec15PARSearchClient : NSObject
{
    MISSING_TYPE *sessions;	// 8 = 0x8
    MISSING_TYPE *imageLoader;	// 16 = 0x10
    MISSING_TYPE *receivingStreamDelegate;	// 24 = 0x18
    MISSING_TYPE *queue;	// 40 = 0x28
    MISSING_TYPE *connection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000220f3
- (void)updateParametersForSmartSearchV1:(id)arg1 smartSearchV2:(id)arg2;	// IMP=0x0000000000028385
- (void)clearCompletionsFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000281a3
- (void)getImageMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027cfc
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000276f1
- (void)listSessions:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027210
- (void)reportFeedback:(id)arg1 feedback:(id)arg2 queryId:(unsigned long long)arg3;	// IMP=0x0000000000026fd7
- (unsigned long long)request:(id)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026ee9
- (void)forceFetchBag:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023fbb
- (void)bag:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000231fe
- (void)dealloc;	// IMP=0x00000000000220d6
- (id)init;	// IMP=0x0000000000021d82
@property(nonatomic, readonly) NSXPCConnection *connection; // @synthesize connection;

@end

