//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKitUI/NSCopying-Protocol.h>

@interface AKBasicLoginActions : NSObject <NSCopying>
{
    CDUnknownBlockType _authenticateAction;	// 8 = 0x8
    CDUnknownBlockType _ak_cancelAction;	// 16 = 0x10
    CDUnknownBlockType _createIDAction;	// 24 = 0x18
    CDUnknownBlockType _useIDAction;	// 32 = 0x20
    CDUnknownBlockType _forgotIDAction;	// 40 = 0x28
    CDUnknownBlockType _forgotPasswordAction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000030cc6
@property(copy, nonatomic) CDUnknownBlockType forgotPasswordAction; // @synthesize forgotPasswordAction=_forgotPasswordAction;
@property(copy, nonatomic) CDUnknownBlockType forgotIDAction; // @synthesize forgotIDAction=_forgotIDAction;
@property(copy, nonatomic) CDUnknownBlockType useIDAction; // @synthesize useIDAction=_useIDAction;
@property(copy, nonatomic) CDUnknownBlockType createIDAction; // @synthesize createIDAction=_createIDAction;
@property(copy, nonatomic) CDUnknownBlockType ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
@property(copy, nonatomic) CDUnknownBlockType authenticateAction; // @synthesize authenticateAction=_authenticateAction;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030b67

@end

