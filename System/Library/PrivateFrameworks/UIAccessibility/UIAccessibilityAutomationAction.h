//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIAccessibilityAutomationAction : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000686a8
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000068616

@end

