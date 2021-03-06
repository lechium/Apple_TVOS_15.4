//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, AKAppleIDServerUIDataHarvester, NSString, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@interface AAUIAuthKitRecoveryHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> _delegate;	// 8 = 0x8
    AAUIServerHookResponse *_serverHookResponse;	// 16 = 0x10
    AKAppleIDServerUIDataHarvester *_serverDataHarvester;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000017e7d
@property(retain, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester; // @synthesize serverDataHarvester=_serverDataHarvester;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse; // @synthesize serverHookResponse=_serverHookResponse;
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void)harvestDataFromResponse:(id)arg1;	// IMP=0x0000000000017d7d
- (_Bool)shouldMatchModel:(id)arg1;	// IMP=0x0000000000017bfc
- (_Bool)shouldMatchElement:(id)arg1;	// IMP=0x0000000000017bf4
- (id)_cdpStateUIProvider;	// IMP=0x0000000000017b4c
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001770e
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000176f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RUIObjectModel *objectModel;
@property(readonly) Class superclass;

@end

