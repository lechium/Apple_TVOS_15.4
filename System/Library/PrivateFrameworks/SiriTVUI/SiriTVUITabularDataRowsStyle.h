//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSNumber;

@interface SiriTVUITabularDataRowsStyle : NSObject
{
    NSNumber *_minimumHeight;	// 8 = 0x8
    NSNumber *_showTopBorder;	// 16 = 0x10
    NSIndexSet *_rowIndexes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000023cc8
@property(copy, nonatomic) NSIndexSet *rowIndexes; // @synthesize rowIndexes=_rowIndexes;
@property(copy, nonatomic) NSNumber *showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(copy, nonatomic) NSNumber *minimumHeight; // @synthesize minimumHeight=_minimumHeight;

@end

