//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, NSURL;

@interface SSAskPermissionActionRequest <SSXPCCoding>
{
    NSURL *_url;	// 56 = 0x38
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000aeafa
- (id)copyXPCEncoding;	// IMP=0x00000000000aea4c
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ae8f4
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000ae8b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

