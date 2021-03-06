//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, NSUUID, TVSWiFiInterface, TVSWiFiNetwork;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TVSWiFiNetworkAssociationOperation : NSOperation
{
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 8 = 0x8
    TVSWiFiInterface *_interface;	// 16 = 0x10
    TVSWiFiNetwork *_network;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    NSUUID *_token;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000072117
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSUUID *token; // @synthesize token=_token;
- (id)_interface;	// IMP=0x00000000000720cf
- (_Bool)_isDirected;	// IMP=0x00000000000720b2
- (void)cancel;	// IMP=0x0000000000072031
- (void)operationCompletedWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000071f96
- (void)attemptAssociation;	// IMP=0x0000000000071f90
- (void)main;	// IMP=0x0000000000071e96
- (id)initWithInterface:(id)arg1 network:(id)arg2 password:(id)arg3;	// IMP=0x0000000000071d89

@end

