//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSVApplicationCapabilitiesRequest <SSXPCCoding>
{
    NSString *_bundleID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000164d44
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)copyXPCEncoding;	// IMP=0x0000000000164ce8
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000164c38
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000164b91
- (void)startWithCapabilitiesResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000164946

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

