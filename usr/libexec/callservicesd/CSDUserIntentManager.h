//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDUserIntentManager : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *privateAPIValidator;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_applicationStateValidator;	// 24 = 0x18
    MISSING_TYPE *donatedIntentValidator;	// 40 = 0x28
    MISSING_TYPE *backgroundBluetoothAccessValidator;	// 56 = 0x38
    MISSING_TYPE *mediaRemoteStateValidator;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000001a5160
- (id)init;	// IMP=0x00100000001a5100
- (_Bool)validateUserIntentForCallSource:(id)arg1;	// IMP=0x00100000001a50a0
- (void)donateUserIntentForCallProviderIdentifier:(id)arg1;	// IMP=0x00100000001a4960
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001a4920

@end

