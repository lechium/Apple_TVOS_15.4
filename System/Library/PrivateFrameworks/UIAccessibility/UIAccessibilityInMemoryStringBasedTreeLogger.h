//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIAccessibility/UIAccessibilityElementTraversalTreeLogger-Protocol.h>

@class NSMutableArray, NSMutableString, NSString;

@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject <UIAccessibilityElementTraversalTreeLogger>
{
    NSMutableString *_stringRepresentation;	// 8 = 0x8
    NSMutableArray *_currentPrefix;	// 16 = 0x10
    NSString *_prefix;	// 24 = 0x18
    NSString *_descriptionKey;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000061698
- (void)pop;	// IMP=0x0000000000061682
- (void)push;	// IMP=0x0000000000061665
- (void)logElement:(id)arg1;	// IMP=0x0000000000061584
- (id)stringRepresentation;	// IMP=0x0000000000061566
- (id)initWithPrefix:(id)arg1 elementDescriptionKey:(id)arg2;	// IMP=0x00000000000613f5
- (id)initWithElementDescriptionKey:(id)arg1;	// IMP=0x00000000000613d5
- (id)initWithPrefix:(id)arg1;	// IMP=0x00000000000613bc
- (id)init;	// IMP=0x00000000000613a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

