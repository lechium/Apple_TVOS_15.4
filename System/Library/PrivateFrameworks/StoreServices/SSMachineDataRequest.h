//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface SSMachineDataRequest <SSXPCCoding>
{
    NSNumber *_accountID;	// 56 = 0x38
    NSData *_actionData;	// 64 = 0x40
    NSString *_actionName;	// 72 = 0x48
    _Bool _allowsBootstrapCellularData;	// 80 = 0x50
    long long _protocolVersion;	// 88 = 0x58
    NSString *_userAgent;	// 96 = 0x60
    _Bool _waitsForPurchaseOperations;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000012418d
- (id)copyXPCEncoding;	// IMP=0x0000000000123ffb
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000123e6a
- (void)startWithDetailedCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123bbd
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123b16
@property _Bool waitsForPurchaseOperations;
@property(copy) NSString *userAgent;
@property long long protocolVersion;
@property _Bool allowsBootstrapCellularData;
@property(copy) NSString *actionName;
@property(copy) NSData *actionData;
@property(copy) NSNumber *accountIdentifier;
- (id)initWithURLResponse:(id)arg1;	// IMP=0x0000000000122da8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
