//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAccessibilityCustomRotorItemResult;

@interface UIAccessibilityCustomRotorSearchPredicate : NSObject
{
    UIAccessibilityCustomRotorItemResult *_currentItem;	// 8 = 0x8
    long long _searchDirection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f12c
@property(nonatomic) long long searchDirection; // @synthesize searchDirection=_searchDirection;
@property(retain, nonatomic) UIAccessibilityCustomRotorItemResult *currentItem; // @synthesize currentItem=_currentItem;

@end

