//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RUIActionSignal : NSObject
{
    unsigned long long _topSignal;	// 8 = 0x8
    NSMutableArray *_subActions;	// 16 = 0x10
}

+ (unsigned long long)signalTypeForString:(id)arg1;	// IMP=0x0000000000014db8
+ (id)stringForActionSignal:(unsigned long long)arg1;	// IMP=0x0000000000014d1b
+ (id)signalWithString:(id)arg1;	// IMP=0x0000000000014cd2
+ (id)signalWithType:(unsigned long long)arg1;	// IMP=0x0000000000014c58
- (void).cxx_destruct;	// IMP=0x0000000000015081
@property(retain, nonatomic) NSMutableArray *subActions; // @synthesize subActions=_subActions;
@property(nonatomic) unsigned long long topSignal; // @synthesize topSignal=_topSignal;
- (id)description;	// IMP=0x0000000000014f6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014e03

@end

