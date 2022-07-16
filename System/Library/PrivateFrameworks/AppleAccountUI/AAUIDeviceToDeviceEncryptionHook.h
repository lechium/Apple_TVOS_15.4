//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@interface AAUIDeviceToDeviceEncryptionHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> delegate;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000aa45
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate;
- (void)_performHSAUpgradeWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a98c
- (_Bool)shouldMatchModel:(id)arg1;	// IMP=0x000000000000a90a
- (_Bool)shouldMatchElement:(id)arg1;	// IMP=0x000000000000a8bc
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a844
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a82c
- (id)initWithAltDSID:(id)arg1 upgradeContext:(id)arg2;	// IMP=0x000000000000a793

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RUIObjectModel *objectModel;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property(readonly) Class superclass;

@end

