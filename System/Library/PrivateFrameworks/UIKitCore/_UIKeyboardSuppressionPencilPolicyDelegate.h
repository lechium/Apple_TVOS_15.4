//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIKeyboardSuppressionPolicyDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIKeyboardSuppressionPencilPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate>
{
    _Bool _isQueryingLocaleIdentifier;	// 8 = 0x8
    _Bool _suppressLocaleIdentifier;	// 9 = 0x9
    NSString *_overrideLocaleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007997a7
@property(copy, nonatomic) NSString *_overrideLocaleIdentifier; // @synthesize _overrideLocaleIdentifier;
@property(nonatomic) _Bool _suppressLocaleIdentifier; // @synthesize _suppressLocaleIdentifier;
- (_Bool)_shouldSuppressForDelegate:(id)arg1;	// IMP=0x00000000007996c8
- (id)_recognitionLocaleIdentifier;	// IMP=0x00000000007996b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
