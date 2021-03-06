//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface GEOResultRefinementSort : NSObject
{
    NSString *_displayName;	// 8 = 0x8
    NSArray *_sorts;	// 16 = 0x10
    NSNumber *_selectedElementIndex;	// 24 = 0x18
    NSNumber *_defaultSelectedElementIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000376477
@property(retain, nonatomic) NSNumber *defaultSelectedElementIndex; // @synthesize defaultSelectedElementIndex=_defaultSelectedElementIndex;
@property(retain, nonatomic) NSNumber *selectedElementIndex; // @synthesize selectedElementIndex=_selectedElementIndex;
@property(copy, nonatomic) NSArray *sorts; // @synthesize sorts=_sorts;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)convertToGEOPDResultRefinementSort;	// IMP=0x0000000000376163
- (id)initWithResultRefinementSort:(id)arg1;	// IMP=0x0000000000375fba
- (id)initWithDisplayName:(id)arg1 sorts:(id)arg2 selectedElementIndex:(id)arg3 defaultSelectedElementIndex:(id)arg4;	// IMP=0x0000000000375e7f

@end

