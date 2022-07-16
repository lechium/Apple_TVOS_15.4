//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSVCloudServiceAPITokenRequest <SSXPCCoding>
{
    NSString *_clientToken;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009cfa9
@property(readonly, copy, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
- (id)copyXPCEncoding;	// IMP=0x000000000009cf5e
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000009ceae
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009cbfb
- (id)initWithClientToken:(id)arg1;	// IMP=0x000000000009cb81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

