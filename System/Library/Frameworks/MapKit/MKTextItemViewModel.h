//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTextItemViewModel : NSObject
{
    NSArray *_values;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001637a6
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)stringsForRowAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001636e5
- (unsigned long long)numberOfRows;	// IMP=0x00000000001636a1
- (id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4;	// IMP=0x0000000000162f70

@end

