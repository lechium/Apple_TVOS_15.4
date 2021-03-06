//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@interface AAUICustodianStartSessionHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001a1fd
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startSessionWithServerAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019bff
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019b87
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019b6f
- (_Bool)shouldMatchModel:(id)arg1;	// IMP=0x0000000000019aed
- (_Bool)shouldMatchElement:(id)arg1;	// IMP=0x0000000000019a9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RUIObjectModel *objectModel;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property(readonly) Class superclass;

@end

