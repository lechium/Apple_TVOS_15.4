//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGQuickResponsesClassScore : NSObject
{
    double _value;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (long long)compare:(id)arg1;	// IMP=0x000000000002e7c0
- (id)initWithValue:(double)arg1 index:(unsigned long long)arg2;	// IMP=0x000000000002e774

@end
