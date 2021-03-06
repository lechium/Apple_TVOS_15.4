//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKPrivateEmailClientProtocol-Protocol.h>

@class NSString;
@protocol AKPrivateEmailUIProvider;

@interface AKPrivateEmailClientImpl : NSObject <AKPrivateEmailClientProtocol>
{
    id <AKPrivateEmailUIProvider> _uiProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000674cc
@property(retain, nonatomic) id <AKPrivateEmailUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void)presentPrivateEmailUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006737e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

