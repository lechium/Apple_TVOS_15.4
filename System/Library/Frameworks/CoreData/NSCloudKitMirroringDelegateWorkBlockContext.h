//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringDelegateWorkBlockContext : NSObject
{
    NSString *_transactionLabel;	// 8 = 0x8
    NSString *_powerAssertionLabel;	// 16 = 0x10
    id _uiAppInstance;	// 24 = 0x18
    unsigned long long _powerAssertionID;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x0000000000242dea
- (id)initWithTransactionLabel:(id)arg1 powerAssertionLabel:(id)arg2;	// IMP=0x0000000000242d67

@end

