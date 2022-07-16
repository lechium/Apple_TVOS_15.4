//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSObject, NSString;
@protocol OS_xpc_object;

@interface SSVShowDialogRequest <SSXPCCoding>
{
    NSObject<OS_xpc_object> *_dialog;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001638b0
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedDialog; // @synthesize encodedDialog=_dialog;
- (id)copyXPCEncoding;	// IMP=0x0000000000163865
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000001637e4
- (void)startWithDialogResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000163534
- (id)initWithEncodedDialog:(id)arg1;	// IMP=0x00000000001634c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
