//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDBDataProtectionObserver;

@interface EKDataProtectionObserver : NSObject
{
    CDUnknownBlockType _stateChangedCallback;	// 8 = 0x8
    CDBDataProtectionObserver *_dataProtectionObserver;	// 16 = 0x10
}

+ (id)stateChangedNotificationName;	// IMP=0x000000000009a7e4
- (void).cxx_destruct;	// IMP=0x000000000009a831
@property(retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver; // @synthesize dataProtectionObserver=_dataProtectionObserver;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(readonly, nonatomic) _Bool dataIsAccessible;
- (void)_dataProtectionStateChanged;	// IMP=0x000000000009a73a
- (id)init;	// IMP=0x000000000009a5e6

@end
