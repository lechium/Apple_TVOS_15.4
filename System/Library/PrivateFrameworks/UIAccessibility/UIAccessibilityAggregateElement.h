//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement
{
    NSArray *_representedElements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000065da0
@property(retain, nonatomic) NSArray *representedElements; // @synthesize representedElements=_representedElements;
- (struct CGRect)accessibilityFrame;	// IMP=0x0000000000065cb6
- (id)accessibilityLabel;	// IMP=0x0000000000065c1e
- (void)addRepresentedObject:(id)arg1;	// IMP=0x0000000000065b99
- (id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2;	// IMP=0x0000000000065b27
- (id)initWithAccessibilityContainer:(id)arg1;	// IMP=0x00000000000710c3

@end
