//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface TVLListByNavigationElement
{
    int _currentIndex;	// 8 = 0x8
    NSArray *_navigationItems;	// 16 = 0x10
    NSString *_onNavigate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003139a
@property(copy, nonatomic) NSString *onNavigate; // @synthesize onNavigate=_onNavigate;
@property(retain, nonatomic) NSArray *navigationItems; // @synthesize navigationItems=_navigationItems;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000311f6
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;	// IMP=0x0000000000030ef5

@end

